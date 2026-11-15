/*
Enter a number 11
Hello%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % ./myexe
Enter a number 9
Demo %    

vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % ./myexe
Enter a number 17
Hello%                                                                                 vedantb
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

bool check10(int iNo){

    bool bRet = false ; 
    if( iNo >10 ) bRet = true ; 
    else bRet = false ; 
    return bRet  ;
}
int main(){
    int iValue = 0 ; 
    bool bRet = false ; 

    cout << "Enter a number " ;
    if(!(cin >> iValue )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }

    bRet = check10(iValue) ;
    if(bRet == true ) cout << "Hello" ;
    else cout << "Demo " ;
    

    return EXIT_SUCCESS ; 

}