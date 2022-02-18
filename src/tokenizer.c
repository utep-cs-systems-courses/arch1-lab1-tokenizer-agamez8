#include <stdio.h>
#include <stdlib.h>

/* Returns true if c is a whitespace character */
int space_char(char c)
{
  if (c == ' ' || '\t') // if c is a space or tab
  {
    return 1;
  }
  else
    return 0;
}         

/* Returns true if c is NOT a whitespace character */
int non_space_char(char c)
{
  if (c != ' ' || '\t') // if c is not a space or tab
  {
    return 0;
  }
  else
    return 1;
}

/* Return beginning of str */
char *word_start(char *str)
{
  while (space_char(*str)) // while there is a whitespace
  {
    str++; 
  }
  return str;
}

/* Return end of word */
char *word_terminator(char *word)
{
  while (non_space_char(*word)) // while there is no whitespace
  {
    word++;
  }
  return word;
}

/* Returns word count */
int count_words(char *str)
{
  int count = 0;
  str = word_start(str); // determines the word start

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
  char *copy = (char *) malloc(sizeof(char) * (len + 1))

    for (i = 0; i < len; i++)
    {
      copy[i] = inStr[i];
    }
    copy[i] = '\0'

    return copy;
}

/* Tokenize function */
char **tokenize(char* str)
{
  int word_count = count_words(str);
  char **token = (char **) malloc((word_count + 1) * sizeof(char*));

  for (int i = 0; i < word_count; i++)
  {
    
  }
  return 0;
}

/* Prints all tokens */
void print_tokens(char **tokens)
{
  int i = 0;

  while (tokens[i] != 0)
  {
    printf("\n%s", tokens[i]); // print array of chars
    i++;
  }
}

/* Frees all tokens and the vector containing them */
void free_tokens(char **tokens)
{
  int i = 0;

  while (tokens[i]) 
  {
    free(tokens[i]); // free each token in array
    i++;
  }
  free(tokens); // deallocate memory
}
