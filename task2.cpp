#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>
#include <map>


std::map<std::string, std::string> m1_map;
std::map<std::string, std::string> m2_map;
std::map<std::string, std::string> m3_map;

void add_to_map(std::ifstream& F1, std::ifstream& F2, std::ifstream& F3)
{
   // git message
    std::string word;
    while(F1 >> word)
    {
        m1_map[word] = "1.txt";
    }
    while(F2 >> word)
    {
        m2_map[word] = "2.txt";
    }
    while(F3 >> word)
    {
        m3_map[word] = "3.txt";
    }
    
}


int main()
{
    std::ifstream F1("1.txt");
    std::ifstream F2("2.txt");
    std::ifstream F3("3.txt");

    std::string str;
    std::cout << "Enter the word\n";
    std::cin >> str;

    if(!F1.is_open() || !F2.is_open() || !F2.is_open())
    {
        throw
            std::invalid_argument("");
    }

    add_to_map(F1, F2, F3);
    const int size = 8;
    char arr[size] = {'?', '.', ':', ';', '!', '`', '*', '%'};
    
    std::cout << m1_map[str] << " " << m2_map[str] << " " << m3_map[str] ;
    for(int i = 0; i < size; ++i)
    {
        str.push_back(arr[i]);
        std::cout << m1_map[str] << " "<< m2_map[str] << " "<< m3_map[str] <<'\n';
        str.pop_back();
    }
    
    F1.close();
    F2.close();
    F3.close();
}




