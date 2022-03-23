#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 200

int main()
{
  char user_input[MAX], word[MAX];
  char **tokens;
  int count;
  List *history = init_history();
  
  while (user_input[0] != '3')
  {
    // display menu
    printf("Hello, welcome to Tokenizer!\n");
    printf("1. Tokenize String\n");
    printf("2. Print history\n");
    printf("3. Exit\n");
    fgets(user_input, MAX, stdin); // get user input

    if (user_input[0] == '1') // tokenize
    {
      printf("Enter string to tokenize:\n");
      fgets(user_input, MAX, stdin);
      tokens = tokenize(user_input);
      print_tokens(tokens);
      add_history(history, user_input);
      free_tokens(tokens);
    }
    else if (user_input[0] == '2') // display history
    {
      printf("Printing History:\n");
      print_history(history);
    }
    else if (user_input[0] == '3') // exit tokenizer
    {
      printf("Thank you for using Tokenizer!\n");
      break;
    }  
  }
}
