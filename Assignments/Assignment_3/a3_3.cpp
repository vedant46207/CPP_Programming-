/*

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :36
2	4	6	12	18	% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :42
2	6	14	%                                        vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo ){
    int i = 0  ; 
    for(i = 1 ; i<= iNo/2 ;i++ ){
        if(
            iNo % i == 0 
            &&
            i % 2 ==0
        ){
            cout << i << "\t" ;
        }
    }
}
int main(){
    int iValue = 0 ; 

    cout << "Enter a number :" ;
    if(!(cin >> iValue )){
        cerr << "Invalid input " ;
        return EXIT_FAILURE ;
    }
    print(iValue ) ;

    return EXIT_SUCCESS ; 
}

