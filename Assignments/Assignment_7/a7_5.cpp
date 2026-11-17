/*
Enter a number :4
4	8	12	16	20	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :7
7	14	21	28	35	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :3
3	6	9	12	15	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo ){
    int i = 0 ; 
    for(i =1 ; i<= 5; i++){
        cout << i*iNo << "\t" ;
    }
    cout <<"\n" ;
}
int main(){
    int iValue = 0 ; 

    cout << "Enter a number :" ; 
    if(!(cin >> iValue )) {
        cerr<< "Invalid Input " ;
        return EXIT_FAILURE ; 
    }

    print(iValue) ; 

    return EXIT_SUCCESS ; 

}