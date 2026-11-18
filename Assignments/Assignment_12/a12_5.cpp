/*
Enter number :23478
frequency  : 3%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :23421
frequency  : 5%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :6890
frequency  : 1%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :987
frequency  : 0% 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int lessthan6(int iNo){
    int i = 0 ; 
    int iCount = 0 ;
    while(iNo != 0 ){
        
        i = iNo %10 ; 
        if(i <6  ) iCount ++ ; 
        iNo = iNo /10 ;
    }
    return iCount ; 
}
int main(){
    int iValue = 0 ; 
    int iRet = 0 ;
    

    cout << "Enter number :" ;
    if(!(cin >> iValue)){
        cout<<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    iRet = lessthan6(iValue) ; 
    cout << "frequency  : "<<iRet ; 
    return EXIT_SUCCESS ;
}