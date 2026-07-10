#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createLL(int x,struct Node* head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head==NULL) head = temp;
    else{
        struct Node* ptr = head;
        while(ptr->next != NULL) ptr = ptr->next;
        ptr->next = temp;
    }
    return head;
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

struct Node* deleteFirst(struct Node* head){
    if(head == NULL) return NULL;
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main(){
    struct Node* head = NULL;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        head = createLL(x,head);
    }
    
    printf("The Linked List is: ");
    traverseLL(head);

    printf("The New Linked List is: ");
    head = deleteFirst(head);
    traverseLL(head);

    printf("The New Linked List is: ");
    head = deleteFirst(head);
    traverseLL(head);

    printf("The New Linked List is: ");
    head = deleteFirst(head);
    traverseLL(head);

    printf("The New Linked List is: ");
    head = deleteFirst(head);
    traverseLL(head);
    
    return 0;
}