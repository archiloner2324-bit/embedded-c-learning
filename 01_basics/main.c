#include <stdio.h>
void add_ten(int *ptr)
{ *ptr= *ptr+10; }

int main ()
 {
   int temp=20;
   printf (" До temp=%d\n", temp);
   
   add_ten(&temp);
   printf ("После temp=%d\n", temp);
  
  return 0;
  }
