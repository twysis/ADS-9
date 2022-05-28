// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  BST<std::string> Tree;
  std::string word = "";
  std::ifstream file(filename);
  if (!file) {
    std::cout << "File error!" << std::endl;
    return;
  }
  while(!file.eof() {
    char ch = file.get();
    if ((ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z')
        word += ch;
    else {
      tolower(word);
      Tree.add(word);
      word = "";
  } 
  file.close();  
  }
  return Tree;      
}
        
