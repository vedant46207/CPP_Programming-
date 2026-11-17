/*

Enter a number :4
1	3	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :18
1	3	5	7	9	11	13	15	17	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 % ./myexe
Enter a number :15
1	3	5	7	9	11	13	15	
vedantbarne@Vedants-MacBook-Air-2 Assignment_7 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iNo ){
    int i = 0 ;

    for(i =1 ; i<= iNo ; i++){
        if(i%2 != 0) cout <<i<<"\t" ;
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