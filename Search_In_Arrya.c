#include<stdio.h>
#define N 12
int main()
{
    int A[N]= {4,7,8,10,14,21,22,36,62,77,81,91};

    int TargetNumber,Idx;

    printf("What do you want to search?");
    scanf("%d",&TargetNumber);

    Idx=-1;

    for(int i=0; i<N; ++i)
    {
        if(A[i]==TargetNumber)
        {
            Idx=i;
            break;
        }
        else if(A[i]>TargetNumber)
            break;
    }
    if(Idx==-1)
    {
        printf("Target Not Found.\n");
    }
    else
    {
        printf("Target found at index: %d\n",Idx);
    }
}

