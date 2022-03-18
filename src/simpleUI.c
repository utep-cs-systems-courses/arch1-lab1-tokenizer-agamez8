#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 100

int main()
{
  char user_input[MAX];
  char **tokens;
  List *ptr = init_history();
  char *history;
  int count;
  
  while (user_input[0] != '2')
  {
    printf("Hello, welcome to Tokenizer!\n");
    printf("1. Tokenize string\n");
    printf("2. Print History\n");
    printf("3. Exit\n");
    fgets(user_input, MAX, stdin);

    if (user_input[0] == '1')
    {
      printf("Enter:\n");
      fgets(user_input, MAX, stdin);
      // problem right here
      tokens = tokenize(user_input);
    }
    else if (user_input[0] == '2')
    {
      printf("Printing History:\n");
    }
    else if (user_input[0] == '3')
    {
      printf("Thank you for using Tokenizer!\n");
      break;
    }  
  }
}
