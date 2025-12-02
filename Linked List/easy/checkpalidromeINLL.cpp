#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;
class ListNode{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};
ListNode *reverseLL(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr != NULL)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    // step1: find middle
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // step2: reverse 2nd half of LL
    ListNode *second = reverseLL(slow->next);

    // step3: compare both halves
    ListNode *first = head;
    while (second != NULL)
    {
        if (first->val != second->val)
        {
            return false;
        }
        first = first->next;
        second = second->next;
    }

    return true;
}
int main(){
    
    return 0;
}