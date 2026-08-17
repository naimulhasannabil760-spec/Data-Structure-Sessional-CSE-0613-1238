#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

//LL e kono index thake na. eidike index ta imaginary
void insert_at_any_pos(Node* &head, int idx, int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=0; i<idx-1; i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print_Linked_list(Node* head){
    Node* tmp = head;
    while( tmp != NULL){
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}

int main(){
    Node* head = new Node(20);
    Node* a= new Node(30);
    Node* b = new Node(40);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 3, 150);
    print_Linked_list(head);
    return 0;
}
