<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

//LIFO Linked List Implementation
int lifo(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = list;
        list = n;

    }
    printf("LIFO Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return 0;
}

//FIFO Linked List Implementation
int fifo(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = NULL;
        if(list == NULL){
            list = n;
        }
        else{
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    printf("FIFO Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}


//Sorted Linked List Implementation
int sortedLinkedList(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = NULL;
        if(list == NULL || list->data >= n->data){
            n->next = list;
            list = n;
        }
        else{
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL || ptr->next->data >= n->data){
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    printf("Sorted Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter number of nodes: ");
    scanf("%d", &num);
    sortedLinkedList(num);
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

//LIFO Linked List Implementation
int lifo(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = list;
        list = n;

    }
    printf("LIFO Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return 0;
}

//FIFO Linked List Implementation
int fifo(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = NULL;
        if(list == NULL){
            list = n;
        }
        else{
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    printf("FIFO Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}


//Sorted Linked List Implementation
int sortedLinkedList(int num){
    node *list = NULL;
    for(int i=0; i<num; i++){
        node *n = malloc(sizeof(node));
        if (n == NULL){
            printf("Memory allocation failed\n");
            return -1;
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &n->data);
        n->next = NULL;
        if(list == NULL || list->data >= n->data){
            n->next = list;
            list = n;
        }
        else{
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL || ptr->next->data >= n->data){
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    printf("Sorted Linked List:\n");
    node *ptr = list;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter number of nodes: ");
    scanf("%d", &num);
    sortedLinkedList(num);
    return 0;
>>>>>>> e692b865351512c6cb2a7a8cb6210672b415bf2d
}