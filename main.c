#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

int main ()
{
    int choice = 0;
    int mat[SIZE][SIZE];
    int first,second;
    while(choice != -1)
    {
        printf("welcome to my_mat menu!\n");
        printf("to input data into matrix press 1\n");
        printf("to check if there is a path between two nodes press 2\n");
        printf("to search for the shortest path press 3\n");
        printf("your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            set_values(mat);
            break;
        
        case 2:
            printf("choose first node: ");
            scanf("%d",&first);
            printf("choose second node: ");
            scanf("%d",&second);
            if(path_exists(mat,first,second))
            {
                printf("there is a path!\n");
            }
            else
            {
                printf("there is no path\n");
            }
            break;

        default:
            break;
        }
    }

    return 0;
}