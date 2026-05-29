#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void insertAtEnd(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = nullptr;

    if (head == nullptr) {
        head = temp;
    } else {
        Node* ptr = head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insertAtBegin(int x) {
    Node* temp = new Node();
    temp->data = x;
    
    if (head == nullptr) {
        head = temp;
        temp->next = nullptr;
    } else {
        temp->next = head;
        head = temp;
    }
}

/*
void insertAtBegin(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = nullptr;

    if (head != nullptr) temp->next = head;
    head = temp;
}
*/

/*
void insertAtBegin(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
*/

void printNodes() {
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    head = nullptr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtBegin(x);
    }

    printNodes();
    
    return 0;
}