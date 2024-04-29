#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen("ahorcado.txt", "r");
  char array[200];
  int numeroPalabras;
  int palabraElegida;
  srand(time(NULL));
  while((fgets(array, 200, fp)) != NULL) {
    numeroPalabras++;
}
palabraElegida = rand() % numeroPalabras;
rewind(fp);
  if(fgets(array, 200, fp) != NULL) {
    char *almacenado = array;
    printf("%s", almacenado);
  }

puts("Tenes 6 intentos, antes de que se complete el dibujo del ahorcado");
char *vos;
for(int j = 1; j <= 6; j++) {
  printf("Intento %d\n", j);
  scanf("%c", vos);
  if(vos == almacenado) {
    puts("Ganaste!");
    return 1;
  }
}
fclose(fp);
return 0;
}
