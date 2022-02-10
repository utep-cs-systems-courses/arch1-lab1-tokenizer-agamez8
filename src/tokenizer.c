#include <stdio.h>
#include <stdlib.h>

int space_char(char c)
{
  if (c == ' ' || '\t')
  {
    return 1;   
  }
  else
    return 0;
}         

int non_space_char(char c)
{
  if (c != ' ' || '\t')
  {
    return 0;
  }
  else
    return 1;
}

char *word_start(char *str)
{
  
}
