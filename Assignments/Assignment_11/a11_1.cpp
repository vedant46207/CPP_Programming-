/*

Enter first number : 23
Enter second number : 35
23	24	25	26	27	28	29	30	31	32	33	34	35
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : 2
Enter second number : 7
2	3	4	5	6	7	
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % ./myexe
Enter first number : 7
Enter second number : 2
2	3	4	5	6	7	
vedantbarne@Vedants-MacBook-Air-2 Assignment_11 % 
*/

#include<iostream>
#include<cstdlib> 

using namespace std ; 
void print(int iNo1 ,int iNo2 ){
    int i = 0 ;

    if(iNo1 > iNo2){
        for(i =iNo2; i<= iNo1; i++){
            cout <<i<< "\t";
        }
    }else {
        for(i =iNo1; i<= iNo2; i++){
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