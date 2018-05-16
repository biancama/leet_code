//
// Created by Massimo Biancalani on 16/05/2018.
//


#include <vector>
using namespace std;
struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

class Solution {
public:
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = NULL, *currentL1 = l1, *currentL2= l2, *currentResult = NULL;
        bool carry = false;
        while(1) {
            if (currentL1 == NULL && currentL2 == NULL) {
                break;
            } else if (currentL1 != NULL && currentL2 != NULL) {
                int operation = currentL1->val + currentL2->val;
                updateNode(&result, &currentResult, carry, operation);
                currentL1 = currentL1->next;
                currentL2 = currentL2->next;
            } else if (currentL1 != NULL && currentL2 == NULL) {
                int operation = currentL1->val;
                updateNode(&result, &currentResult, carry, operation);
                currentL1 = currentL1->next;
            } else {
                int operation = currentL2->val;
                updateNode(&result, &currentResult, carry, operation);
                currentL2 = currentL2->next;
            }
        }
        if(carry) {
            currentResult->next = new ListNode(1);
        }
        return result;
    }

    void updateNode(ListNode **result, ListNode **currentResult, bool& carry, int operation) const {
        if (carry) {
            operation++;
        }
        if (*result == NULL) {
            *currentResult = new ListNode(operation % 10);
            *result = *currentResult;
        } else {
            (*currentResult)->next = new ListNode(operation % 10);
            *currentResult = (*currentResult)->next;
        }
        if (operation > 9) {
            carry = true;
        } else {
            carry = false;
        }
    }
};