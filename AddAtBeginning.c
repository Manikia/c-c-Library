#include <stdlib.h>
#include <stdio.h>

//creating node
struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

//insert at beginning
void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(x)); //creating new node

	//giving the temp node as the value of x
	temp -> data = x;
	temp -> next = head; //setting new node to be head
	head = temp; //setting the temp to be new head
}

void Print()
{

	while(head != NULL) //looping until the end
	{
		printf("%d", head ->data); //printing what the list has
		head = head -> next;//moving temp to next one to print
	}
	return;
}
int main()
{ 
	Insert(4);
	Insert(2);
	Insert(6);

	Print();
}