#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct queue_node {
  void * node;
  struct queue_node * next_queue_node;
} q_node;

static q_node * __queue_front = NULL;
static q_node * __queue_end = NULL;


bool queue_empty() {
  if ( __queue_end == NULL )
  return true;
  else 
  return false;
}

void enqueue ( void * node_to_explore) {
  
  q_node * new_entry = malloc( sizeof(q_node) );
  new_entry -> node = node_to_explore;
  new_entry -> next_queue_node = NULL;
  
  if(__queue_end) {
    __queue_end ->  next_queue_node = new_entry;
    __queue_end = new_entry;
  }else { // initializing queue
  __queue_end = new_entry;
  __queue_front = new_entry;
  } 
}


void * dequeue() {
  void * return_node_address = NULL;
  
  if ( !__queue_front )
    return NULL;
    
  return_node_address = __queue_front -> node;
  q_node * temp = __queue_front -> next_queue_node;
  free(__queue_front);
  __queue_front = temp;
  return return_node_address;
  
}

void destroy_queue() {
   q_node * ptr = __queue_front;
   while ( ptr ){
    q_node * temp = ptr;
    ptr = ptr -> next_queue_node;
    free(temp);
   }
  __queue_front = NULL;
  __queue_end = NULL;
}
