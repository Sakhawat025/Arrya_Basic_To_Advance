//Find the number of times x appears in int matrix

#include<stdio.h>
int main()
{
    int M[3][3];
    int Max=M[0][0];
    printf("Input the Matrix:");
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Enter the Matrix:\n");
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    // Find the number of times x appears in int matrix[3][3]

    int count=0;
    int x;
    printf("Enter the number you want to count:\n");
    scanf("%d",&x);

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            if(M[i][j]==x)
            {
                count++;
            }
        }
    }
    printf("The number %d appears %d times in the matrix.\n",x,count);

    return 0;

}

