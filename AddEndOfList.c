#include <stdlib.h>
#include <stdio.h>

//creating node
struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

//insert at end
void InsertAtEnd(int x)
{
	//have to create new node to equal to null bc its at the end
	struct Node* temp = (struct Node*)malloc(sizeof(x));

	temp -> data =x;
	temp -> next = NULL; //null for now while w iterate to add at end
	//create a statement if the list is empty and if not then we have to traverse through it and when it breaks, then add the new node at the endw the temp node

	//check if the ll is null
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		struct Node* head2 = head;
		//checks if the next node is null if not then it will move forward to going to next node
		while(head2 -> next != NULL)
		{
			head2 = head2 -> next;
		}
		//once it sees that the next node is empty/null it will initialize it to the temp as the next one
		head2 -> next = temp;
	}
}

void Print()
{
	//we do head != null so it breaks when it is null and not before so we can get all the nodes
	while(head != NULL)
	{
		printf("%d ", head -> data);
		head = head -> next;
	}
}

int main()
{ 
	InsertAtEnd(4);
	InsertAtEnd(2);
	InsertAtEnd(6);

	Print();
}