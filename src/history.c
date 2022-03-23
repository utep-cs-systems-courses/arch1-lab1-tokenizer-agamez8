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

  // find string length
  int len = 0;
  while (str[len] != '\0')
    len++;

  // get copy of string
  item -> str = copy_str(str, len);
  item -> next = NULL;

  // set item id
  if (temp == NULL)
  {
    item -> id = i;
    list -> root = item;
    return;
  }

  // increment id
  while (temp -> next != NULL)
  {
    i++;
    temp = temp -> next;
  }
  i++;
  item -> id = i;
  temp -> next = item; // store phrase
}

/* Get history */
char *get_history(List *list, int id)
{
  if (id == 0) // id does not exist
  {
    return "ID not found.";
  }

  Item *temp = list -> root; // set temp
  int i = 0;

  for (i = 0; i < id; i++)
  {
    temp = temp -> next;
  }
  
  return temp -> str;
}

/* Print entire contents of list */
void print_history(List *list)
{
  Item *temp = list -> root; // set temp
  int i = 0;
  
  for (i = 0; temp != NULL; i++)
  {
    printf("%s\n", temp -> str); // print content
    temp = temp -> next;
  }
}

/* Free the history list and the strings it references */
void free_history(List *list)
{
  Item *temp = list -> root;

  while (temp != NULL) // while not empty
  {
    temp = temp -> next;
    free(temp -> str); 
    free(temp);
    temp = list -> root;
  }
  free(list); // free list
}

