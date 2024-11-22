#ifndef NODE_H
#define NODE_H

// Définition de la structure Node
typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} t_node;

typedef struct s_tree
{
    t_node *root;
} t_tree;

// Déclaration des fonctions
t_node* createNode(int value);
t_node* insert(t_node *root, int value);
void displayTree(t_node *root, int space);
t_node *searchBST(t_tree tree, int val);
int treeHeight(t_node *root);
int treeNodeCount(t_node *root);
int isPerfectTree(t_tree t) ;
int isDegeneratedTree(t_tree t);
int isStrictNode(t_node *pn);
int isBalancedNode(t_node *pn);
int isBalancedTree(t_tree t);
int nodeHeight(t_node *node);

#endif // NODE_H

/* AVL Struct */

typedef struct s_node
{
    int value;
    struct s_node *left, *right;
    int height;
    int BF;
}t_node1;

void updateNodeHeight(t_node1 *pn);
void updateNodeBF(t_node1 *pn);
int isAVLnode(t_node1* pn);


t_node *doubleLeftRotation(t_node *pn);
t_node *doubleRightRotation(t_node *pn);