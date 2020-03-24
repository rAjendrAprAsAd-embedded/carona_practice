#include <stdio.h>

int main()
{

#ifdef OR
   int x=4;
   int bitpo=1;
   x |= 1<<bitpo;
   printf("x = %d\n",x);
#endif

#ifdef AND
   int x=4;
   int bitpo=2;
   x &= ~(1<<bitpo);
   printf("x is 4 bits 100 after clear %d bit the out put is ==%d\n",bitpo,x);
#endif

#ifdef TOG
   int x=4;
   int bitpo=2;
   x ^= 1<<bitpo;
   printf("100 clear the 2bit is %d\n",x);
#endif  

#ifdef CHECK
  int x=4,bit;
  int bitpo=2;
  bit = (x >> bitpo) & 1;
  printf("the 2 bit is %d\n",bit);
#endif
  
return 0;
} 






