#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string Upper(string name){
    int n = name.size();

   for(int i = 0; i < n; i ++){
    name[i] = toupper(name[i]);
    
   }
return name;
}


string Low(string name){
        int n = name.size();
        for(int i =0; i< n; i++){
            name[i] = tolower(name[i]);
        }
        return name;

}