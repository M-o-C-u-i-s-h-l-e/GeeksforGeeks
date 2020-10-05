struct Node* reverseList(struct Node *head) {
    Node *cur = head, *prev = NULL, *next = NULL;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
