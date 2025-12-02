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

        ListNode(int x){
            this-> val = x;
            this-> next = NULL;
        }
};
bool hasCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    ListNode *first = head->next;
    ListNode *second = head;
    while (first->next != NULL && second->next != NULL)
    {
        first = first->next;
        if (first->next != NULL)
        {
            first = first->next;
        }
        second = second->next;
        if (second == first)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    // Create nodes
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);
    ListNode *n4 = new ListNode(4);
    ListNode *n5 = new ListNode(5);

    // Link them: 1 -> 2 -> 3 -> 4 -> 5
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // Create cycle: 5 -> 3
    n5->next = n3;

    if (hasCycle(n1))
        cout << "Cycle detected!" << endl;
    else
        cout << "No cycle!" << endl;

    return 0;
}