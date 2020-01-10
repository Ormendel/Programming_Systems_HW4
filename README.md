![](https://koenig-media.raywenderlich.com/uploads/2016/10/SwiftAlgClub_TrieData-trie-5-yoda.png)
# Programming_Systems_HW4
## This projects displays using of dynamic structs.

In this project we get a text file from the user and return the words in Lexicographical order or reverse Lexicographical order, and the frequency of a word by using TRIE Data Structure.
By getting text file from the user, the program computes the frequency of each word in the text and displays it as an output to the user after execute the running command ./frequency.


*** I assumed that the optimize length for a word is 50, hence for a word with length 60 for example, not all of the characters will be scanned properly! ***

### Note: The implementation of TRIE is by array of struct TrieNode, instead of HashMap as known in Wiki.
For more information, search in wiki!

#### Summary for my functions in trie.h (implemented in trie.c):
1. TrieNode_new - creates new TrieNode, initialize values: count to be zero, and each cell in the array of children to be NULL.
2. insert - gets constant string and puts it in a given TrieNode
3. search - the function gets constant string and constant TrieNode tree, and checks if the word is in the tree, to be specific - if the count variable in the last node is positive.
4. delete - the function deletes(free) all of the nodes in a pointer to a given tree
5. print - the function prints all of the words in the tree in Lexicographical order or reverse Lexicographical order (Based on a boolean varialbe) and the frequency of a word by using TRIE Data Structure.

#### Bio:
General information about TRIE: https://en.wikipedia.org/wiki/Trie


Inspiration to my implemention for this assignment: https://www.geeksforgeeks.org/trie-insert-and-search/


20 minutes of good explanation to TRIE Data Structure: https://www.youtube.com/watch?v=AXjmTQ8LEoI



@Author: Or Mendel (315524389)
