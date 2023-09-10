#include<iostream>
using namespace std;

class ListNode {

    public:

        int val;
        ListNode* next;
        ListNode* prev;

        ListNode(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
            
        }

};



int main() {

    ListNode* node = new ListNode(10);

    return 0;

}

