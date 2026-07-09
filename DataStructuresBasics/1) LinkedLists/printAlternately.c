#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next;
}*head = NULL;

// struct Node* head;

void insertAtEnd(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if(head==NULL) head = temp;
    else{
        struct Node* ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

int printLL(struct Node *p){
    if(head==NULL) return 0;
    while(p->next!=NULL){
        printf("%d->",p->data);
        p = p->next;
    }
    printf("%d\n",p->data);
    return 0;
}

void printAlternately(struct Node* head){
    if(head == NULL) printf("The Linked list is empty\n");
    int c = 1;
    while(head){
        if(c%2) printf("%d ",head->data);
        head = head->next;
        c++;
    }
}

int main(){
    // head = NULL;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        insertAtEnd(x);
    }
   
    printf("The Linked List is : ");
    printLL(head);
    
    printf("Alternate Nodes of the Linked List are : ");
    printAlternately(head);
    return 0; 
}