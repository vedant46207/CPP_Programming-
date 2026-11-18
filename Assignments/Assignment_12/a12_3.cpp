/*
Enter number :678764
frequency of 2 : 0%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :234322
frequency of 2 : 3%  
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int counttwo(int iNo){
    int i = 0 ; 
    int iCount = 0 ;
    while(iNo != 0 ){
        
        i = iNo %10 ; 
        if(i == 2 ) iCount ++ ; 
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
    iRet = counttwo(iValue) ; 
    cout << "frequency of 2 : "<<iRet ; 
    return EXIT_SUCCESS ;
}