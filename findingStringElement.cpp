//returns true if this list contains the specified element.
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Node {
    char data[];
    struct Node* next;
};

struct Node* head;

void list(char list[])
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    
    temp -> data = list;//setting the data
    temp -> next = head; //setting the node to be the head
    head = temp; //setting new head
}

bool checkingList(char test[])
{
    struct Node* temp = head;

    //create a while loop that has a checker like eqal to and then iterate through it
    //so if its words we have to use strcmp() to compare but since this one is int comparison we havr to d o ==

    //we are going to iterate while there are still nodes in the list
    while(temp != NULL)
    {
        //going to check if its present
        if(test == temp -> data)
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
    list('test1');
    list('test2');
    list('test3');
    list('test4');

    checkingList('test4');
}