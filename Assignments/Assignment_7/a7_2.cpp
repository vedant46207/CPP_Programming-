/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe              
Enter a number :4
1	2	3	4	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :6
1	2	3	4	5	6	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :7
1	2	3	4	5	6	7	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iNo ){
    int i = 0 ; 
    for(i =1 ; i<= iNo ; i++){
        cout << i<<"\t";
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