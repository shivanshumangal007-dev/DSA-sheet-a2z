#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<array>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return NULL;
        Node *ptr = head;
        Node *sve;
        while (ptr)
        {
            sve = ptr->next;
            Node *temp = new Node(ptr->val);
            ptr->next = temp;
            temp->next = sve;
            ptr = sve;
        }

        ptr = head;

        while (ptr)
        {
            if (ptr->random == NULL)
            {
                ptr->next->random = NULL;
            }
            else
            {
                ptr->next->random = ptr->random->next;
            }
            ptr = ptr->next->next;
        }

        Node *itr = head->next;
        sve = itr;
        ptr = head;

        while (ptr && itr)
        {
            ptr->next = itr->next;
            ptr = ptr->next;
            if (ptr)
            {
                itr->next = ptr->next;
            }
            else
            {
                itr->next = NULL;
            }
            itr = itr->next;
        }

        return sve;
    }
};
int main(){
    
    return 0;
}