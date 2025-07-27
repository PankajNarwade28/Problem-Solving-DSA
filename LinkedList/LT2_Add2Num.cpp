#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class LList
{
public:
    void insert(Node *&head, int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    void displayNodes(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void AddList(Node *&list2)
    {
        Node *temp = head;
    }
};
int main()
{
    Node *head = NULL;
    LList l1, l2;

    l1.insert(head, 3);
    l1.insert(head, 4);
    l1.insert(head, 2);

    l1.displayNodes(head);
    cout << endl;
    head = NULL;
    l2.insert(head, 5);
    l2.insert(head, 6);
    l2.insert(head, 4);

    l2.displayNodes(head);
    cout << endl;
    return 0;
}
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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     int carry=0;
//     int d1,d2,sum;
//     ListNode *result =new ListNode(0);
//     ListNode *curr =result;
//     while(l1||l2||carry){
//         if(l1){
//             d1=l1->val;
//         }else{
//             d1=0;
//         }
//         if(l2){
//             d2=l2->val;
//         }else{
//             d2=0;
//         }
//         sum = d1+d2+carry;
//         ListNode *newNode = new ListNode(sum%10);
//         curr->next=newNode;
//         curr=curr->next;
//         carry=sum/10;
//         if(l1){
//             l1=l1->next;
//         }else{
//             l1=NULL;
//         }
//         if(l2){
//             l2=l2->next;
//         }else{
//             l2=NULL;
//         }
//         }
//         return result->next;
//     }
// };