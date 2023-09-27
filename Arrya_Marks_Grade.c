#include<stdio.h>
int main()
{
    int M[100];
    for(int i=0; i<100; ++i)
    {
        scanf("%d",&M[i]);
        if(M[i]>=90 && M[i]<=100)
        {
            printf("Grade A");
        }
        else if(M[i]>=80 && M[i]<=89)
        {
            printf("Grade B");
        }
        else if(M[i]>=70 && M[i]<=79)
        {
            printf("Grade C");
        }
        else if(M[i]>=60 && M[i]<=69)
        {
            printf("Grade D");
        }
        else if(M[i]>=50 && M[i]<=59)
        {
            printf("Grade F");
        }
        else break;

    }
}
