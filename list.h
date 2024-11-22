//
// Created by Lucas  on 22/11/2024.
//

#ifndef LIST_H
#define LIST_H

#endif //LIST_H

typedef struct s_cell {
    int value;
    struct s_cell *next;
} t_cell;

typedef struct s_list {
    t_cell *head;
} t_list;

// Prototypes de fonctions
void initList(t_list *list);
void insertList(t_list *list, int value);