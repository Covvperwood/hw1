#include <stdio.h>
#include <stdlib.h>

char* pos(char *s1, char c){
  int i=1;
  int len1 = strlen(s1);
  
  while (s1[i] != c && i!=len1){
     i++;
  }
  return i;
}
int main()
{
  
  printf("%d", pos("abcd", 'd')+1);
  printf("\n");
  return 0;
}