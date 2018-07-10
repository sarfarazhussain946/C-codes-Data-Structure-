/******************************************************************************



*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 101
int A[MAX_SIZE], top=-1;
int push(int x){
    if(top==MAX_SIZE){
        printf("The stack is full");
        return;
    }
    top++;
    A[top]=x;
    printf("\nOne element Pushed....");
    return 0;
}
 void pop(){
     if(top==-1){
         printf("The stack is empty...nothing to delete");
         return;
     }
    top=top-1;
    printf("\nOne element poped...");
 }
 void print(){
     int i;
     if(top==-1){
         printf("The stack is empty...nothing to show now");
         return;
     }
     printf("The elements are : ");
     for(i=0;i<=top;i++){
         printf("%d\t",A[i]);
     }
 }


int main()
{
   int ch,x;
   while(1){
       printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice: ");
       scanf("%d",&ch);
       switch(ch){
           case 1:
             printf("\nEnter number:");
             scanf("%d",&x);
             push(x);
             break;
           case 2:
             pop();
             break;
           case 3:
             print();
             break;
           case 4:
                exit(0);
           default :printf("Wrong Choice !");
             
           
        }
   } 

    return 0;
}

