/*
Enter number :8
2	4	6	8	10	12	14	16	
vedantbarne@Vedants-MacBook-Air-2 Assignment_22 % ./myexe
Enter number :5
2	4	6	8	10		
*/
#include<iostream>
#include<cstdlib>

using namespace std ;

void print(int iNo){
    int i = 0 ;
    for(i=1 ; i <= iNo ; i++){
        cout<<2*i<<"\t";    
    }
    cout<<"\n";
}
int main(){
    int iValue = 0 ; 
    
    cout << "Enter number :" ;
    if(!(cin >> iValue)){
        cerr <<"invalid input" ;
        return EXIT_FAILURE ;
    }
    print(iValue); 
    return EXIT_SUCCESS ;
}