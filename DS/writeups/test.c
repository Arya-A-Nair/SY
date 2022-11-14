#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};



struct Node* createBST(){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp=NULL;
    return temp;
};

struct Node* newNode(int value){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
};
struct Node *insert(struct Node *node, int key) {
    if (node == NULL) return newNode(key);
    if (key < node->data)
    node->left = insert(node->left, key);
    else
    node->right = insert(node->right, key);
    return node;
}





struct Node* search(struct Node* root,int k)
{
    struct Node *p = root;
    
    while (p != NULL)
        {
        if (p->data == k)
            break;
        if (k < p->data)
            p = p->left;
        else
            p = p->right;
        }
    if (p == NULL)
    {
        return NULL;
    }
    else{
        return p;
    }
}

struct Node* getParent(struct Node* node,int key){
    struct Node* parent=NULL;
    while(node!=NULL && node->data!=key){
        parent=node;
        if(parent->data>key){
            node=node->left;
        }
        else{
            node=node->right;
        }
    }
    return parent;
}
struct Node* deleteNode(struct Node* root,int key){
    if(root==NULL)return root;
    if(key<root->data) root->left=deleteNode(root->left,key);
    if(key>root->data) root->right=deleteNode(root->right,key);
    else{
        if(root->left==NULL){
            struct Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct Node* temp=root->left;
            free(root);
            return temp;
        }

        struct Node* temp1=root->right;
        while(temp1 && temp1->left!=NULL){
            temp1=temp1->left;
        }
        temp1->left=root->left;
        root=root->right;
    }
    return root;
}



void inorder(struct Node *root) {
    if (root != NULL) {
        if(root->left) inorder(root->left);
        printf("%d ", root->data);
        if(root->right) inorder(root->right);
    }
    else{return;}
}

int main(){
    printf("Code By Arya Nair\n");
    int choice=0;
    struct Node* head;
    while(choice!=7){
        printf("1. Create BST\n2. Insert Element\n3. Display Inorder\n4. Get Parent\n5. Search\n6. Delete\n7. Exit\nEnter Your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                head=createBST();
                break;
            }
            case 2:{
                printf("Enter element to insert: ");
                int data;
                scanf("%d",&data);
                head=insert(head,data);
                break;
            }
            case 3:{
                printf("Inorder-> ");
                inorder(head);
                printf("\n");
                break;
            }
            case 4:{
                printf("Get Parent");
                int data;
                scanf("%d",&data);
                struct Node* temp=getParent(head,data);
                printf("Parent element-%d\n",temp->data);
                break;
            }
            case 5:{
                printf("Search: ");
                int data;
                scanf("%d",&data);
                struct Node* temp=search(head,data);
                printf("Answer- %d\n",temp->data);
                break;
            }
            case 6:{
                printf("Delete Node: ");
                int data;
                scanf("%d",&data);
                deleteNode(head,data);
                printf("Node Deleted\n");
                break;
            }
            case 7:
            {
                return 0;
            }
        }
    }
}