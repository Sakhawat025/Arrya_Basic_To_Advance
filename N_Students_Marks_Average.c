#include<stdio.h>
int main()
{
    int M[5];
    int sum=0;
    int i=0;
    for(;i<5;++i){
        scanf("%d",&M[i]);
        sum+=M[i];
    }

    /*while(i<5){
        scanf("%d",&M[i]);
        sum+=M[i];
        i++;
    }*/
    float Aver=(sum/5);
    printf("%f",Aver);

}
