#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"
#define MAX 100

int main()
{
  // Variables
  char menu_choice;
  char user_input[MAX];
  char **tokens;
  
  while (menu_choice != 'q')
  {
    printf("Hello, welcome to Tokenizer!\n");
    printf("a. Tokenize string\n");
    printf("b. Print history\n");
    printf("q. Quit\n");

    scanf("%c", &menu_choice);

    if (menu_choice == 'a') // Tokenize
    {
      printf("Enter sentence to tokenize: ");
      fgets(user_input, MAX, stdin);
      // tokens = tokenize(user_input);
      // print_tokens(tokens);
      // free_tokens(tokens);
    }
    if (menu_choice == 'b') // Print history
    {
      printf("--- Printing History ---\n");
    }
  }
  printf("Thank you for using Tokenizer!\n"); // Exit program
}
