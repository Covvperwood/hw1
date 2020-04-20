#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int n, i,r, approx = 99999999, approx_elem = -1 ;

   printf("Enter the length of massive and r");
   scanf("%d%d", &n, &r);
   int a[n];
   for (i = 0; i<n; i++){
      scanf("%d", &a[i]);
   }
   for (i = 0; i<n; i++){
      if (abs(r-a[i]) < approx)
      { 
         approx = abs(r-a[i]);
         approx_elem = a[i];
      }
   }
   printf("Best approximate value is: %d\n", approx_elem);

   return 0;
}
