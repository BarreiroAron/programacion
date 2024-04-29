#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int array[3][3];
  for(int cont = 0; cont < 3; cont++) {
  for(int count = 0; count < 3; count++) {
    array[cont][count] = 0;
  }}
  int caracter;
    for(int i = 0; i < 9; i++) {
      puts("Ponga 1 o un 2\n");
      scanf("%d", &caracter);
        puts("Donde lo queres poner? Eliga uno de los 9 lugares\n");
        int lugar = 0;
        scanf("%d", &lugar);

        if(lugar == 1) {array[0][0] = caracter;}
        if(lugar == 2) {array[0][1] = caracter;}
        if(lugar == 3) {array[0][2] = caracter;}
        if(lugar == 4) {array[1][0] = caracter;}
        if(lugar == 5) {array[1][1] = caracter;}
        if(lugar == 6) {array[1][2] = caracter;}
        if(lugar == 7) {array[2][0] = caracter;}
        if(lugar == 8) {array[2][1] = caracter;}
        if(lugar == 9) {array[2][2] = caracter;}
        int j = 0;
        int k = 0;
        printf("\n");
        for(j = 0; j < 3; j++) {
          for(k = 0; k < 3; k++) {
          printf("%d ", array[j][k]);
          }
            printf("\n");
        }
    }
    return 0;
}
