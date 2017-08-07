bool hasCycle(struct ListNode *head) {
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)return true;
    }
    return false;
}
