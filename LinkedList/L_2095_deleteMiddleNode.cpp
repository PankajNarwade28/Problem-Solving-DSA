
// 2095. Delete the Middle Node of a Linked List
// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

// For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.

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
   ListNode* deleteMiddle(ListNode* head) {
    ListNode* temp = head;
    ListNode* toDelete = NULL;
    int Max = 0;

    if (!head || head->next == NULL) {
        // delete head;
        return NULL;
    }

    while (temp != NULL) {
        Max++;
        temp = temp->next;
    }

    if (Max == 1) {
        toDelete = head;
        head = NULL;
        delete toDelete;
        return head;
    } else {
        int idx = Max / 2;
        temp = head;

        while (temp != NULL && idx > 1) {
            temp = temp->next;
            idx--;
        }

        toDelete = temp->next;
        temp->next = toDelete->next;
        toDelete->next = nullptr; // ✅ prevent dangling access
        delete toDelete;
    }

    return head;
}
};

Or 

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
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//     if (!head || !head->next) return nullptr;
//         int count = 0;

//        ListNode *todelete = head;
//        ListNode *temp = head;
//        while(head != NULL){
//         head= head-> next;
//         count ++;
//        }
//        cout<<"count"<<count<<"\n";
//       int  middle = count/2;
//       cout<<"mid"<<middle<<"\n";

//        int i=0;
//        while(i != middle-1){
//         todelete=todelete->next;
//         i++;
//        }
//         cout<<"todelete"<<todelete->val<<"\n";


//       ListNode* midNode = todelete->next;
//       todelete->next = midNode->next;
//       delete midNode;

//       return temp;


//     }
// };