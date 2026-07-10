#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void createLL(int x, struct Node**head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(*head == NULL) *head = temp;
    else{
        struct Node* ptr = *head;
        while(ptr->next != NULL) ptr = ptr->next;
        ptr->next = temp;
    }
}

void traverseLL(struct Node *head){
    if(head == NULL) printf("empty");
    else{
        struct Node* ptr = head;
        while(ptr->next!=NULL){
            printf("%d->",ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}

void deleteLastNode(struct Node **head){
    struct Node* temp = *head;
    if(temp == NULL) return;
    else if(temp->next == NULL){
        *head = NULL;
        free(temp);
    }
    else{
        while(temp->next->next != NULL) temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}

int main(){
    struct Node* head = NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        createLL(x,&head);
    }
    printf("The Linked List is: ");
    traverseLL(head);

    printf("The New Linked List is: ");
    deleteLastNode(&head);
    traverseLL(head);


    printf("The New Linked List is: ");
    deleteLastNode(&head);
    traverseLL(head);


    printf("The New Linked List is: ");
    deleteLastNode(&head);
    traverseLL(head);


    printf("The New Linked List is: ");
    deleteLastNode(&head);
    traverseLL(head);
    return 0;
}