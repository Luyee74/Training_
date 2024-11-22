//
// Created by Lucas  on 21/11/2024.
//

#include "cell.h"
#include <stdio.h>
#include <stdlib.h>


void createEmptyHtlist(t_ht_list* list ) {
    if (list != NULL)
        list -> head = NULL ;
    list -> tail = NULL ;

}

void creatEmptylist(t_std_list*list) {
    if (list != NULL)
        list->head = NULL;
}
void showStdList( t_std_list list ) {
    t_cell * cur = list.head;
    printf(" list [ head @-]-->");
    if (cur ==NULL) {
        printf(" NULL");
        return;
    }
    while(cur !=NULL) {
        printf("%d | @-]-->", cur->value);
        cur = cur ->next;
    }
    printf("NULL");
}
t_cell * createCell( int val ) {
    t_cell * new_cell = NULL;
    new_cell = malloc(1*sizeof(t_cell));
    if ( new_cell == NULL ) {
        return NULL;
    }
    new_cell->value = val;
    new_cell->next = NULL;
    return new_cell;
}
void addHeadStd(t_std_list * list , int value) {
    t_cell * new_cell = createCell(value);
    new_cell->next = list->head;
    list->head = new_cell;
}
void addTailStd(t_std_list * list, int value) {
    t_cell * new_cell = createCell(value);
    if (list-> head == NULL)
        return;
    t_cell * cur = list->head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = new_cell;
}
void removeHeadSTD(t_std_list *list ) {
    if (list->head == NULL) {
        return;
    }
    else {
        t_cell * cur = list->head;
        list->head = list->head ->next;
        free(cur);
        cur = NULL;
    }
}
void removeTailSTD(t_std_list *list) {
    if (list->head == NULL) {
        return;
    }
    t_cell*cur = list->head ;
    t_cell * prev = NULL;
    while (cur-> next !=NULL) {
        prev = cur ;
        cur = cur->next;
    }
    prev->next = NULL;
    free(cur);
    cur = NULL;
    return;
}
void showHTList (t_ht_list list) {
    t_cell * cur = list.head ;
    if (list.head == NULL) {
        printf("NULL");
        return;
    }
    printf("[");
    while (cur != NULL) {
        printf("%d |@-> \n", cur->value);
        cur = cur -> next;
    }
    return;
}
int isValInHTList (t_ht_list list , int val) {
    t_cell * cur = list.head ;
    if (list.head == NULL) {
        return 0;
    }
    while ( cur != NULL && val != cur->value ) {
        cur = cur -> next;
    }
    if (cur !=NULL) {
        return 1;
    }
    return 0;
}
void isEmptyHtList (t_ht_list *list) {
    list->head = list->tail = NULL;
}
int isValInHtList(t_ht_list list, int val)
{
    t_cell *temp = list.head;
    int found = 0;

    while ((temp != NULL) && (val != temp->value))
    {
        temp = temp->next;
    }

    if (temp != NULL)
    {
        found = 1;
    }

    return found;
}
void addTailHt(t_ht_list *p_list, int val)
{
    t_cell *new = createCell(val);

    if (p_list->head == NULL)
    {
        p_list->head = new;
        p_list->tail = new;
    }
    else
    {
        p_list->tail->next = new;
        p_list->tail = new;
    }

    return;
}

void removeValFromHtList(t_ht_list *p_list, int val)
{
    t_cell * temp, *prev;

    if (isValInHtList(*p_list, val)==0)
    {
        return;
    }

    temp = p_list->head;
    prev = temp;

    while ((temp != NULL)&&(temp->value != val))
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == p_list->head)
    {
        p_list->head = p_list->head->next;


        if (p_list->head == NULL)
        {
            p_list->tail == NULL;
        }
    }
    else
    {
        prev->next = temp->next;

        if (temp == p_list->tail)
        {
            p_list->tail = prev;
        }
    }

}
t_circ_list createEmptyCircList()
{
    t_circ_list cl;
    cl.head = NULL;
    cl.tail = NULL;

    return cl;
}
void displayCList(t_circ_list clist)
{
    t_cell *temp;
    if (clist.head == NULL)
    {
        printf("[]");
    }
    else {
        temp = clist.head;
        printf("[");
        while (temp != clist.tail)
        {
            printf("%d|", temp->value);
            temp = temp->next;
        }
        printf("%d](forever)",clist.tail->value);
    }
    return;
}
void addHeadCircList(t_circ_list *p_cl, int value)
{
    t_cell *nouv = createCell(value);
    if (p_cl->head == NULL)
    {
        p_cl->head = p_cl->tail = nouv;
        p_cl->tail->next = p_cl->head;
    }
    else
    {
        nouv->next = p_cl->head;
        p_cl->head = nouv;
        p_cl->tail->next = p_cl->head;
    }

    return;
}
void removeCellCircList(t_circ_list * p_list, int val)
{
    // liste vide
    if (NULL == p_list->head) {
        return;
    }

    // si la liste contient 1 seule cellule
    if (p_list->head == p_list->tail && p_list->head->value == val){
        free(p_list->head);
        p_list->head = p_list->tail = NULL;
        return;
    }

    // parcours de la liste contenant au moins 2 cellules.
    t_cell * temp = NULL;
    t_cell * prev = NULL;
    temp = prev = p_list->head;

    // on avance dans la liste tant que la cellule n’est pas la
    // dernière et que sa valeur n’est pas celle recherchée
    while ((temp->next != p_list->head) && (temp->value != val)){
        prev = temp;
        temp = temp->next;
    }

    // on a trouvé la cellule (sauf si c’est la dernière)
    if (temp->value == val){
        // si c’est la première : head et tail à modifier
        if (temp == p_list->head){
            p_list->head = p_list->head->next;
            p_list->tail->next = p_list->head;
        }
        else {
            prev->next = temp->next;
        }
    }

    // si la val est trouvée dans la dernière cellule
    if (p_list->tail->value == val){
        prev->next = temp->next;
        p_list->tail = prev;
    }

    // dans tous les cas, il faut libérer la cellule trouvée p
    // elle est pointée par temp
    if (temp->value == val){
        free(temp);
        // INUTILE car variable locale temp = temp→next = NULL;
    }
}
void removeTailCircList(t_circ_list * p_list)
{
    // liste vide
    if (NULL == p_list->head) {
        return;
    }

    // si la liste contient 1 seule cellule
    if (p_list->head == p_list->tail) {
        free(p_list->head);
        p_list->head = p_list->tail = NULL;
        return;
    }

    // suppression de la queue
    t_cell * temp = p_list->tail;
    t_cell * prev = p_list->head;

    // on parcourt la liste pour trouver l'avant-dernier élément
    while (prev->next != p_list->tail) {
        prev = prev->next;
    }

    // mise à jour des pointeurs
    prev->next = p_list->head;
    p_list->tail = prev;

    // libération de la cellule
    free(temp);
}