#include <stdio.h>
#include <stdlib.h>
#include "BST.c"

int main() {
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);



    int key = 60; 
    struct node* result = search(root, key);
    if (result != NULL) {
        printf("Key %d found in the BST.\n", key);
    } else {
        printf("Key %d not found in the BST.\n", key);
    }

     int key2 = 40; 
    printf("BST before deletion:\n");
    inorder(root); 

    root = deleteNode(root, key2);

    printf("\nBST after deletion of key %d:\n", key2);
    inorder(root); 

    printf("\nPostorder traversal:\n");
    printPreorder(root); 

     deleteTree(root);
    root = NULL;

    inorder(root);






}