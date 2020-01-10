#include "TrieNode.h" 

struct TrieNode* new_TrieNode()
{
	TrieNode* n =(TrieNode*) malloc(sizeof(TrieNode));
	n->isEndOfWord = false;
	n->count=0;
	int i;
	for(i=0; i<NUM_LETTERS; i++)
	{
		n->children[i] = NULL;//initiallize children
	}
	return n;
}

boolean capsLock(char ch)
{
	if(ch>='A'&&ch<='Z')
		return true;
	return false;//the character is between 'a' to 'z'
}
void insert (TrieNode** head, char* str)
{
	TrieNode* n = *head;
	boolean change;
	int index=0;
	while(*str)
	{
		change=capsLock(*str);
		if(change)
			index=(int)(*str)+32-(int)('a');
		else
			index=(int)(*str)-(int)('a');
		if(n->children[index] == NULL)	
			n->children[index] = new_TrieNode();
		n = n->children[index];
		str++;
	}
	n->count++;
	n->isEndOfWord = true;
	
}


boolean search (TrieNode** head, char* str)
{
	if(head == NULL)
		return false;
	int index=0;
	boolean change;
	TrieNode* n = *head;
	while(*str)
	{
		change=capsLock(*str);
		if(change)
			index=(int)(*str)+32-(int)('a');
		else
			index=(int)(*str)-(int)('a');
		n = n->children[index];
		if(n == NULL)
			return false;
		str++;
	}
	return n->isEndOfWord;
}

boolean have_children (TrieNode** n)
{
	TrieNode* temp=*n;
	int i;
	for(i = 0; i<NUM_LETTERS; i++)
	{
		if(temp->children[i])
				return true;
	}
	return false;
}



  
