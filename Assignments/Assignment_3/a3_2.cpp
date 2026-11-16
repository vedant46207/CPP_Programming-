/*

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :4
1	2	%                                                vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :12
1	2	3	4	6	% 

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :19
1	%      

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :18
1	2	3	6	9	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo ){
    int i = 0  ; 
    for(i = 1 ; i<= iNo/2 ;i++ ){
        if(iNo % i == 0){
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

