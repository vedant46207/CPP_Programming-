/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :e
TRUE%

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :E
TRUE%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :l
FALSE%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a char :M
FALSE%  


*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

bool vowelCheck(char ch){
    bool bRet = false ;
    if(
        ch == 'A' || ch == 'a'
        ||
        ch == 'E' || ch == 'e'
        ||
        ch == 'I' || ch == 'i'
        ||
        ch == 'O' || ch == 'o'
        ||
        ch == 'U' || ch == 'u'
        
    ){
        bRet = true ; 
    }
    return bRet  ; 
}
int main(){
    char ch = '\0'; 
    bool bRet = false ; 

    cout <<"Enter a char :" ;
    if(!(cin>> ch)){
        cerr<<"Invalid input "; 
        return EXIT_FAILURE ;
    }

    bRet  = vowelCheck (ch) ;

    if(bRet == true ) cout << "TRUE" ;
    else cout <<"FALSE" ;

    return EXIT_SUCCESS ; 
}