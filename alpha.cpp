#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int alpha(const string a){
    int n = a.size();
    int count =0;

    for(int i=0;i < n; i++){
        char c= tolower(a[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
           {
            count++;
        }
    }

    return count;
}