//returns true if this list contains the specified element.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* middleNode(struct ListNode* head) {
    //trying tortus and haer
    struct ListNode* fast = head;
    struct ListNode* slow = head;


    if(slow->next == NULL)
    {
        return slow;
    }
    else if(slow->next->next == NULL)
    {
        return slow -> next;
    }
    else
    {
        fast = fast -> next;
        fast = fast -> next;
        
        while(fast-> next != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
            //if the next node will be null which will be an odd list then just move torus ince and return
            if(fast -> next == NULL)
            {
                return slow -> next;
            }
            fast = fast -> next;
            
        }
        return slow -> next;
    }
}