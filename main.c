#include "node .h"
#include <stdio.h>

int main() {
    t_node *root = NULL;

    // Insérer des valeurs dans l'arbre dans l'ordre demandé
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);

    // Afficher l'arbre binaire de recherche
    printf("Arbre binaire de recherche :\n");
    displayTree(root, 0);

    return 0;
}


