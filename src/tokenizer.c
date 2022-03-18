#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

/* Returns true if c is a whitespace character */
int space_char(char c)
{
  if (c == ' ' || '\t') // if c is a space or tab
  {
    return 1; // true
  }
  else
    return 0; // false
}         

/* Returns true if c is NOT a whitespace character */
int non_space_char(char c)
{
  if (c != ' ' || '\t') // if c is not a space or tab
  {
    return 0; // false
  }
  else
    return 1; // true
}

/* Return beginning of str */
char *word_start(char *str)
{
  while (space_char(*str)) // while there is a whitespace
  {
    str++; // increment pointer to find start
  }
  return str; // return start
}

/* Return end of word */
char *word_terminator(char *word)
{
  while (non_space_char(*word)) // while there is no whitespace
  {
    word++; // increment word pointer until end
  }
  return word; // return word
}

/* Returns word count */
int count_words(char *str)
{
  int count = 1; // count
  str = word_start(str); // initalize word start
  
  while (*str != '\0')
  {
    if (space_char(*str) == 1) //if there is a space
    {
      count++; // increment word count
    }
    str++;
  }
  return count; // return word count
}

/* Returns a fresly allocated zero-terminated string */
char *copy_str(char *inStr, short len)
{
  char *str = (char*) malloc(sizeof(char) * (len+1));
  int i;
  
  for (i = 0; i < len; i++)
  {
    str[i] = inStr[i];
  }
  str[i] = '\0';
  return str;
}

/* Tokenize function */
char **tokenize(char* str)
{
  int word_count = count_words(str); // get word count
  char *end; // initalize end of word
  char **token = (char**) malloc((word_count+1) * sizeof(char*));

  int i;
  for (i = 0; i < word_count; i++)
  {
    str = word_start(str); // determine word start
    end = word_terminator(str); // determine word end
    token[i] = copy_str(str, (end - str)); // copy string
    str = word_terminator(str); // end string
  }
  token[i] = NULL; // null terminator
  return token; // return tokens
}

/* Prints all tokens */
void print_tokens(char **tokens)
{
  int i = 0;

  while (*tokens[i] != 0)
  {
    printf("\n%s", *tokens[i]); // print array of chars
    i++; // every index
    tokens++; // pointer in token
  }
}

/* Frees all tokens and the vector containing them */
void free_tokens(char **tokens)
{
  int i = 0; 

  while (tokens[i]) 
  {
    free(tokens[i]); // free each token in array
    i++; // every index
  }
  free(tokens); // deallocate memory
}
