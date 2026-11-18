/*
Enter number :2395
There are no zeros % 

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :67009
Number of zeros are : 2%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :345600080
Number of zeros are : 4% 


*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int CountZero(int iNo){
    int i = 0 ; 
    int iCount = 0 ;
    while(iNo != 0 ){
        
        i = iNo %10 ; 
        if(i == 0 ) iCount ++ ; 
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
    iRet = CountZero(iValue) ; 
    if(iRet == 0) cout <<"There are no zeros "; 
    else {
        cout << "Number of zeros are : "<<iRet ; 
    }
    return EXIT_SUCCESS ;
}