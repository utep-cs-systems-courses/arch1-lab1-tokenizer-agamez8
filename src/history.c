#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

/* Initialize linked list to store history */
List* init_history()
{
  List *head = (List*) malloc(sizeof(List));
  head -> root = NULL; // set head 

  return head;
}

/* Add history item to the end of the list */
void add_history(List *list, char *str)
{
  int i = 0;
  Item *item = (Item*) malloc(sizeof(Item));
  Item *temp = list -> root;

  while (temp -> next != NULL) // while not empty
  {
    // add strings to list
    temp -> str = str;
    temp -> next = item;
    temp -> next -> id = i;
    i++; 
  }
}

/* Get history */
char *get_history(List *list, int id)
{
  if (id < 0) // id does not exist
  {
    printf("Please try again.");
    return "An error has occurred.";
  }

  Item *temp = list -> root; // set temp

  while (temp != NULL)
  {
    if (temp -> id == id) // If id match
    {
      return temp -> str; // return string
    }
    temp = temp -> next; // search next 
  }
  return "An error has occurred.";
}

/* Print entire contents of list */
void print_history(List *list)
{
  Item *temp = list -> root; // set temp

  while (temp != NULL) // while not empty
  {
    printf("%s\n", temp -> str); // print all content
    temp = temp -> next;
  }
}

/* Free the history list and the strings it references */
void free_history(List *list)
{
  Item *temp = list -> root;

  while (temp != NULL) // while not empty
  {
    free(temp); // free content
    temp = temp -> next;
  }
  free(list); // free list
}

