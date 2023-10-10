#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int A[n];
    int i;

    if(n<=0)
    {
        printf("Invalid size.\n");
    }

    for(i=0; i<n; ++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n; ++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

    int max=A[0];
    int min=A[0];

    for(i=0; i<n; ++i)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    printf("Maximum %d\n",max);
    printf("Minimum %d\n",min);

    return 0;


}
