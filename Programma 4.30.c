#include <stdio.h>
#include <unistd.h>

int main() {
   
   int i, iMax;
   
   i = 0;
   iMax = 10;
   
   while(i <= iMax)
      {
      printf("Sto contando... %d\n", i);
      i++;
      sleep(1);
      }
  printf("\nHo contato fino a %d", iMax);
  return 0;
  
  }
