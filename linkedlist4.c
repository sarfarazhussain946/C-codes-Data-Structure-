/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}node;

struct node* head;

void Insert(int n)
{

    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    struct node* temp2 = (struct node*)malloc(sizeof(struct node));
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


void Reverse(){
    struct node* tempPrev, *temp, *tempNext;
    tempPrev=NULL;
    temp=head;
    while(temp!=NULL){
        tempNext=temp->next;
        temp->next=tempPrev;
        tempPrev=temp;
        temp=tempNext;
        
    }
    head=tempPrev;
}

int main()
{
    head=NULL; int n;
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(8);
    Print();
    Reverse();
    printf("After getting reversed the list is: ");
    Print();    
}

