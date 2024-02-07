#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 struct ListNode {
    int val;
     struct ListNode *next;
 };

struct ListNode* reverseList(struct ListNode* head) {
    //maybe switch the first of each side and switch
    //like 1 and 5 then 2 and 4 switch

    //creating two pointers one for beginning and one for end
    struct ListNode* prevNode = NULL;
    struct ListNode* currentNode = head;
    struct ListNode* nextNode = head;
    

    if(head == NULL)
    {
        return currentNode;
    }

    while(currentNode -> next != NULL)
    {   
        nextNode = currentNode -> next;

        currentNode -> next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
        
    }
    
    currentNode -> next = prevNode;
    return currentNode;
}