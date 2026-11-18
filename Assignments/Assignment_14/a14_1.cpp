/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % g++ a14_1.cpp -o myexe
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :12
144
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :13
1
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :10
10
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int print(int iNo){
    int i = 0 ;
    int fact = 1 ; 
    for(i=1 ; i<= iNo/2 ; i++ ){
        if(iNo % i  == 0){
            fact = fact*i ; 
        }
    }
    return fact ;
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ; 
    cout << "Enter a number :" ;
    if(!(cin >> iValue )) {
        cerr << "invalid input"; 
        return EXIT_FAILURE ;
    }
    iRet  = print(iValue) ;
    cout << iRet <<"\n";
    return EXIT_SUCCESS ;
}