#include "node .h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define max(a,b) (((a) > (b)) ? (a) : (b))

// Crée un nouveau nœud avec une valeur donnée
t_node* createNode(int value) {
    t_node* newNode = (t_node*)malloc(sizeof(t_node));
    if (newNode != NULL) {
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

// Insère un nouveau nœud dans l'arbre binaire de recherche
t_node* insert(t_node *root, int value) {
    // Si l'arbre est vide, crée le premier nœud
    if (root == NULL) {
        return createNode(value);
    }

    // Sinon, insère récursivement le nœud
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Fonction pour afficher l'arbre de manière hiérarchique
void displayTree(t_node *root, int space) {
    if (root == NULL)
        return;

    // Augmenter l'espace pour un affichage plus joli
    space += 5;

    // Afficher l'arbre droit en premier
    displayTree(root->right, space);

    // Afficher la valeur du nœud
    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->value);

    // Afficher l'arbre gauche
    displayTree(root->left, space);
}



t_node *searchBST(t_tree tree, int val)
{
    t_node *pn = tree.root;
    while (pn != NULL)
    {
        if (pn->value == val)
        {
            return pn;
        }
        else if (pn->value > val)
        {
            pn = pn->left;
        }
        else
        {
            pn = pn->right;
        }
    }
    return NULL;
}

int treeHeight(t_node *root) {
    if (root == NULL) {
        return -1; // Hauteur d'un arbre vide est -1
    }

    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int treeNodeCount(t_node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + treeNodeCount(root->left) + treeNodeCount(root->right);
}


//Soit mytree un arbre de hauteur H et stockant un nombre de nœuds N. L'arbre mytree est dit "parfait" si N = 2^(H+1)-1.
int isPerfectTree(t_tree t) {
    int height = treeHeight(t.root);
    int nodeCount = treeNodeCount(t.root);

    return ((int)pow(2, height + 1) - 1) == nodeCount;
}

int isDegeneratedTree(t_tree t)
{
    return (treeHeight(t.root)+1==treeNodeCount(t.root));
}

int isStrictNode(t_node *pn)
{
    if (pn==NULL)
    {
        return 1;
    }
    if ((pn->left == NULL) != (pn->right == NULL))
    {
        return 0;
    }

    int strictleft = isStrictNode(pn->left);
    int strictright = isStrictNode(pn->right);

    return (strictleft && strictright);
}

int nodeHeight(t_node *node) {
    if (node == NULL) {
        return -1; // Hauteur d'un arbre vide
    }
    int leftHeight = nodeHeight(node->left);
    int rightHeight = nodeHeight(node->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int isBalancedNode(t_node *pn)
{
    if (pn==NULL)
    {
        return 1;
    }

    int diffHeight = nodeHeight(pn->left)-nodeHeight(pn->right);

    if (abs(diffHeight) > 1)
    {
        return 0;
    }

    return ((isBalancedNode(pn->left)) && (isBalancedNode(pn->right)));
}

int isBalancedTree(t_tree t)
{
    if (isPerfectTree(t))
    {
        return 1;
    }
    if (isDegeneratedTree(t) && treeNodeCount(t.root) > 3)
    {
        return 0;
    }

    return isBalancedNode(t.root);
}

/* AVL functions */
void updateNodeHeight(t_node1 *pn)
{
    int hl, hr;
    if (pn != NULL)
    {
        updateNodeHeight(pn->left);
        updateNodeHeight(pn->right);

        if (pn->left == NULL)
        {
            hl = -1;
        }
        else
        {
            hl = pn->left->height;
        }

        if (pn->right == NULL)
        {
            hr = -1;
        }
        else
        {
            hr = pn->right->height;
        }

        pn->height = 1+max(hl, hr);
    }
    return;
}

void updateNodeBF(t_node1 *pn)
{
    int hl, hr;
    if (pn != NULL)
    {
        updateNodeBF(pn->left);
        updateNodeBF(pn->right);

        if (pn->left == NULL)
        {
            hl = -1;
        }
        else
        {
            hl = pn->left->height;
        }

        if (pn->right == NULL)
        {
            hr = -1;
        }
        else
        {
            hr = pn->right->height;
        }
        pn->BF = hl-hr;
    }
}

int isAVLnode(t_node1* pn)
{
    if (pn == NULL)
    {
        return 1;
    }

    if (pn->BF<2 && pn->BF>-2)
    {
        return isAVLnode(pn->left)&&isAVLnode(pn->right);
    }
    else
    {
        return 0;
    }
}

t_node *rightRotation(t_node *pn)
{
    t_node *pivot = pn->left;
    pn->left = pivot->right;
    pivot->right = pn;
    pn = pivot;
    return pn;
}
t_node *leftRotation(t_node *pn)
{
    t_node *pivot = pn->right;
    pn->right = pivot->left;
    pivot->left = pn;
    pn = pivot;
    return pn;
}
t_node *doubleLeftRotation(t_node *pn)
{
    pn->right =rightRotation(pn->right);
    pn = leftRotation(pn);
    return pn;
}
t_node *doubleRightRotation(t_node *pn)
{
    pn->left = leftRotation(pn->left);
    pn = rightRotation(pn);
    return pn;
}