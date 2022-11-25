//Creating a Linked List
#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node {
  int value;
  struct node *next; //each node has a value and a pointer to the next node
};

// function for printing values in the linked list 
void printLL(struct node *pointer) {
  while (pointer != NULL) {
    printf("%d ", pointer->value);
    pointer = pointer->next;
  }
}

int main() {
  // Initializing nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocating memory to each node
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assigning values to the nodes
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connecting the nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head = one;
  printLL(head);
}