#include <iostream>
#include <string>
#include <cctype>  

using namespace std;

string del(const string name) { 
    string result = "";
    int n = name.size();
    
    for(int i = 0; i < n; i++) {
        char c = name[i];
        
        if(isalnum(c) || c == ' ') {
            result += c;
        }
    }
    
    return result; 
}