#include <unistd.h>
#include <stdio.h>

int main(void)
{
   int i;
   for(i=0; i <4;)
   {
      printf("hello world \n");
      sleep(3);
   }
   return (0);
}
