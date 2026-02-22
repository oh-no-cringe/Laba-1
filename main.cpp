#include <iostream>
#include "palindrome.h"
#include "alpha.h"
#include "transform.h"
#include "delete.h"

using namespace std;


int main(){


if (palindrome("level")){
    cout <<"palindrome" << endl;
}
else{
    cout << "nepolindrome" << endl;
}


cout << "Гласнных букв : " << alpha("Hello") << endl;

cout << "Заглавная буквы : " << Upper("hello") << endl;
cout << "Маленькие буквы : " << Low("HELLO") << endl;

cout << "Удаление : " << del("Hello, World! 123") ;


}