/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptrptr) {}
 *     ListNode(int x) : val(x), next(nullptrptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
void insertAtTail(ListNode *&ansHead, ListNode *&ansTail, int val)
{
    ListNode *temp = new ListNode(val);
    if (ansHead == nullptr && ansTail == nullptr)
    {
        ansHead = temp;
        ansTail = temp;
        return;
    }
    else
    {
        ansTail->next = temp;
        ansTail = temp;
    }
}
ListNode *add(ListNode *l1, ListNode *l2)
{
    ListNode *ansHead = nullptr;
    ListNode *ansTail = nullptr;

    int sum = 0;
    int carry = 0;
    int digit = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0)
    {
        int val1 = 0;
        if (l1 != nullptr)
            val1 = l1->val;
        int val2 = 0;
        if (l2 != nullptr)
            val2 = l2->val;

        sum = carry + val1 + val2;
        digit = sum % 10;
        carry = sum / 10;

        insertAtTail(ansHead, ansTail, digit);

        if (l1 != nullptr)
        {
            l1 = l1->next;
        }
        if (l2 != nullptr)
        {
            l2 = l2->next;
        }
    }
    // ansHead = reverse(ansHead);
    return ansHead;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    // l1 = reverse(l1);
    // l2 = reverse(l2);

    ListNode *ans = add(l1, l2);
    return ans;
}