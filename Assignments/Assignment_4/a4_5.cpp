/*
Enter a number :
45
Divisible by 5 
vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
46
Not Divisible by 5 
*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

bool divBy5(int iNo){
    return (iNo %5 == 0) ;
}

int main(){
    int iValue = 0 ; 
    bool bRet = false ; 

    cout << "Enter a number :\n";
    if(!(cin >> iValue )){
        cout << "Invalid input " ; 
        return EXIT_FAILURE ;

    }
    bRet = divBy5 (iValue) ;
    if(bRet == true )cout << "Divisible by 5 \n"; 
    else cout <<"Not    Divisible by 5 \n"; 

    return EXIT_SUCCESS ;

}