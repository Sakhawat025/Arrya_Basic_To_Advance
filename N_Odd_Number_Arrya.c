#include<stdio.h>
int main()
{
    int O[100],m,n;
    for(n=0; n<100; ++n)
    {
        scanf("%d",&O[n]);
        if(O[n]<0)
        {
            break;
        }
        else
        {
            for(m=1; m<O[n]; ++m)
            {
                if(m%2!=0)
                    printf("%d ",m);
                else continue;
            }
            printf("\n");
        }

    }
}
