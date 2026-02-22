#include <iostream>
#include <string>

using namespace std;

int palindrome(const string name){
   int n = name.size();
   bool palindrome = true;

   for(int i = 0; i < n/2; i++){
      if(name[i] != name[n-1-i]){
         palindrome = false;
      }
   }
return palindrome;

}
