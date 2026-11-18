/*
Enter firs number :12
Enter second number :12
Equal %  

vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter first number :12
Enter second number :14
Not equal % 


*/
#include<iostream>
#include<cstdlib>
using namespace std ; 
bool checkequal (int iNo1, int iNo2){
    return (iNo1 == iNo2) ;
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    bool bRet = false ;
    cout<<"Enter first number :" ;
    if(!(cin >> iValue1)){
        cerr <<"Invalid input "; 
        return EXIT_FAILURE ;
    }
    cout<<"Enter second number :" ;
    if(!(cin >> iValue2)){
        cerr <<"Invalid input "; 
        return EXIT_FAILURE ;
    }
    bRet = checkequal(iValue1,iValue2) ;
    if(bRet == true ) cout << "Equal ";
    else cout <<"Not equal ";

    return EXIT_SUCCESS ;
}