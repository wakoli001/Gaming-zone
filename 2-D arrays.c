#include <stdio.h>
#include <stdlib.h>
int main(){

    int age[2][4] ={
                    {64,92,84,72},
                    {35,70,59,67}
                    };
   int i;
   int j;
   for(i = 0;i < 2;i++){
    for(int j = 0;j < 4;j++){
        printf("age[%d][%d] = %d\n", i, j, age[i][j]);
    }
   }
   return 0;
}
