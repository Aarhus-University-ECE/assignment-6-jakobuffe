#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "max.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
  int count = 0;
  while (l->next != NULL) {
    l = l->next;
    count++;
  }

	return count;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
  }
  if (p == NULL) { /* The last node with node.next=NULL holds a value, which we print */
    printf("%d", p->data);
  }
  printf("\n");
}

// exercise 3.e
int largest(node *l) {
  // pre:  head points to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
  
  int amount_of_nodes = size(l); /*Finds the amount of nodes*/
  int array_of_nodes[amount_of_nodes]; /* Creates array with the amount of nodes being the size */

  for (int i = 0; i < amount_of_nodes; i++) {
    array_of_nodes[i] = l->data;    /* We insert the node's data*/
    l = l->next;                    /* Then find the next node for next iteration */
  }

  int max_num = max(array_of_nodes, amount_of_nodes);
  printf("%d", max_num);
  return max_num;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  // Show list here
  add(list, 2);
  // Show list here

  int max_num = largest(list);
  printf("The max number is: %d\n", max_num);
  return 0;
}

#endif
