#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int numeroLineas = 0;
 int numeroPalabras = 0;
 int numeroCaracteres = 0;
 int contadorParaPalabras = 0;
 int c;


 int probando = 0;
 for(int i = 1 ; i < argc; i++) {
 FILE *fp = fopen(argv[i], "r");

 while((c = fgetc(fp)) != EOF) {
   numeroCaracteres++;
   if(c == ' ' || c == '\t' || c == '\n')// || c == '\f' || c == '\v' || c == 'r')
  { contadorParaPalabras = 0;
    } else if (!contadorParaPalabras) {
      numeroPalabras++;
      contadorParaPalabras = 1;
    }
   if(c == '\n') {
     numeroLineas++; }
 }
   printf("%d ", numeroLineas);
   printf("%d ", numeroPalabras);
   printf("%d\n", numeroCaracteres);
   fclose(fp);
 }
 return 0;
}
