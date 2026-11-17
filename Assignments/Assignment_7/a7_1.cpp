/*
Enter a number :4
$	*	$	*	$	*	$	*	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :6
$	*	$	*	$	*	$	*	$	*	$	*	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :2
$	*	$	*	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iNo ){
    int i = 0 ; 
    for(i =1 ; i<= iNo ; i++){
        cout << "$\t"<<"*\t";
    }
    cout <<"\n" ; 
}
int main(){
    int iValue = 0 ; 

    cout << "Enter a number :" ;
    if(!(cin >> iValue)){
        cerr <<"Invalid input " ;
        return EXIT_FAILURE ; 

    }

    print(iValue) ;

    return EXIT_SUCCESS ;
}