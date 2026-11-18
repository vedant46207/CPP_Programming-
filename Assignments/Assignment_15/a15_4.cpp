/*
Enter first number :1
Enter second number :2
Enter third number :3
6
vedantbarne@Vedants-MacBook-Air-2 Assignment_15 % ./myexe
Enter first number :4
Enter second number :5
Enter third number :6
120
*/
#include<iostream>
#include<cstdlib>
using namespace std ; 
int mul (int iNo1, int iNo2, int iNo3){
    int mul =0 ; 
    mul = iNo1*iNo2*iNo3 ; 
    return mul ;
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;
    int iValue3 = 0 ;
    int iRet = 0 ;
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
    cout<<"Enter third number :" ;
    if(!(cin >> iValue3)){
        cerr <<"Invalid input "; 
        return EXIT_FAILURE ;
    }
    iRet = mul(iValue1,iValue2,iValue3) ;
    cout << iRet <<"\n" ;


    return EXIT_SUCCESS ;
}