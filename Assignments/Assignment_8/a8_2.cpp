/*
Enter number :4
Four %                                                                                             vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :11
invalid input %                                                                                    vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :-6
Six% 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo ){
    if(iNo < 0) iNo = -iNo ; 
    if(iNo == 1 )cout << "One"; 
    else if (iNo == 2 )cout << "Two" ;
    else if (iNo == 3 )cout << "Three" ;
    else if (iNo == 4 )cout << "Four " ;
    else if (iNo == 5 )cout << "Five" ;
    else if (iNo == 6 )cout << "Six" ;
    else if (iNo == 7 )cout << "Seven" ;
    else if (iNo == 8 )cout << "Eight" ;
    else if (iNo == 9 )cout << "Nine" ;
    else cout <<"invalid input " ;
}
int main(){
    int iValue = 0 ; 

    cout <<"Enter number :" ;
    if(!(cin >> iValue )) {
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }

    print(iValue ) ;

    return EXIT_SUCCESS ; 
}