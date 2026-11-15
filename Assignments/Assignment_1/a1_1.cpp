/*
Enter a first number :6
Enter second number :2
Division is :3%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a first number :8
Enter second number :2
Division is :4%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a first number :9
Enter second number :3
Division is :3%  
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

int divide (int iNo1 , int iNo2) {
    return iNo1/iNo2 ; 
}

int main(){
    int iValue1 = 0 ; 
    int iValue2 = 0 ; 
    int iRet = 0 ; 


    cout << "Enter a first number :" ; 
    if(!(cin>> iValue1)){
        cerr<< "Invalid input "; 
        return EXIT_FAILURE ; 
    }
    cout <<"Enter second number :"; 
    if(!(cin >> iValue2)){
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }
    iRet = divide(iValue1 , iValue2 ) ; 
    cout << "Division is :" << iRet ; 
    cout <<"\t" ;

    return EXIT_SUCCESS ; 
    

}
