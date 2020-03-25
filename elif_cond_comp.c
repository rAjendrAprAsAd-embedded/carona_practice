#include <stdio.h>
#define A 10  
/*
#define X 45.25   error: floating constant in preprocessor expression #define X 45.25


*/
#define B 40
int main()
{
#if A==B
 printf("Hello");
#elif A>B
 printf("World");
#else
 printf("CodingFox");
#endif
return 0;
}
