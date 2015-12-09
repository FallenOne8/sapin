#include <stdlib.h>

int my_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
    {
      i = i + 1;
    }
  return(i);
}
char *my_strdup(char *str)
{
  int i;
  char *str2;
  str2 = malloc(sizeof(char)*(my_strlen(str)+1));
  i = 0;
  while(str[i] != '\0')
    {
      str2[i] = str[i];
      i = i + 1;
    }
  str2[i] = '\0';
  return(str2);
}
