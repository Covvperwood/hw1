#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int n, i,r, min_elem_ind = 0, max_elem_ind = 0 ;

   printf("Enter the length of massive\n");
   scanf("%d", &n);
   int a[n];
   for (i = 0; i<n; i++){
      scanf("%d", &a[i]);
   }
   for (i = 0; i<n; i++){
    printf("%d ", a[i]);
   }
   for (i = 0; i<n; i++){
      if (a[i] > a[max_elem_ind])
      { 
         max_elem_ind = i;
      } 
   }
   for (i = 0; i<n; i++){
      if (a[i] < min_elem_ind)
      { 
         min_elem_ind = i;
      }
   }
   r = a[min_elem_ind];
   a[min_elem_ind] = a[max_elem_ind];
   a[max_elem_ind] = r;

   //printf("Best approximate value is: %d\n", approx_elem);
   printf("\n");
   for (i = 0; i<n; i++){
    printf("%d ", a[i]);
   }
   return 0;
}