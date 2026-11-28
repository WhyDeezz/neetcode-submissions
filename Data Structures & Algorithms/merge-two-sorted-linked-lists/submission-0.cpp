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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
    ListNode* listMerged = nullptr;
    ListNode* curr = nullptr;

    if(temp1 == nullptr)
    {
        return temp2;
    }
    else if(temp2 == nullptr)
    {
        return temp1;
    }


    while(temp1!= nullptr && temp2 != nullptr)
    {
        ListNode* newNode = new ListNode(min(temp1->val,temp2->val));

        if(listMerged == nullptr)
        {
            listMerged = newNode;
            curr = newNode;
        }
        else
        {
            curr->next = newNode;
            curr = curr->next;

        }
        if(temp1->val <= temp2->val)
        {
            temp1 = temp1->next;
        }
        else
        {
            temp2 = temp2->next;
        }

    }
    if(temp1!= nullptr)
    {
        while(temp1!= nullptr )
        {
            ListNode* newNode = new ListNode(temp1->val);
            if(listMerged == nullptr)
            {
                listMerged = newNode;
                curr = newNode;
            }
            else
            {
                curr->next = newNode;
                curr = curr->next;

            }
        temp1 = temp1->next;
        }

    }
    else
    {
        while(temp2!= nullptr )
        {
            ListNode* newNode = new ListNode(temp2->val);
            if(listMerged == nullptr)
            {
                listMerged = newNode;
                curr = newNode;
            }
            else
            {
                curr->next = newNode;
                curr = curr->next;

            }
            temp2 = temp2->next;
        }
    }
    return listMerged;
    
        
    }
};