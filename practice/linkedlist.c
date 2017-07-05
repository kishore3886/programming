#include<stdio.h>
#include<stdlib.h>

struct node {
	
		int data;
	//next -- pointer to node
		struct node* next;
	};
struct node* head;


//insert element in first location

void insertFirst( int input){
	//create a link 
	  struct node* temp1 = NULL;
	  temp1 = malloc(sizeof(struct node));     
	  temp1->data=input;
	  temp1->next= head;
      head=temp1;
	 

}
//display the list
void printNumbers()
{
  struct node* temp= head;
	printf("list is : ");
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");

}
int main(void){

	
	printf("how many numbers");
	int n,i,x;
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){

		printf("Enter numbers");
		scanf("%d",&x);
		insertFirst(x);
		printNumbers();
	}
	
}
