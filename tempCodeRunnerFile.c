#include <stdio.h>
#include <conio.h>
int arr_1[3][3], arr_2[3][3], sum[3][3];
void array_r(int a)
{
    //getting data from the user
    printf("Enter 9 elements of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a == 1)
            {
                scanf("%d", &arr_1[i][j]);
            }
            else
            {
                scanf("%d", &arr_2[i][j]);
            }
        }
    }
    //checking condition.
    if (a == 1)
    {
        printf("The first matrix is:\n");
    }
    else if (a == 2)
    {
        printf("The second matrix is:\n");
    }
    else
    {
        printf("You cannot enter the matrix more than 2 times.");
    }
    if (a < 3)
    //printing of an arry.
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a == 1)
                {
                    printf("%d ", arr_1[i][j]);
                }
                else
                {
                    printf("%d ", arr_2[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf(" ");
    }
    // sum of two matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
    printf("\n");
}
//sum function to sum two matrix..
void sum_1()
{
    printf("the sum of two matrix is:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void main()
{
    int num = 1;
    array_r(num);

    printf("Enter 2 if you are entering the matrix for 2nd time:");
    scanf("%d", &num);
    array_r(num);
    sum_1();
}
