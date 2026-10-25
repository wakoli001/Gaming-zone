#include <stdio.h>
#include <stdlib.h>

int main(){
  int scam[3][2][3]= {
                     {{21,32,44},{46,64,100}},
                     {{90,87,76},{68,94,78}},
                     {{86,39,10},{29,19,45}}
                     };
    int a;
    int b;
    int c;
    //iterate through all the array elemnts
   for(int a = 0;a < 3;a++){
    for(b = 0;b < 2;b++){
        for(c = 0;c < 3;c++){
            printf("scam[%d][%d][%d] = %d\n", a, b , c, scam[a][b][c]);
        }
    }
   }
   return 0;
}
