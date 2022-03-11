#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
long val[100];
int k = 0;
void extract(char str[])
{
    char *p = str;
    while (*p)
    { // While there are more characters to process...
        if (isdigit(*p) || ((*p == '-' || *p == '+') && isdigit(*(p + 1))))
        {
            // Found a number
            val[k++] = strtol(p, &p, 10); // Read number // and print it.
        }
        else
        {
            // Otherwise, move on to the next character.
            p++;
        }
    }
}
struct node //defining structure
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;
void display() //function to display nodes
{
    if (head == NULL) // if no noode created
    {
        printf("BLANK LIST\n ");
    }
    else
    {
        printf("Combined list: 2 ");
        struct node *ptr; //pointer to traverse
        ptr = head;
        do
        {
            if (ptr->data != 2)
                printf("%d ", ptr->data);
            ptr = ptr->next; //incrementing the pointer
        } while (ptr != NULL);
    }
}
void delend()
{
    for (int i = 0; i < 4; i++)
    {
        val[i] = val[i + 1];
    }
}
void input() //accepting values
{
    int n; //declaring varibles
    // printf("Enter the number of nodes");
    // scanf("%d",&n);// accepting no of nodes
    n = k;
    struct node *newnode = NULL;
    struct node *temp;
    int data1, i; //declaring variables
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Sorry cant allocate node\n");
    }
    else
    {
        head->data = val[1];
        head->next = NULL;
        k = 2;
        temp = head;
        for (i = 2; i < n; i++) //loop for n node values
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Sorry cant allocate node\n");
            }
            else //linking nodes with each other
            {
                // printf("Enter the data of node %d: ",i);
                data1 = val[k++];
                temp->next = newnode;
                newnode->prev = temp;
                newnode->data = data1;
                newnode->next = NULL;
                temp = temp->next; //creating n number of nodes
            }
        }
    } //creating the link list
}
int main() //DEFINING MAIN
{
    char str[100];
    scanf("%[^\n]%*c", str);
    extract(str);
    input();
    // display();
    char str2[100];
    scanf("%[^\n]%*c", str2);
    char *p = str2;
    while (*p)
    { // While there are more characters to process...
        if (isdigit(*p) || ((*p == '-' || *p == '+') && isdigit(*(p + 1))))
        {
            // Found a number
            val[k++] = strtol(p, &p, 10); // Read number // and print it.
        }
        else
        { // Otherwise, move on to the next character.
            p++;
        }
    }
    input();
    delend();
    display();
    return 0;
}
