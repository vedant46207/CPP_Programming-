/*
Enter number :456
frequency of 4 : 1%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :6789
frequency of 4 : 0%     

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :23454
frequency of 4 : 2%


*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int countfour(int iNo){
    int i = 0 ; 
    int iCount = 0 ;
    while(iNo != 0 ){
        
        i = iNo %10 ; 
        if(i == 4 ) iCount ++ ; 
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
    iRet = countfour(iValue) ; 
    cout << "frequency of 4 : "<<iRet ; 
    return EXIT_SUCCESS ;
}