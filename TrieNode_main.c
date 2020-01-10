#include "TrieNode.c"

int main()
{
	char* str;
	TrieNode* head = new_TrieNode();
	scanf(" %s",&str);
	insert(head, str);
	printf("%d %ld", search(head, str), head->count);
	return 0;
	
}
