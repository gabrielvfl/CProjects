#include <stdio.h>
#include <stdlib.h>
int main(){
   int i, j,size,base;
   printf("Insert size:\n");
   scanf("%i",&size);

   for (i=0; i<size;i++){
      printf("*");
      printf("\n");
   }
   printf("\n");
 
   for (i=size; i>0;i--){
      printf("*");
   }    
   printf("\n");
   printf("Now we will do triangles!\n");
   printf("Insert the size of bases:\n");
   scanf("%i",&base);
   
   for (i = 0; i < base; i++){
      for (j = 0; j <= i; j++){
         printf("*");
      }
      printf("\n");
   }
   printf("\n");

   for (i = base; i >= 0; i--){
      for (j = 0; j < i; j++){
         printf("*");
      }
      printf("\n");
   }
   printf("\n");
   for ( i = base; i >= 1; i-- ) {
      printf("\n");
      for ( j = 0; j < (base - i); j++ ){
         printf(" ");
      }
      for ( j = 1; j <= i; j++ ){
         printf("*");
      }
   }
   printf("\n");
   for ( i = 0; i < base; i++ ) {
      printf("\n");
      for ( j = 1; j < (base-i); j++ ){
         printf(" ");
      }
      for ( j = 0; j <= i; j++ ){
         printf("*");
      }
   }
   printf("\n");
   return 0;
}
