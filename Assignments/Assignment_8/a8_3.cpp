/*
Enter number :5
120	%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :4
24	%   

vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :7
5040	%  


*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
int fact(int iNo ){
    int i = 0; 
    int imul  =1 ; 
    for(i =1; i<= iNo; i++ ){
        imul = imul*i; 
    }
    return imul;
}
int main(){
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout <<"Enter number :" ;
    if(!(cin >> iValue )) {
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }

    iRet =  fact(iValue ) ;
    cout << iRet <<"\t"; 

    return EXIT_SUCCESS ; 
}