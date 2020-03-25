/*
it checks whether the macro defined or not . It returns true if macro  is defined else returns false*/
#include <stdio.h>
#define MAX
int main()
{
#if defined(MAX)
 printf("Hello\n");
#else
 printf("World\n");
#endif
 printf("\n");
#if !defined(MIN)
 printf("bick\n");
#else
 printf("bunny\n");
#endif
return 0;
}
