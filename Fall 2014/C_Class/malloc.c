#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "sitcoms_t.h"


void Print_all_nodes (Sitcoms_t *ptr);
void insert_node (Sitcoms_t *ptr );

int main ( )
{
    Sitcoms_t *head, *node, *cNode;
    
    // BUILD THE FIRST NODE
    head = (Sitcoms_t *) // STEP 1 allocate
    // memory
    malloc ( (int) sizeof (Sitcoms_t) );
    
    strcpy( head->name, "Raymond") ;
    
    node = head; // assign pointers
    
    // BUILD THE SECOND NODE
    node = (Sitcoms_t *)
    malloc ( (int) sizeof (Sitcoms_t) );
    
    head->next = node; // important to link
    // nodes
    strcpy(node->name, "Seinfeld") ;
    
    // Build the third node
    node->next = (Sitcoms_t *)
    malloc ( (int) sizeof (Sitcoms_t) );
    node = node->next;
    
    strcpy(node->name, "BBT") ;
    
    // Build the fourth node
    node->next = (Sitcoms_t *)
    malloc ( (int) sizeof (Sitcoms_t) );
    node = node->next;
    strcpy(node->name, "MWC") ;
    
    node->next = NULL;
    
    cNode = head;
    Print_all_nodes (cNode);
    
    cNode = head;
    insert_node ( cNode);
    
    printf ("Printing after inserting a node \n");
    cNode = head;
    Print_all_nodes (cNode);
    
    // SEARCH NODES
    cNode = head;
    printf("\nSearch for node in linked list\n");
    
    while (cNode->next != NULL)
    {
        
        if(strcmp(cNode->name, "BBT") != 0)
        {
            printf("%s\n", cNode->name);
            cNode = cNode->next;
        }
        else
        {
            break;
        }
    }
    
}

void insert_node (Sitcoms_t *ptr)
{
    Sitcoms_t *nNode;
    
    // create a node
    nNode = (Sitcoms_t *) malloc ((int)sizeof (Sitcoms_t));
    strcpy ( nNode->name, "Crosby");
    
    // traverse the linked list ptr
    while ( strcmp ( ptr->name, "Seinfeld") != 0)
        ptr = ptr->next;
    
    // found my node
    nNode->next = ptr->next;
    ptr->next = nNode;
    
}

void Print_all_nodes (Sitcoms_t *ptr)
{
    // PRINT ALL NODES
    // head should not be touched.
    while ( ptr->next != NULL ) {
        printf (" The sitcom name is %s \n",
                (*ptr).name );
        
        ptr = ptr->next;
    }
    printf (" The sitcom name is %s \n", ptr->name );
}
