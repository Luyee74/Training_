

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

t_stack_list createEmptyStack()
{
    t_stack_list list;
    list.head = NULL;
    return list;
}
int isEmptyStack(t_stack_list list) {
    return(list.head == NULL);
}

void displauy(t_stack_list list) {
    t_cell *cur = list.head;
    if (list.head == NULL) {
        printf("Queue is Empty");
        return;
    }
    printf("[");
    while (cur !=NULL) {
        printf("%c", cur->value);
        cur = cur -> next;
    }
    printf("]\n");
    return;
}


void unstack(t_stack_list *list ) {
    if (list -> head !=NULL) {
        t_cell *cur= list->head;
      list->head = list->head -> next;
        free(cur);
        cur=NULL;
        return;
    }
}


void stack(t_stack_list *ps, int val)
{
    t_cell *pn = createCell(val);
    pn->next = ps->head;
    ps->head = pn;
    return;
}
/*------------------------------------------------------------------------  TABLEAU */


t_stack_tab createEmptyStacktab(int size)
{
    t_stack_tab s;
    s.nbElts = 0;
    if(size < 0)
    {
        s.max_size = 0;
        s.values = NULL;
    }
    else
    {
        s.max_size = size;
        s.values = (int *)malloc(size * sizeof(int));
    }

    return s;
}

int isEmptyStacktab(t_stack_tab s) {
    return(s.nbElts == 0);
}

int fullStacktab(t_stack_tab s) {
    return(s.nbElts == s.max_size);
}

void displayStacktab(t_stack_tab s)
{
    int size = s.nbElts;

    printf("stack [");
    if (size==0)
    {
        printf("empty");
    }
    for (int cpt = size - 1; cpt >= 0; cpt--)
    {
        printf(" : %d ", s.values[cpt]);
    }
    printf("]\n");

    return;
}

void stacktab(t_stack_tab *ps, int val)
{
    int pos;
    pos = ps->nbElts;
    ps->values[pos] = val;
    ps->nbElts = pos+1;
    return;
}

int unstacktab(t_stack_tab *ps) {
    int res, pos;
    pos = ps->nbElts-1;
    res = ps->values[pos];
    ps->nbElts = pos;
    return res;
}

t_queue_list createEmptyQueue1()
{
    t_queue_list ql;

    ql.head = NULL;
    ql.tail = NULL;

    return ql;
}

int isEmptyQueue_list(t_queue_list ql)
{
    return (ql.head == NULL && ql.tail == NULL);
}

void displayQueue_list(t_queue_list ql)
{
    printf(" out <- ");
    t_cell *temp = ql.head;
    while (temp != NULL)
    {
        printf("%d <- ", temp->value);
        temp = temp->next;
    }
    printf("in\n");

    return;
}

void enqueue_list(t_queue_list *ql, int val)
{
    t_cell *nouv;
    nouv = createCell(val);

    if (isEmptyQueue_list(*ql))
    {
        ql->head = nouv;
        ql->tail = nouv;
    }
    else
    {
        ql->tail->next = nouv;
        ql->tail = nouv;
    }

    return;
}

int dequeue_list(t_queue_list *ql)
{
    int res;
    t_cell *temp;
    if (isEmptyQueue_list(*ql) == 0)
    {
        temp = ql->head;
        res = temp->value;
        ql->head = temp->next;
        free(temp);
    }

    return res;
}

void displayQueue_tab(t_queue_tab q)
{
    printf(" out <- ");
    for (int cpt = q.first ; cpt < q.last; cpt++)
    {
        printf("%d <- ", q.values[cpt%MAX]);
    }

    printf("in\n");

    return;
}

void enqueue_tab(t_queue_tab *pq, int val)
{
    int pos;
    pos = pq->last % MAX;
    pq->values[pos] = val;
    pq->last = pq->last+1;
}

int dequeue_tab(t_queue_tab *pq)
{
    int res;
    int pos = pq->first%MAX;
    res = pq->values[pos];
    pq->first = pq->first+1;
    return res;
}


