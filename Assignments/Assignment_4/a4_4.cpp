/*
Enter a number :
4
not eligible to vote 
vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
19
eligible to vote 
 %    
 
 vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
18
eligible to vote 
 %   
 
 vedantbarne@Vedants-MacBook-Air-2 Assignment_4 % ./myexe
Enter a number :
&
invalid input  


*/
#include<iostream>
#include<cstdlib>
using namespace std ; 

void print(int iNo){
    if(iNo >= 18) cout << "eligible to vote \n "; 
    else if(iNo <0) cout << "Invalid age \n" ;
    else cout << "not eligible to vote \n" ; 
}

int main(){
    int iValue = 0 ; 

    cout << "Enter a number :\n";
    if(!(cin >> iValue )){
        cout << "invalid input  \n" ; 
        return EXIT_FAILURE ;

    }
    print (iValue) ;
    return EXIT_SUCCESS ;

}