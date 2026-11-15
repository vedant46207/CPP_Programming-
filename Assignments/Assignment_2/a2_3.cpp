/*
Enter first number :12
Enter second number :5
12	12	12	12	12	
 %         
 
 vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % ./myexe
Enter first number :5
Enter second number :6
5	5	5	5	5	5	
 %    
 
 vedantbarne@Vedants-MacBook-Air-2 Assignment_2 % 
*/
#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo1 , int iNo2 ){
    int i = 0 ; 
    for(i =1 ; i <= iNo2 ; i++){
        cout << iNo1 << "\t"; 
    }
    cout << "\n " ; 
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout << "Enter first number :"; 
    if(!(cin >> iValue1)){
        cerr << "Invalid input "; 
        return EXIT_FAILURE ; 

    }
    cout << "Enter second number :";
    if(!(cin >> iValue2)){
        cerr<< "Invalid input";
        return  EXIT_FAILURE ;
    }
    print (iValue1, iValue2); 

    return EXIT_SUCCESS ; 
}