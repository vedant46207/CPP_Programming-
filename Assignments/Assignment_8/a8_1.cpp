/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :5
Small%    

vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :75
Medium%     

vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :101
Large % 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo ){
    if(iNo < 50) cout <<"Small" ; 
    else if(iNo >50 && iNo <100) cout<< "Medium" ;
    else if (iNo > 100 ) cout <<"Large " ;
    else cout << "invalid " ;
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