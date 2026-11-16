/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % g++ a3_1.cpp -o myexe
vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :7
2	4	6	8	10	12	14	%  

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :4
2	4	6	8	%     

vedantbarne@Vedants-MacBook-Air-2 Assignment_3 % ./myexe
Enter a number :9
2	4	6	8	10	12	14	16	18	% 
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 

void print(int iNo){
    int i = 0 ; 
    for( i =1 ; i<= iNo ; i++){
        cout << i*2<<"\t"; 
    }
}


int main(){
    int iValue = 0 ; 

    cout << "Enter a number :";
    if(!(cin>>iValue)){
        cerr << "invalid input ";
        return EXIT_FAILURE ; 
    }
    print (iValue ) ;
    
    return EXIT_SUCCESS ; 
}