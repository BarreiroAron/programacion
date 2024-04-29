#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int num;
  int random;
  random = (rand() % 1000) + 1;
  puts("5 intentos para adivinar un numero del 1 al 1000\n");
  for(int i = 1; i < 6; i++) {
    printf("Intento numero %d:", i);
    //scanf("%d", &num);



    int variable = scanf("%d", &num);
    if(variable == 0) {
      puts("Quiero numeros, no letras, perdiste");
      return 0;
    }




    if(num>1000 || num<0) { puts("Perdiste por chistoso"); return 0; }
    if(num == random) {
      puts("Era ese, bien jugado...");
    }
    if(random > num) {
      puts("Un poco mas");
    } else {
      puts("Te pasaste");
    }
   }
  if(num != random) {
    puts("Ese no era, ahora nunca voy a decirtelo");
  }
  return 0;
}
