#include<stdio.h>
int main()
{
    //Arrya Declaration Way.

    float prices[3]= {1.0,2.1,2.0};
    int a[3]= {3,8,6};
    int m[3]= {0,1,7};

    for(int i=0; i<3; ++i)
    {
        printf("%.2f\n",prices[i]);
    }
    int i=0;
    while(i<3)
    {
        printf("%d ",a[i]);
        i++;
    }printf("\n");
    int j=0;
    do{
        printf("%d \n",m[j]);
        j++;
    }
    while(j<3);

    // Arrya Input way.

    int I;
    int A[6];
    for(I=0;I<6;I++){
        scanf("%d",&A[I]);
    }
    int n;
    for(n=0;n<6;n++){
        printf("%d ",A[n]);
    }
    return 0;
}
