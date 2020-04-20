#include <stdio.h>
#include <stdlib.h>

char* double_str(char *s){
  int i = 0;
  int len = strlen(s);

  char *result = (char *) malloc(len*2+1);
  
  while (i != len1){
     result[i] = s[i];
     result[i+len]=s[i]
     i++;
  }
  return result;
int main()
{
  printf(double_str("abcd"));
  return 0;
}