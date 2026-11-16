/*
Enter first number :4
Enter second number :5
Enter third number :6
6 is the greatest number % 

vedantbarne@Vedants-MacBook-Air-2 Assignment_5 % ./myexe
Enter first number :7
Enter second number :4
Enter third number :5
7 is the greatest number %
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int checkgreater (int iNo1 ,int iNo2 , int iNo3 ){
    if(iNo1 > iNo2 && iNo1 > iNo3 ) return 1 ; 
    else if(iNo2 > iNo1 && iNo2 > iNo3) return 2 ; 
    else return 3 ; 
}
int main(){

    int iValue1 = 0 ; 
    int iValue2 = 0 ; 
    int iValue3 = 0 ;
    int iRet = 0 ; 


    cout << "Enter first number :" ; 
    if(!(cin >> iValue1)){
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }
    cout << "Enter second number :" ; 
    if(!(cin >> iValue2)){
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }
    cout << "Enter third number :" ; 
    if(!(cin >> iValue3)){
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }

    iRet = checkgreater(iValue1, iValue2 , iValue3 ) ;
    if(iRet == 1 ) cout << iValue1<<" is the greatest number "; 
    else if (iRet == 2)cout << iValue2 << " is the greatest number ";
    else if(iRet == 3 )cout << iValue3<<" is the greatest number " ; 

    return EXIT_SUCCESS ; 
}