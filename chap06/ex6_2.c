#include <stdio.h>

int main()
{
    int a = 0;
    int i = 1;

    /*
    for (i = 1; i < 11; i++) { 
        a = a + i;
    }
    */

   while (i < 11)
   {    
        a = a + i;
        i++;
   }

    printf("i : %d\n", i);
    printf("a : %d\n", a);

   return 0; 
}