#include <stdio.h>
 
/* function declaration */
void func(void);
 
extern int count; /* global variable */
 count = 5;
main() {

   while(count--) {
      func();
   }
	
   return 0;
}

/* function definition */
void func( void ) {

   extern int i ; /* local extern variable */
   i = 5;
   i++;

   printf("i is %d and count is %d\n", i, count);
}
