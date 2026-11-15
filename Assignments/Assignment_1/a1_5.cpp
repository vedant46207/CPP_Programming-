/*
Enter a number ;5
*
*
*
*
*
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a number ;2
*
*
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter a number ;7
*
*
*
*
*
*
*
*/

#include<iostream>
#include<cstdlib>
using namespace std ; 

void pattern(int iNo ){
    int i = 0 ; 
    for(i =1 ; i <= iNo ; i++){
        cout << "*\n"; 
    }
}
int main(){

    int iValue = 0 ; 
    cout << "Enter a number ;" ;
    if(!(cin >> iValue )) 
    {
        cerr << "Invalid input "; 
        return EXIT_FAILURE ; 

    }

    pattern (iValue ) ;


    return EXIT_SUCCESS ; 

}