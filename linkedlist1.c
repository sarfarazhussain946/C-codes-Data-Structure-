//Inserting a node at beginning of a list
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* head;

void Insert(int x){
	struct node* temp = (node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;
}
void Print(){
	struct node* temp = head;
	printf("\nThe numbers in the list are:\t");
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}	
	printf("\n");
}

int main(){
	head = NULL;
	int n,i,x;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nEnter the no.:\t");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
	return 0;	
}
