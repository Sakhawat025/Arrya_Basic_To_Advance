//Find the maximum of int matrix.

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

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            if(M[i][j]>Max)
            {
                Max=M[i][j];
            }
        }
    }
    printf("max =%d\n",Max);

    return 0;

}
