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
ListNode *reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = new ListNode(0);

    temp->next = head;
    ListNode *prvgroupend = temp;

    while (true)
    {
        ListNode *itr = prvgroupend;

        for (int i = 0; i < k; i++)
        {
            itr = itr->next;
            if (!itr)
                return temp->next;
        }

        ListNode *groupstr = prvgroupend->next;
        ListNode *nextgroupstr = itr->next;

        // reversing

        ListNode *prv = nextgroupstr;
        ListNode *curr = groupstr;

        while (curr != nextgroupstr)
        {
            ListNode *sve = curr->next;
            curr->next = prv;
            prv = curr;
            curr = sve;
        }

        prvgroupend->next = itr;
        prvgroupend = groupstr;
    }
}
int main(){
    
    return 0;
}