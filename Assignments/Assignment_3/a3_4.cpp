/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :a

A%      

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :A

a% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :l

L% 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

char covertCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        ch = ch + 32 ; 
    }
    else if(ch >= 'a'&& ch <= 'z'){
        ch = ch -32 ; 
    }
    return ch ; 
}
int main(){
    char ch = '\0'; 
    char cRet = '\0' ;

    cout <<"Enter a char :" ;
    if(!(cin>> ch)){
        cerr<<"Invalid input "; 
        return EXIT_FAILURE ;
    }

    cRet = covertCase (ch) ;

    cout << "\n"<<cRet ; 

    return EXIT_SUCCESS ; 
}