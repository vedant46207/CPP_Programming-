/*
Enter first number : 23
Enter second number : 35
377
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : 22
Enter second number : 30
234
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : 23
Enter second number : 30
212
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : -10
Enter second number : 2
-52
*/

#include<iostream>
#include<cstdlib> 

using namespace std ; 
void print(int iNo1 ,int iNo2 ){
    int i = 0 ;
    int iSum = 0 ; 

    if(iNo1 > iNo2){
        for(i =iNo2; i<= iNo1; i++){
            iSum = iSum + i ; 
        }
    }else {
        for(i =iNo1; i<= iNo2; i++){
            iSum = iSum + i ; 
        }
    }
    cout <<iSum ; 
    cout << "\n"; 
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ; 

    cout <<"Enter first number : " ;
    if(!(cin >> iValue1)){
        cerr <<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    cout <<"Enter second number : " ;
    if(!(cin >> iValue2)){
        cerr <<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    print (iValue1, iValue2) ; 
    return EXIT_SUCCESS ;
}