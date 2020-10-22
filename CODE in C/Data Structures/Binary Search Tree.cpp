#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int key;
    struct Node* left;
    struct Node* right;
}node;

node* alloc(int val){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->key = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(node* r){
    if(r!=NULL){
        inorder(r->left);
        cout<<r->key<<" ";
        inorder(r->right);
    }
}

void preorder(node* r){
    if(r!=NULL){
        cout<<r->key<<" ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(node* r){
    if(r!=NULL){
        postorder(r->left);
        postorder(r->right);
        cout<<r->key<<" ";
    }
}

int findheight(node* r){
    if(r==NULL)
        return 0;
    else{
        return 1+max(findheight(r->left),findheight(r->right));
    }
}

int totalnodes(node* r){
    if(r==NULL)
        return 0;
    else{
        return 1+totalnodes(r->left)+totalnodes(r->right);
    }
}

int noofleaves(node* r){
    if(r==NULL)
        return 0;
    else if(r->left==NULL&&r->right==NULL)
        return 1;
    else if(r->right==NULL)
        return noofleaves(r->left);
    else if(r->left==NULL)
        return noofleaves(r->right);
    else
        return noofleaves(r->left)+noofleaves(r->right);
}

int totalinternalnodes(node* r){
    if(r==NULL)
        return 0;
    else if(r->left==NULL&&r->right==NULL){
        return 0;
    }
    else{
        return 1+totalinternalnodes(r->left)+totalinternalnodes(r->right);
    }
}

node* findmin(node* r){
    if(r==NULL) {
        cout<<"No nodes present"<<endl;
        return NULL;
    }
    else if(r->left==NULL) {
        cout<<"The minimum is "<<r->key<<endl;
        return r;
    }
    else
        return findmin(r->left);
}

void findmax(node* r){
    if(r==NULL)
        cout<<"No nodes present"<<endl;
    else if(r->right==NULL)
        cout<<"The maximum is "<<r->key<<endl;
    else
        findmax(r->right);
}

bool searchtree(node* r,int val){
    if(r==NULL){
        cout<<"Value NOT found"<<endl;
        return false;
    }
    if(r->key==val){
        cout<<"Value FOUND"<<endl;
        return true;
    }
    else if(r->key<val)
        return searchtree(r->right,val);
    else
        return searchtree(r->left,val);
}

node* insertnode(node* r,int val){
    if(r==NULL){
        r=alloc(val);
        return r;
    }
    else if(r->key>val){
        r->left = insertnode(r->left,val);
    }
    else{
        r->right = insertnode(r->right,val);
    }
    return r;
}

node* deletekey(node* r,int val){
    if(r==NULL)
        return r;
    else if(r->key<val){
        r->right = deletekey(r->right,val);
    }
    else if(val<r->key){
        r->left = deletekey(r->left,val);
    }
    else{
        if((r->left==NULL)||(r->right==NULL)){
            node* temp = r->left? r->left : r->right;
            if(temp==NULL){
                temp = r;
                r = NULL;
            }
            else{
                r = temp;
            }
            free(temp);
        }
        else{
            node* temp = findmin(r->right);
            r->key = temp->key;
            r->right = deletekey(r->right,temp->key);
            free(temp);
        }
    }
    return r;
}

int main(){//Insertion, Deletion and Traversal of a BST
    node* root=NULL;
    long int i,n,k;
    cout<<"-------- Choose any number from the below sequence -------------"<<endl;
    cout<<" 1. Insert "<<endl;
    cout<<" 2. Deletion "<<endl;
    cout<<" 3. Traversal "<<endl;
    cout<<" 4. Search a Value and find its existence "<<endl;
    cout<<" 5. Find Height "<<endl;
    cout<<" 6. Find Total Number of Nodes and number of Internal nodes and Number of Leaves "<<endl;
    cout<<" 7. Find Minimum and Maximum "<<endl;
    cout<<" 0. exit"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    while(true){
        cout<<"Enter next choice : ";
        cin>>i;
        switch(i){
            case 0:
                break;
            case 1:
                cout<<" Enter a value to insert :";
                cin>>n;
                root = insertnode(root,n);
                break;
            case 2:
                cout<<" Enter a value to delete :";
                cin>>n;
                root = deletekey(root,n);
                break;
            case 3:
                inorder(root);
                cout<<endl;
                preorder(root);
                cout<<endl;
                postorder(root);
                cout<<endl;
                break;
            case 4:
                cout<<" Enter a value to be search :"<<endl;
                cin>>n;
                searchtree(root,n);
                break;
            case 5:
                cout<<" Required height of the tree is "<<findheight(root)<<endl;
                break;
            case 6:
                cout<<" Total number of nodes : "<<totalnodes(root)<<endl;
                cout<<" Total number of internal nodes : "<<totalinternalnodes(root)<<endl;
                cout<<" Total number of leaf nodes : "<<noofleaves(root)<<endl;
                break;
            case 7:
                findmin(root);
                findmax(root);
                break;
        }
        if(i==0)
            break;
    }
    return 0;
}
