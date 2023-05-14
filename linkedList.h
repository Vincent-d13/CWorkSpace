#include <stdbool.h>

struct Node{

    int key;
    Node* ptr;

};

typedef struct Node MyNode;

//typedef struct _ABC {
 //   int x;
  //  double y;

//} ABC;

extern struct Node* createNode(int value );
extern struct Node* addNode(struct Node* list, int value);
extern struct Node* deleteNode(struct Node* list, int value);
extern void displayList(struct Node * list);
extern bool deleteList(struct Node* list);
extern struct findNode(struct Node* list, int value);