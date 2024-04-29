#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  puts(" Jugar \n");
  puts(" Multyplayer \n");
  puts(" Opciones  \n ");
  puts(" Practica \n ");
  puts(" Salir \n ");
}



int main(void) {
  while(1) {
  system("clear");
  print_menu();
  int opcion;
  scanf("%d", &opcion);
  getchar();
  switch (opcion) {
case 1:
      puts("Elegiste Jugar");
      break;
case 2:
      puts("Elegiste Multiplayer");
      break;
case 3:
      puts("Elegiste Opciones");
      break;
case 4:
      puts("Elegiste Practica");
      break;
case 5:
      puts("Saliendo...");
      return 0;
default:
      puts("No conozco esa opcion");
      break;
}
  getchar();
  }
  return 0;
}
