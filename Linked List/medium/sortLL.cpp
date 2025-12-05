#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *mergeList(ListNode *l1, ListNode *l2)
{
    ListNode *head = new ListNode(0);
    ListNode *itr = head;
    while (l1 && l2)
    {
        if (l1->val > l2->val)
        {
            itr->next = l2;
            l2 = l2->next;
        }
        else
        {
            itr->next = l1;
            l1 = l1->next;
        }
        itr = itr->next;
    }
    if (l1)
    {
        itr->next = l1;
    }
    else if (l2)
    {
        itr->next = l2;
    }
    return head->next;
}
ListNode *sortList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *temp = slow;
    while (fast && fast->next)
    {
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = NULL;
    ListNode *l1 = sortList(head);
    ListNode *l2 = sortList(slow);

    return mergeList(l1, l2);
}
int main(){
    
    return 0;
}