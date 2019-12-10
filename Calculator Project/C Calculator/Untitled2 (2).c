#include <stdio.h>

main() {

   int a ;
   int b ;
   int c ;
   
   printf("Enter integer value 1\n\n");
   scanf("%d",&a);
   
   printf("Enter integer value 2\n\n");
   scanf("%d",&b);

   if ( a && b ) {
      printf("AND - Condition is TRUE\n" );
   }
    else {
      printf("AND - Condition is FALSE\n" );
   }
	
   if ( a || b ) {
      printf("OR - Condition is TRUE\n" );
   }
   else {
      printf("OR - Condition is FALSE\n" );
   }
   
   if (!!(a) ^ !!(b)) {
      printf("XOR - Condition is TRUE\n" );
   }
   else {
      printf("XOR - Condition is FALSE\n" );
   }
	
	
   if ( !(a && b) ) {
      printf("NOT - Condition is TRUE\n" );
   }
   else {
      printf("NOT - Condition is FALSE\n" );
   }
   
}
