/*
Enter a number :
4
EVEN 
vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
7
ODD 
vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
2
EVEN  


*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

bool evenOdd(int iNo){
    return (iNo %2 == 0) ;
}

int main(){
    int iValue = 0 ; 
    bool bRet = false ; 

    cout << "Enter a number :\n";
    if(!(cin >> iValue )){
        cout << "Invalid input " ; 
        return EXIT_FAILURE ;

    }
    bRet = evenOdd (iValue) ;
    if(bRet == true )cout << "EVEN \n"; 
    else cout <<"ODD \n" ;

    return EXIT_SUCCESS ;

}