#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 100

int main()
{
  char menu_choice;
  char user_input[MAX];
  char **tokens;
  
  while (menu_choice != 3)
  {
    printf("Hello, welcome to Tokenizer!\n");
    printf("1. Tokenize string\n");
    printf("2. Print history\n");
    printf("3. Quit\n");

    scanf("%d", &menu_choice);

    if (menu_choice == 1) // Tokenize
    {
      printf("Enter sentence to tokenize: ");
      printf("\n");
      fgets(user_input, MAX, stdin);
      // tokens = tokenize(user_input);
      // print_tokens(tokens);
      // free_tokens(tokens);
      printf(":)");
      printf("\n");
    }
    if (menu_choice == 2) // Print history
    {
      printf("--- Printing History ---\n");
      printf("\n");
    }
  }
  printf("Thank you for using Tokenizer!\n");
}
