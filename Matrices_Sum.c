#include<stdio.h>
int main()
{
    int M[3][4];
    int M1[3][4];
    int Sum[3][4];

    printf("Input M Matrix.\n");

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            scanf("%d",&M[i][j]);
        }
    }

    printf("Input M1 Matrix.\n");

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            scanf("%d",&M1[i][j]);
        }
    }

    printf("M Matrix.\n");

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    printf("M1 Matrix.\n");

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            printf("%d ",M1[i][j]);
        }
        printf("\n");
    }

    printf("The addition of two matrices.\n");

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            Sum[i][j]=M[i][j]+M1[i][j];
            printf("%2d ",Sum[i][j]);
        } printf("\n");
    }

    return 0;

}
