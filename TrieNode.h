#ifndef TRIENODE_H
#define TRIENODE_H
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h> 


#define NUM_LETTERS ((int)26)

typedef enum {false=0, true=1} boolean;

typedef struct TrieNode {
	boolean isEndOfWord;
	long unsigned int count;
	struct node* children[NUM_LETTERS];
} TrieNode;

boolean capsLock(char ch);
struct TrieNode* new_TrieNode();
void insert(node* head, char* str);
boolean search (TrieNode** head, char* str);
boolean have_children (TrieNode* n);
boolean my_delete (TrieNode **n, char* str); 






#endif
