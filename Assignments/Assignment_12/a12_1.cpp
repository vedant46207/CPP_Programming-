/*
Enter number :4567
7
6
5
4
vedantbarne@Vedants-MacBook-Air-2 Assignment_12 % ./myexe
Enter number :46967
7
6
9
6
4
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void digits(int iNo){
    int i = 0 ; 
    while(iNo != 0 ){
        i = iNo %10 ; 
        iNo = iNo /10 ; 
        cout<<i<<"\n"; 
    }
}
int main(){
    int iValue = 0 ; 

    cout << "Enter number :" ;
    if(!(cin >> iValue)){
        cout<<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    digits(iValue) ; 
    return EXIT_SUCCESS ;
}