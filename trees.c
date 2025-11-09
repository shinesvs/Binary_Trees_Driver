#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "queue4trees.h"

typedef struct node {
  char data ;
  struct node * l_child ;
  struct node * r_child ;
} node_s ;




node_s * __root = NULL ;


void add ( char data )
{
  node_s * new = malloc ( sizeof(node_s));
  new -> data = data;
  new -> l_child = NULL;
  new -> r_child = NULL;
  
  if ( __root == NULL ) {
  __root = new;
  return;
  }
  
  if ( __root -> l_child == NULL ){
  __root -> l_child = new;
  return;
  } else {
    // add for futrue exploration
    enqueue( __root -> l_child);
  }
  
  
  if ( __root -> r_child == NULL ){
  __root -> r_child = new;
  destroy_queue();
  return;
  } else {
    // add for futrue exploration
    enqueue( __root -> r_child);
  }
  
  
  while( queue_empty() == false ) 
  {
      node_s * node =(node_s *) dequeue();
      if ( node -> l_child == NULL ) {
        node -> l_child = new;
        destroy_queue();
        return;
      } else {
        enqueue( (void *)(node -> l_child) );
      }
      
      if ( node -> r_child == NULL ) {
        node -> r_child = new;
        destroy_queue();
        return;
      } else {
        enqueue(  (void *)(node -> r_child) );
      }
  } 
  
}


void preorder( node_s * node )
{
  if ( node == NULL ){
    return;
  }

  printf("%c ", node -> data );
  preorder(node->l_child);
  preorder(node->r_child);
  return;
}

void print_preorder() {
  preorder(__root);
  printf("\n");
}


void inorder( node_s * node )
{
  if ( node == NULL ){
    return;
  }
  
  inorder(node->l_child);
  printf("%c ", node -> data );
  inorder(node->r_child);
  return;
}

void print_inorder() {
  printf("Inorder: ");
  inorder(__root);
}



void postorder( node_s * node )
{
  if ( node == NULL ){
    return;
  }

  postorder(node->r_child);
  postorder(node->l_child);
  printf("%c ", node -> data );
  return;
  
}

void print_postorder() {
  printf("Postorder: ");
  postorder(__root);
}
