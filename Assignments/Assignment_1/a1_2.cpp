/*
Enter number  : 5
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
vedantbarne@Vedants-MacBook-Air-2 Assignment_1 % ./myexe
Enter number  : 9
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
Marvellous 
*/

#include <iostream>
#include <cstdlib>
using namespace std ; 
void pattern(int iNo1 ) {
    int i = 0 ; 
    for(i = 1; i<= iNo1 ; i++){
        cout << "Marvellous \n"; 

    }
}
int main(){
    int iValue = 0 ; 
    cout << "Enter number  : " ; 
    if(!(cin >> iValue )) {
        cerr<< "Invalid input " ;
        return EXIT_FAILURE ; 

    }

    pattern(iValue) ;
    return EXIT_SUCCESS ; 

}
