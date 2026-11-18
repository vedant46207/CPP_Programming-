/*
Enter a number :12
6	4	3	2	1	
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :13
1	
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :20
10	5	4	2	1	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo){
    int i = 0 ;

    for(i=iNo/2 ; i>= 1 ; i-- ){
        if(iNo %    i ==0){
            cout << i<<"\t";
        }
    }
    cout << "\n" ;

}
int main(){
    int iValue = 0 ;

    cout << "Enter a number :" ;
    if(!(cin >> iValue )) {
        cerr << "invalid input"; 
        return EXIT_FAILURE ;
    }
    print(iValue) ;
    return EXIT_SUCCESS ;
}