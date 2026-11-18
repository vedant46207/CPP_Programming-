/*
Enter a number :45795
1
vedantbarne@Vedants-MacBook-Air-2 Assignment_13 % ./myexe
Enter a number :224806
6
vedantbarne@Vedants-MacBook-Air-2 Assignment_13 % ./myexe
Enter a number :34567
2
*/

#include<iostream>
#include<cstdlib>


using namespace std ; 

int print(int iNo){
    int i = 0 ;
    int iCount = 0 ;

    while(iNo != 0){
        i = iNo % 10 ; 
        if(i%2 == 0 ) iCount ++ ; 
        iNo = iNo /10 ; 
    }
    return iCount ;
}
int main(){
    int iValue = 0 ;
    int iRet = 0 ;

    cout <<"Enter a number :" ;
    if(!(cin >> iValue)){
        cerr <<"Invalid input"; 
        return EXIT_FAILURE ;
    }
    iRet = print(iValue) ;
    cout << iRet <<"\n"; 

    return EXIT_SUCCESS ;

}