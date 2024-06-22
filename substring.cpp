#include<iostream>

char* substring(char arr[], int start, int length){
    char* substring = new char[length + 1]; // +1 for null terminator
    for (int i = 0; i < length; i++)
    {
        substring[i] = arr[start - 1 + i]; // start - 1 because array indices start at 0
    }
    substring[length] = '\0'; // null terminator
    
    return substring;
}

int main(){
    int n;
    int start;
    int length;
    
    std::cout << "How many characters would you like to input: " << std::endl;
    std::cin >> n;
    char* string = new char[n + 1]; // +1 for null terminator
    std::cout << "Enter your string: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> string[i];
    }
    string[n] = '\0'; // null terminator
    
    std::cout << "In what position would you like to extract your substring: ";
    std::cin >> start;
    std::cout << "How many characters would you like to extract: ";
    std::cin >> length;

    char* sub = substring(string, start, length);
    std::cout << " " << sub << std::endl;
    delete[] sub; // free the memory
    
    delete[] string; // free the memory
    
    return 0;
}