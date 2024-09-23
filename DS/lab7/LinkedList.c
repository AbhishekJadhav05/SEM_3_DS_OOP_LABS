#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
}Node;

Node* createNode(int info){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}
void insert(Node **head,int info){
    if(*head == NULL){
        *head = createNode(info);
        return;
    }
    Node *current = *head;
    while (current->next !=NULL)
    {
        current = current->next;
    }
    current->next = createNode(info);

}
void insertAfter(Node *head,int target,int info){
    if(head == NULL){
        printf("EMPTY LIST");
        return;
    }
    Node *current = head;
    while(current->info != target){
        if(current->next == NULL){
            printf("target not found in the list inserting at the end\n");
            current->next = createNode(info);
            return;
        }
        current = current->next;
    }
    Node *temp = current->next;
    current->next = createNode(info);
    current->next->next = temp;
}
void insertBefore(Node **head,int target,int info){
    if(*head == NULL){
        printf("Empty List");
        return;
    }
    Node *current = *head;
    Node *prev = NULL;
    if(current->info == target){
        *head = createNode(info);
        (*head)->next = current;
        return;
    }
    while(current->info != target){
        if(current->next == NULL){
            printf("target not found in list not inserting at start\n");
            Node *temp = *head;
            *head = createNode(info);
            (*head)->next = temp;
            return;
        }
        prev = current;
        current = current->next;
    }
    prev->next = createNode(info);
    prev->next->next = current;
}
void display(Node *head){
    while(head != NULL){
        printf("%d ",head->info);
        head = head->next;
    }
}
void deleteNode(Node **head,int target){
    if(*head == NULL){
        printf("empty list nothing to delete");
        return;
    }
    Node *current = *head;
    Node *prev = NULL;

    if(current->info == target){
        *head = current->next;
        free(current);
        return;
    }
    while(current->info != target && current !=NULL){
        prev = current;
        current = current->next;
    }
    if(current == NULL){
        printf("target not found");
        return;
    }
    prev->next = current->next;
    free(current);
}
void bubbleSort(Node *head){
    Node *current = head;
    int length=0;
    while(current != NULL){
        current = current->next;
        length++;
    }
    Node *a = head;
    Node *b = head;
    Node *c = b->next;
    int temp = 0;
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(b->info > c->info){
                temp = c->info;
                c->info = b->info;
                b->info = temp;
            }
            b=b->next;
            c = b->next;
        }
        a = a->next;
        b = head;
        c = b->next;
    }
}
void selectionSort(Node *head){
    Node *min =NULL;
    int temp =0;
    Node *j = NULL;
    for(Node *i=head;i != NULL;i = i->next){
        min = i;
        for(Node *j=i;j != NULL;j = j->next){
            if(min->info>j->info){
                min = j;
            }
        }
        temp = min->info;
        min->info = i->info;
        i->info = temp;       
    }
}
Node *reverse(Node *head){
    if(head == NULL){
        printf("empty list cannot be reversed");
        return;
    }
    if((head)->next == NULL){
        return head;
    }
    Node *rest = reverse((head)->next);
    (head)->next->next = head;
    head->next = NULL;
    ///head = head->next;
    return rest;
}
Node *merge(Node *l1, Node *l2) {
    // Dummy node to simplify the merging process
    Node *dummy = (Node *)malloc(sizeof(Node));
    Node *temp = dummy;

    // Merging both lists until one is exhausted
    while (l1 != NULL && l2 != NULL) {
        if (l1->info < l2->info) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    // Append the remaining elements from either list
    if (l1 != NULL) {
        temp->next = l1;
    } else {
        temp->next = l2;
    }

    // The merged list starts from the next node of dummy
    Node *mergedList = dummy->next;
    free(dummy);  // Free the dummy node
    return mergedList;
}

// Function to print the list (helper function)
void printList(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->info);
        head = head->next;
    }
    printf("NULL\n");
}
void main(){
    Node *head = NULL;
    Node *l2= NULL;
    //call functions here
    insert(&head,30);
    insert(&head,20);
    insert(&head,10);
    insert(&head,50);
    insert(&head,40);
    insert(&l2,5);
    insert(&l2,15);
    insert(&l2,25);
    insert(&l2,35);
    insert(&l2,45);
    selectionSort(head);
    head = merge(head,l2);
    display(head);
}
