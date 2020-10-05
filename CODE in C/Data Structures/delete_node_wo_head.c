#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

//Function to modify the linked list in which the node pointed by ptr is deleted
void delete_without_head(node *ptr)
{

    // If the ptr is NULL just return
    if (ptr == NULL)
    {
        return;
    }

    // If the node is the last node in the list, just free it. There will be a dangling pointer though
    if (ptr->next == NULL)
    {
        free(ptr);
        return;
    }

    //Else Copy the data from the next node and set the current's next to next's next
    //Also delete the next
    ptr->data = ptr->next->data;
    node *temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);

    return;
}

//Utility function to traverse linkedlist
void traverse(node *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// //Driver to test the program
// int main()
// {

//     node *linkedList;
//     linkedList = (node *)malloc(sizeof(node));
//     linkedList->data = 4;
//     linkedList->next = NULL;

//     node *temp = linkedList;
//     for (int i = 0; i < 4; i++)
//     {
//         temp->next = (node *)malloc(sizeof(node));
//         temp = temp->next;
//         temp->data = i * 2;
//         temp->next = NULL;
//     }

//     int i = 0;
//     temp = linkedList;

//     while (i < 2)
//     {
//         temp = temp->next;
//         i++;
//     }

//     traverse(linkedList);
//     delete_without_head(temp);
//     traverse(linkedList);

//     return 0;
// }