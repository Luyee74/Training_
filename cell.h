//
// Created by Lucas  on 21/11/2024.
//

#ifndef CELL_H
#define CELL_H

#endif //CELL_H


typedef struct cell {
    int value;
    struct cell *next;
}t_cell;

typedef struct s_std_list {
    t_cell * head ;
    t_cell * tail ;
}t_ht_list ;

typedef struct {
    t_cell *head;
}t_std_list;

typedef t_ht_list t_circ_list;
void isEmptyHtList (t_ht_list *list);
void showStdList( t_std_list list );
t_cell *createCell(int val);
void addHeadStd(t_std_list *p_list, int val);
void addTailStd(t_std_list *p_list, int val);
void removeHeadStd(t_std_list *list);
void removeTailStd(t_std_list *list);
void removeValStd(t_std_list *list, int val);
int isValInHtList(t_ht_list, int);
void addTailHt(t_ht_list *p_list, int val);
void insertOrderedHtList(t_ht_list *p_htlist, int val);
void removeValFromHtList(t_ht_list *p_list, int val);
t_circ_list createEmptyCircList();
void displayCList(t_circ_list clist);
void addHeadCircList(t_circ_list *p_cl, int value);
void removeCellCircList(t_circ_list * p_list, int val);
void removeTailCircList(t_circ_list * p_list);