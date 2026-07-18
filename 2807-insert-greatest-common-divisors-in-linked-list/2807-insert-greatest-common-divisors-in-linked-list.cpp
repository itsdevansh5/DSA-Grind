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
    int gcd(int a,int b){
      if(a<b) return gcd(b,a);
      while(b>0){
        int t=a;
        a=b;
        b=t%b;
      }
      return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
      ListNode * temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
           ListNode * a=temp;
           ListNode * b=temp->next;
           int newVal=gcd(a->val,b->val);
           ListNode * n=new ListNode(newVal);
           a->next=n;
           n->next=b;
           temp=b;
        }
        return head;
    }
};