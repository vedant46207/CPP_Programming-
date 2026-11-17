/*

Enter first number : 23
Enter second number : 30
30	29	28	27	26	25	24	23	
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : -10
Enter second number : 2
2	1	0	-1	-2	-3	-4	-5	-6	-7	-8	-9	-10
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : 5
Enter second number : 6
6	5	
*/

#include<iostream>
#include<cstdlib> 

using namespace std ; 
void print(int iNo1 ,int iNo2 ){
    int i = 0 ;

    if(iNo1 > iNo2){
        for(i =iNo1; i>= iNo2; i--){
            cout <<i<< "\t";
        }
    }else {
        for(i =iNo2; i>= iNo1; i--){
            cout <<i<< "\t";
        }
    }
    cout << "\n"; 
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ; 

    cout <<"Enter first number : " ;
    if(!(cin >> iValue1)){
        cerr <<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    cout <<"Enter second number : " ;
    if(!(cin >> iValue2)){
        cerr <<"Invalid Input" ;
        return EXIT_FAILURE ;
    }
    print (iValue1, iValue2) ; 
    return EXIT_SUCCESS ;
}