#include<stdio.h>
int main()
{
    /*Initialization 1st way.
    Initialize when you declare.*/

    int x[4][4]={ {2,3,7,2},
                  {7,4,5,9},
                  {5,1,6,-3},
                  {2,5,-1,3}};
    printf("Initialization 1st way.\n\n");

         for(int i=0;i<4;++i){
            for(int j=0;j<4;++j){
                printf("%2d",x[i][j]);
            }printf("\n");
         }printf("\n");


    /*Initialization (2nd way)
    Using assignment operator*/

    printf("Initialization 2nd way_Using assignment operator\n");

      int i,j,matrix[3][4];
      for(i=0;i<3;++i){
        for(j=0;j<4;++j){
            printf("%2d",matrix[i][j]=i);
        }printf("\n");
      }printf("\n");

      for(i=0;i<3;++i){
        for(j=0;j<4;++j){
            printf("%2d",matrix[i][j]=j);
        }printf("\n");
      }

      //Initialization (3rd way)By taking input from user.

      printf("Initialization (3rd way)By taking input from user.\n");

      for (i=0; i<3; i++){
         for (j=0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }printf("\n");

      }
      for (i=0; i<3; i++){
         for (j=0; j<4; j++){
            printf("%2d",matrix[i][j]);
        }printf("\n");

    }

  return 0;
}
