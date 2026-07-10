#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head = NULL;

void createLL(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head==NULL) head = temp;
    else{
        struct Node* ptr = head;
        while(ptr->next != NULL) ptr = ptr->next;
        ptr->next = temp;
    }
}

void traverseLL(struct Node* head){
    if(head == NULL) printf("empty");
    else{
        while(head->next!=NULL){
            printf("%d->",head->data);
            head = head->next;
        }
        printf("%d\n",head->data);
    }
}

void insertAfterPtr(int key,struct Node* ptr){ 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = ptr->next;
    ptr->next = temp;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        createLL(x);
    }

    printf("The Linked List is: ");
    traverseLL(head);

    struct Node* ptr = head->next;
    int key;
    scanf("%d",&key);
    insertAfterPtr(key,ptr);

    printf("The New Linked List is: ");
    traverseLL(head);
    return 0;
}