#ifndef QUEUE_H
#define QUEUE_H

#define NBMAX 50
#define MAX 50
#endif //QUEUE_H
#include "cell.h"



typedef t_std_list t_stack_list;
typedef t_std_list t_queue;



t_stack_list createEmptyStack();
int isEmptyStack_list(t_stack_list list);
void displauy(t_stack_list list);
void stack(t_stack_list *ps, int val);
void unstack_list(t_stack_list *list );


typedef struct s_stack_tab
{
    int *values;    // les valeurs à stocker
    int max_size;   // la taille max du tableau
    int nbElts;     // nbElts, le repère pour empiler/dépiler
} t_stack_tab;

t_stack_tab createEmptyStacktab(int size);
int isEmptyStack_tab(t_stack_tab s);
int isFullStack_tab(t_stack_tab s);
void displayStacktab(t_stack_tab s);
void stacktab(t_stack_tab *ps, int val);
int unstack_tab(t_stack_tab *ps);

typedef struct s_queue_tab
{
    int values[MAX];
    int first, last;
} t_queue_tab;

t_queue_tab createEmptyQueue();

typedef struct s_queue_list {
    t_cell *head; // Pointeur vers l'élément à l'avant de la file
    t_cell *tail;  // Pointeur vers l'élément à l'arrière de la file
} t_queue_list;

t_queue_list createEmptyQueue1();
int isEmptyQueue_list(t_queue_list ql);
void displayQueue_list(t_queue_list ql);
void enqueue_list(t_queue_list *ql, int val);
int dequeue_list(t_queue_list *ql);

void displayQueue_tab(t_queue_tab q);
void enqueue_tab(t_queue_tab *pq, int val);
int dequeue_tab(t_queue_tab *pq);