//returns true if this list contains the specified element.
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

bool checkingList(int x)
{
    struct Node* temp = head;


    //create a while loop that has a checker like eqal to and then iterate through it
    //so if its words we have to use strcmp() to compare but since this one is int comparison we havr to d o ==

    //we are going to iterate while there are still nodes in the list
    while(temp != NULL)
    {
        //going to check if its present
        if(x  == temp -> data)
        {
            //if it is return true
            printf("True");
            return true;
        }
        temp = temp -> next ;
    }
    printf("False");
    return false;
}

int main()
{
    list(1);
    list(2);
    list(3);
    list(4);

    checkingList(2);
}