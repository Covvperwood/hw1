#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int n, i,r,j, flag = 0;

   printf("Enter the length of massive\n");
   scanf("%d", &n);
   int a[n];
   for (i = 0; i<n; i++){
      scanf("%d", &a[i]);
   }
   for (i = 0; i<n; i++){
    printf("%d ", a[i]);
   }
   
   //printf("Best approximate value is: %d\n", approx_elem);
   printf("\n");
   for (i = 0; i<n-1; i++){
      for (j = i+1; j<n; j++){
         if(a[j]<a[i]){
	    flag = 1;
	    break;
         }
      }
   }
   if(flag == 0){
      printf("Ordered\n");
   }
   else{
      printf("NotOrdered\n");
   }
   
   return 0;
}