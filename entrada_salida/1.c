1   │ #include <stdio.h>
   2   │
   3   │ int main(int argc, char *argv[]) {
   4   │   int n = atoi(argv[1]);
   5   │   int sum = 0;
   6   │   for(int i = 0; i < n; i++) {
   7   │     int num;
   8   │     scanf("%d", &num);
   9   │     sum += num;
  10   │   }
  11   │   printf("%d\n", sum);
  12   │   return 0;
  13   │ }
