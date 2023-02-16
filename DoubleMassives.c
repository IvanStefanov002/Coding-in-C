#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//    int a[3][4] = {
//    {0,1,2,3}
//    {4,5,6,7}
//    {8,9,10,11}
//    }
/*
    int a[2][5] = {
        {1,3},{3,5},{6,7},{7,5},{7,2}
        }
    int i=0;
    int j=0;
    for (i=0; i <5; i++){
        for(j=0; j<2;j++){
            printf("a[%d][%d] = %d\n", i, j, a);
        }
    }
*/

    int massive[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    /* izkarvane na vseki element ot masiva.
    for (int i = 0; i < 3; i++ ){
      for (int j = 0; j < 3; j++ ){
         printf("massive[%d][%d] = %d\n", i,j, massive[i][j] );


    for (int i=2; i<3; i++){
        for (int j=1; j<2; j++){
            printf("upper diagonal[%d][%d]=%d\n", i, j, massive[j][i]);
                for(int k=0; k<1; k++){
                        printf("upper diagonal[%d][%d]=%d\n", k, j, massive[k][j]);
                }
        }
    }

    for (int i = 0; i < 1; i++ ){
      for (int j = 0; j < 4; j++ ){
          if (i=j){
            printf("diagonal[%d][%d]=%d\n", i, j, massive[i-1][j-1]);
          }
      }
    }

    for (int i = 0; i < 3; ++i ){
      for (int j = 0; j < 3; ++j ){
            if((i+j)==2){
                printf("oposite diagonal[%d][%d] = %d\n", i, j, massive[i][j]);
            }
          }
        }
    */

    for (int i = 0; i < 3; i++ ){
      for (int j = 2; j < -1; j-- ){
            printf("oposite diagonal[%d][%d] = %d\n", i, j, massive[i][j]);
      }
        }
    return 0;
}
