#include <iostream>
#include <string>
using namespace std;

class TrieNode {
public:
  char data;
  TrieNode *children[26];
  bool isTerminal;

public:
  TrieNode(char ch) {
    data = ch;
    for (int i = 0; i < 26; i++) {
      children[i] = NULL;
    }
    isTerminal = false;
  }
};

class Trie {
public:
  TrieNode *root;

public:
  Trie() { root = new TrieNode('\0'); }
  void insertWord(string word);
  void insertUtil(TrieNode *root, string word);
  
};
void Trie::insertWord(string word) { insertUtil(root, word); }
void Trie::insertUtil(TrieNode *root, string word) {
  // base case
  if (word.length() == 0) {
    root->isTerminal = true;
    return;
  }
  // processing
  int index = word[0] - 'A';
  TrieNode *child;
  if (root->children[index] != NULL) {
    child = root->children[index];
  } else {
    child = new TrieNode(word[0]);
    root->children[index] = child;
  }
  // recursion
  insertUtil(child, word.substr(1));
}
int main() {
  Trie *t = new Trie();

  t->insertWord("ARM");
  t->insertWord("DO");
  t->insertWord("TIME");

  

  return 0;
}