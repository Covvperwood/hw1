#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int n, i,r=0, min_elem_ind = 0, max_elem_ind = 0 ;

   printf("Enter the length of massive\n");
   scanf("%d", &n);
   int a[n];
   for (i = 0; i<n; i++){
      scanf("%d", &a[i]);
   }
   for (i = 0; i<n; i++){
    printf("%d ", a[i]);
   }
   for (i=0; i<n; i++){
    if(a[i] != a[n-i-1]){
      printf("Unbalanced\n");
      return 1;
    }
  }
  printf("Symmetric\n");
  return 0;
}