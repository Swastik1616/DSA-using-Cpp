#include<bits/stdc++.h>
using namespace std;

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
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    head = NULL;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        insertAtBegin(x);
    }

    printNodes();
    return 0;
}