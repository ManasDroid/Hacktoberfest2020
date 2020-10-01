#include<stdio.h>
struct Node{
    int val;
    struct Node* next;
    
};
struct Node *newNode(int data){
    struct Node *n = (struct Node *)malloc(sizeof(struct node *));
    n->val = data;
    n->next==NULL;
    return n;
}
void insertAtTail(struct Node* head, int x){
    if(head==NULL){
        head = newNode(x);
        return;
    }
    struct Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode(x);
    return;
}
void deleteNode(struct Node* del){
    if(del==NULL) return;
    if(del->next==NULL) {
        printf("Couldn't be deleted\n");
        return;
    }
    struct Node* temp=del->next;
    del->val = del->next->val;
    del->next = del->next->next;
    delete(temp);
    return;
}
int main(){
    
}