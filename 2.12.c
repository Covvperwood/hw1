#include <stdio.h>
#include <stdlib.h>

char* glue_str(char *s1, char *s2){
  int i=0, j=0;
  int len1 = strlen(s1);
  int len2 = strlen(s2);

  char *result = (char *) malloc(len1+len2+1);
  
  for(i=0; i<len1; i++){
     result[i] = s1[i];
  }
  for(j=0; j<len2; j++){
     result[len1+j]=s2[j];
  }
  return result;
}
int main()
{
  
  printf(glue_str("abcd", "ab"));
  printf("\n");
  return 0;
}