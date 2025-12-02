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
    ListNode(int x) : val(x), next(NULL) {}
};
//itrativeapproach
ListNode *reverseList(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *sve;
    ListNode *first = head;
    if (head->next != NULL)
    {
        ListNode *temp = head->next;
        while (temp != NULL)
        {
            sve = temp->next;
            temp->next = head;
            head = temp;
            temp = sve;
        }
    }
    first->next = NULL;
    return head;
}
int main(){
    
    return 0;
}

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
// public:
//     // vector<int> v;
//     // bool isPalindrome(ListNode* head) {
//     //     ListNode* curr = head;
//     //     while(curr != NULL){
//     //         v.push_back(curr -> val);
//     //         curr = curr -> next;
//     //     }
//     //     int l = 0, r = v.size() - 1;
//     //     while(l <= r){
//     //         if(v[l] != v[r]){
//     //             return false;
//     //         }
//     //         l++;
//     //         r--;
//     //     }
//     //     return true;
//     // }
//     bool isPalindrome(ListNode *head)
//     {

//         // finding middle of LL
//         ListNode *slow = head;
//         ListNode *fast = head->next;

//         while (fast != NULL && fast->next != NULL)
//         {
//             fast = fast->next;
//             if (fast->next != NULL)
//             {
//                 fast = fast->next;
//             }
//             slow = slow->next;
//         }

//         // second half head
//         ListNode *newHEAD = slow->next;

//         // reverse second half
//         if (newHEAD)
//         {
//             ListNode *temp = newHEAD->next;
//             ListNode *sve;
//             while (temp != NULL)
//             {
//                 sve = temp->next;
//                 temp->next = newHEAD;
//                 newHEAD = temp;
//                 temp = sve;
//             }
//         }

//         // cut the list
//         slow->next = NULL;

//         // compare first half and reversed second half
//         slow = head;
//         fast = newHEAD;

//         while (slow != NULL && fast != NULL)
//         {
//             if (slow->val != fast->val)
//             {
//                 return false;
//             }
//             slow = slow->next;
//             fast = fast->next;
//         }

//         return true;
//     }
// };