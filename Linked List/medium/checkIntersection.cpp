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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    long l1 = 1;
    long l2 = 1;
    if (!headA)
        return NULL;
    if (!headB)
        return NULL;
    ListNode *tempA = headA;
    ListNode *tempB = headB;
    while (tempA->next)
    {
        l1++;
        tempA = tempA->next;
    }
    while (tempB->next)
    {
        l2++;
        tempB = tempB->next;
    }
    if (tempA != tempB)
        return NULL;

    tempA = headA;
    tempB = headB;
    while (l1 > l2)
    {
        tempA = tempA->next;
        l1--;
    }
    while (l1 < l2)
    {
        tempB = tempB->next;
        l2--;
    }

    while (tempA != tempB)
    {
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return tempA;
}
int main(){
    
    return 0;
}