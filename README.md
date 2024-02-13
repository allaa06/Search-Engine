#Search-Engine

## Project Overvew
- The purpose of the program is that the user enters a word and if the word is in at least one of the given files the user will get the name of that file or files.

## Installation
- User must upload source code in VIM or Visual Code. If the user wants to upload the code into VIM he/she must open the file with .cpp extension and copy the source code there. After uploading he/she must Run this code in Visual Code or compile this code in VIM with g++(compiler for C++).If the user does  not have a compiler he can install it using this command 

```sh
sudo apt install g++ 
```
To compile the code the user must write this command

```sh
g++ "file_name"
```
and after compilation the user must write

```sh
./a.out
```
for executing the program.

## Usage
- We use std::ifstream for reading input from a file. We read 3 files(1.txt, 2.txt, 3.txt) and give them F1, F2, F3 names. Then we input the search word and check if files are open if not we throw an exeception and call the add_to_map function. In global scope we have 3 maps for each file and our function split each word into word and add this word in map(in the first map we have the words of the first file).Using the array which includes all the symbols that can be ignored when searching for the word.If the search word is found, it prints the file in which it is found. 
