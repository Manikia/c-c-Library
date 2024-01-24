//going to clear a ll by deallocating and using free()

#include <stdio.h>
#include <stdlib.h>

struct Node{
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

void Print()
{
    struct Node* temp = head;
    //traverse and print list
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
}

void removeList()
{
    struct Node* temp = head;
    //going to iterate through the LL and then remove as we traverse through
    //printf("Left over is: ", temp -> data);
    
    while(temp != NULL)
    {
        //printf("%d \n", temp -> data);
        //creating another temp bc if we use the same one then it will start freeing at the end of the ll since we iterated through it
        //this is to print
        struct Node* temp2 = temp;
        while(temp2 != NULL)
        {
            printf("%d", temp2 -> data);
            temp2 = temp2 -> next;
        }
        //this is to deallocate
        printf("\n");
        free(temp);
        temp = temp -> next;
    }
}

int main()
{
    list(1);
    list(2);
    list(3);
    list(4);

    printf("Before the LL removal: \n");
    Print();

    printf("\nAfter the LL removal: \n");
    removeList();
}