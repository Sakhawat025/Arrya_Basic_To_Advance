//Write the nested loop to initialize a 2D array.

#include<stdio.h>
int main()
{
    int i,j,x[4][3];
    for(i=0; i<4; ++i)
    {
        for(j=0; j<3; ++j)
        {
            printf("%2d",x[i][j]=i+j);
        }printf("\n");
    }
}


