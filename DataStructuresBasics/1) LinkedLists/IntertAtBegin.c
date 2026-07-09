#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next;
}*head = NULL;

// struct Node* head;

void insertAtBegin(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    if(head==NULL){
        head = temp;
        temp->next = NULL;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

/*
void insertAtBegin(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (head != NULL) temp->next = head;
    head = temp;
}
*/

/*
void insertAtBegin(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
*/

int printLL(struct Node *p){
    if(head==NULL) return 0;
    while(p->next!=NULL){
        printf("%d->",p->data);
        p = p->next;
    }
    printf("%d\n",p->data);
    return 0;
}

int main(){
    // head = NULL;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        insertAtBegin(x);
    }
   
    printf("The Linked List is : ");
    printLL(head);

    return 0; 
}