
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head;

void Insert(int n)
{

    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    struct node *temp2 = (struct node*)malloc(sizeof(struct node));
    temp1 -> data = n;
    temp1 -> next = NULL;
    temp2 = head;
    if (head == NULL)
    {
        head = temp1;
    }
    else
  {
    while(temp2 -> next != NULL)
    {
        temp2 = temp2 -> next;
    }
    
    temp2 -> next = temp1;
 }
}

void Print(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


void Delete(int n){
    struct node* temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    
        int i;
        for(i=0;i<n-2;i++){
            temp1=temp1->next;
        }
        struct node* temp2= temp1->next;
        temp1->next=temp2->next;
        free(temp2);
}

int main()
{
    head=NULL; int n;
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(8);
    Print();
    printf("Enter the position for deletion:");
    scanf("%d",&n);
    Delete(n);
    Print();    
}

