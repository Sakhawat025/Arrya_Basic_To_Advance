#include<stdio.h>
int main()
{
    int N;

    printf("Enter the N numbers:");
    scanf("%d",&N);

    int A[N];
    for(int i=0; i<N; ++i)
    {
        scanf("%d",&A[i]);
    }
    int Temp=A[0];

    for(int i=0; i<N; ++i)
    {
        A[i]=A[i+1];
    }
    A[N-1]=Temp;

    printf("Shifting The first element will go to the last place.\n");
    for(int i=0; i<N; ++i)
    {
        printf("%d ",A[i]);
    }
}
