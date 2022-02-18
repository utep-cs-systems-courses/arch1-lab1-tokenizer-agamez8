#include <stdio.h>
#include "tokenizer.h"

int main()
{
  char menu_choice;

  while (menu_choice != 'q')
  {
    printf("Hello, welcome to Tokenizer!\n");
    printf("a. Tokenize string\n");
    printf("b. Print history\n");
    printf("q. Quit\n");

    scanf("%c", &menu_choice);
  }
  printf("Thank you for using Tokenizer!\n");
}
