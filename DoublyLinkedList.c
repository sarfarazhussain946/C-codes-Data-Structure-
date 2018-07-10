/* Doubly Linked List */

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;

struct node* getNewNode(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
 
void InsertAtHead(int data){
    struct node* newNode=getNewNode(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
} 

void Print(){
    struct node* temp=head;
     printf("\nThe list is: ");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void PrintRev(){
    struct node* temp=head;
    while(temp->next!=NULL){              /*Going to last node*/
        temp=temp->next;
    }
    printf("\nThe reverse list is: ");
    while(temp!=NULL){              /*reversing back and printing*/
         printf("%d\t",temp->data);
         temp=temp->prev;
    }
    printf("\n");
}

void InsertAtLast(int data){
    struct node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    struct node* newNode=getNewNode(data);
    temp->next=newNode;
    newNode->prev=temp;
}

void main(){
    head=NULL;
    InsertAtHead(3);  Print(); PrintRev();
    InsertAtHead(5);  Print(); PrintRev();
    InsertAtHead(6);  Print(); PrintRev();
    InsertAtHead(2);  Print(); PrintRev();
    InsertAtLast(12); Print(); PrintRev();
    
}
