//Retrieves, but does not remove, the tail (last element) of this list.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void list(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    
    temp -> data = x;//setting the data
    temp -> next = head; //setting the node to be the head
    head = temp; //setting new head
}

void returnLastElement()
{
    struct Node* temp = head;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    
    //print the first element
    printf("\nThe last element is: %d ", temp -> data);
}

void print()
{
    struct Node* temp = head;
    printf("The list is: \n");

    while(temp!= NULL)
    {
        //traverse through and print the list
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}


int main()
{
    list(1);
    list(2);
    list(3);
    list(4);

    print();
    returnLastElement();
}