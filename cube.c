#include <stdio.h>
void cube(int *ptr, int row, int col)
{
    int i, j;
    printf("\nCube of all elements=\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", (*ptr)*(*ptr)*(*ptr));
            ptr++;
        }
        printf("\n");
    }
}
int main()
{
    int row,col,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("\nEnter the elements of the array:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    cube(&arr[0][0], row, col);
    return 0;
}