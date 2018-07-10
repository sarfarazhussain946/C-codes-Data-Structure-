#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head;

void Insert(int data, int n){
    struct node* temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
    
        return;
    }
    struct node* temp2=head;
    int i;
    for(i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void Print(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Insert(6,5);
    Print();

    return 0;
}
