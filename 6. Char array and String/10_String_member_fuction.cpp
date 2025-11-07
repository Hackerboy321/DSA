#include <iostream>

using namespace std ;

int main() {

    string word = "Hello world" ;

        // 1 - str.length() = this will tell the length of the string
        cout<<word.length()<<endl; 

        // 2 - str.at(idx) = this will tell value of a particular index whichis pass it the fuction.
        cout<<word.at(4)<<endl ;

        // 3 - str.find("character you wnat to find " , the starting index where to start to find.
        cout<<word.find("l")<<endl;
        cout<<word.find("l",3)<<endl;
        cout<<word.find("l", 4)<<endl;

        //4 - str.substr(start index of the sub string , size of the sub string )
        cout<<word.substr(0,5) ;



    return 0 ;
}