#include <stdio.h>
 
int main () {

   /* an array with 6 rows and 3 columns*/
   int a[6][3] = { {0,0,1}, {1,2,3}, {2,4,5}, {3,6,7},{4,8,9}, {30,30,60}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 6; i++ ) {

      for ( j = 0; j < 3; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
         printf("\n");
      }
   }
   
   return 0;
}
