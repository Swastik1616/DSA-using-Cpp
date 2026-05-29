#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

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

void printNodes(){
    struct Node* p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}

int main(){
    head = NULL;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        insertAtEnd(x);
    }

    printNodes();
    return 0;
}