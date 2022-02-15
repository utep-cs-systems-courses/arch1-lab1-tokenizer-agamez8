#include <stdio.h>
#include <stdlib.h>

/* Returns true if c is a whitespace character */
int space_char(char c)
{
  if (c == ' ' || '\t')
  {
    return 1;   
  }
  else
    return 0;
}         

/* Returns true if c is NOT a whitespace character */
int non_space_char(char c)
{
  if (c != ' ' || '\t')
  {
    return 0;
  }
  else
    return 1;
}

/* Return beginning of str */
char *word_start(char *str)
{
  while (space_char(*str))
  {
    str++;
  }
  return str;
}

/* Return end of word */
char *word_terminator(char *word)
{
  while (non_space_char(*word))
  {
    word++;
  }
  return word;
}

/* Returns word count */
int count_words(char *str)
{
  int count = 0;
  str = word_start(str);

  while (*str != '\0')
  {
    if (space_char(*str) == 1)
    {  
      count++;
    }
    str++;
  }
  return count;
}

/* Returns a fresly allocated zero-terminated string */
char *copy_str(char *inStr, short len)
{
  int i = 0;
  char *ptr = (char *) malloc(sizeof(char) * (len + 1))
    
}

/* Tokenize function */
char **tokenize(char* str)
{
  
}

/* Prints all tokens */
void print_tokens(char **tokens)
{

}

/* Frees all tokens and the vector containing them */
void free_tokens(char **tokens)
{

}
