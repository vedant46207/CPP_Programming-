/*
Enter a number :12
50
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :10
37	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int print(int iNo){
    int i = 0 ;
    int iSum = 0 ;

    for(i=1 ; i <= iNo; i++ ){
        if(iNo %    i !=0){
            iSum = iSum + i ; 
        }
    }
    return iSum ; 

}
int main(){
    int iValue = 0 ;
    int iRet = 0 ;

    cout << "Enter a number :" ;
    if(!(cin >> iValue )) {
        cerr << "invalid input"; 
        return EXIT_FAILURE ;
    }
    iRet = print(iValue) ;
    cout << iRet << "\n" ;
    return EXIT_SUCCESS ;
}