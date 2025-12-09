/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }




        ListNode* p = slow;
        ListNode* q = nullptr, *r = nullptr;

        while(p != nullptr){
            r = q;
            q = p;
            p = p -> next;

            q -> next = r;
        }
        // head = q;
        ListNode* first = head;
        ListNode* second = q;
        bool isPalindrome = true;


        ListNode* init = head;
        while(second != nullptr){
            if(first -> val != second -> val){
                isPalindrome = false;
                break;
            }
            first = first -> next;
            second = second -> next;
        }

        if(isPalindrome)
            return true;
        else
            return false;

        return 0;
    }
};