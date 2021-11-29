#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

/*function1 receives the matrix values from the user*/
void set_values(int (*matrix)[SIZE])
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("Enter the value of the matrix at i=%d , j=%d: \n", i , j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int path_exists(int (*matrix)[10],int i,int j)
{
    if(matrix[i][j] != 0) //stop condition
    {
        return TRUE;
    }
    if(i >= SIZE)
    {
        return FALSE;
    }
    return path_exists(matrix, i+1, j);
}

void print (int (*matrix)[SIZE], int row, int column)
{
    int i;
    int j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// int main ()
// {
//     int mat[SIZE][SIZE];
//     int row, col;

//     printf("Input rows: ");
//     scanf  ("%d", &row);
//     printf("Input columns: ");
//     scanf  ("%d", &col);

//     printf ("Input data: \n");
//     function1(mat, row, col);

//     printf ("You entered: ");
//     print(mat, row, col);

//     return 0;
// }
