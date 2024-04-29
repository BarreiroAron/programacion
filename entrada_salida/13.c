#include <stdlib.h>
#include <stdlib.h>
#define  MAXLINE 100

int main(int argc, char *argv[]) {
 char buffer[MAXLINE] ="";
 for(int i = 1; i < argc; i++) {
   FILE *fp = fopen(argv[i], "r");
   //if(fp != NULL) {
   while(fgets(buffer, MAXLINE, fp) != NULL) {
     printf("%s", buffer);
     }
   //} else { fgets(buffer, MAXLINE, stdin); }
   fclose(fp);
 }
 return 0;
}
