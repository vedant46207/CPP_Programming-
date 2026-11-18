/*
Enter a number :2395
270
vedantbarne@Vedants-MacBook-Air-2 Assignment_13 % ./myexe
Enter a number :1018
8
vedantbarne@Vedants-MacBook-Air-2 Assignment_13 % ./myexe
Enter a number :9440
144
*/
#include<iostream>
#include<cstdlib>


using namespace std ; 

int print(int iNo ){

    int iMul = 1 ; 
    int i = 0 ; 
    while (iNo != 0){
        i = iNo % 10 ; 

        if(i != 0){
            iMul = iMul * i ; 
        }
        iNo = iNo /10 ; 
    }
    return iMul ; 
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ;
    cout << "Enter a number :" ;
    if(!(cin >> iValue )){
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }

    iRet = print(iValue ) ;
    cout << iRet << "\n"; 

    return EXIT_SUCCESS ;

}