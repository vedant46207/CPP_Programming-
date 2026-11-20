/*
Enter a char :A
Your exam is at 7AM% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char :a
Your exam is at 7AM% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_25 % ./myexe
Enter a char :o
Invalid input % 

*/
#include<iostream>
#include<cstdlib>
#include<regex>

using namespace std ; 

void print(char cValue){
    if(cValue == 'A' || cValue == 'a') cout << "Your exam is at 7AM";
    else if(cValue == 'B' || cValue == 'b') cout << "Your exam is at 8:30AM";
    else if(cValue == 'C' || cValue == 'c') cout << "Your exam is at 9:20AM";
    else if(cValue == 'D' || cValue == 'd') cout << "Your exam is at 10:30AM";
    else cout << "Invalid input ";

}

int main(){
    string sChar = "";
    char cValue = '\0'; 
    cout << "Enter a char :" ;
    getline(cin , sChar);
    if(!regex_match(sChar, regex("[A-Za-z]+"))){
        cerr << "Invalid input\n" ;
        return EXIT_FAILURE ;
    }
    if(sChar.length()>1){
        cout << "Invalid input \n";
        return EXIT_FAILURE;

    }
    cValue = sChar[0];
    print(cValue) ;


    return EXIT_SUCCESS ;
}