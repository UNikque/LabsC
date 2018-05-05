#include <stdlib.h>
#include <stdio.h>

struct list
{
    int data;
    struct list *next;
};

struct list * insert( struct list *node, int data )
{
    struct list *tmp = malloc( sizeof( struct list ) );

    if ( tmp != NULL )
    {
        tmp->data = data;

        if ( node != NULL )
        {
            tmp->next = node->next;
            node->next = tmp;
        }
        else
        {
            tmp->next = NULL;
        }
    }

    return tmp;
}

void display( struct list *node )
{
    for ( ; node != NULL; node = node->next ) printf( "%d ", node->data );
}

struct list * clear( struct list *node )
{
    while ( node != NULL )
    {
        struct list *tmp = node;
        node = node->next;

        free( tmp );
    }

    return node;
}

struct list * sort( struct list *root )
{
    struct list *new_root = NULL;

    while ( root != NULL )
    {
        struct list *node = root;
        root = root->next;

        if ( new_root == NULL || node->data < new_root->data )
        {
            node->next = new_root;
            new_root = node;
        }
        else
        {
            struct list *current = new_root;
            while ( current->next != NULL && !( node->data < current->next->data ) )
            {                   
                  current = current->next;
            }                

            node->next = current->next;
            current->next = node;
        }
    }

    return new_root;
}

#define N   10

int main()
{
    int a[N] = { 7, 3, 2, 1, 0, 0, 0, 5, 9, 4 };
    struct list *root = NULL;
    struct list **tmp = &root;
    int i;
    for (i = 0; i < N; i++ )
    {
        *tmp = insert( *tmp, a[i] );
        tmp = &( *tmp )->next;
    }

    display( root );
    printf( "\n" );

    root = sort( root );

    display( root );
    printf( "\n" );

    root = clear( root );
}
