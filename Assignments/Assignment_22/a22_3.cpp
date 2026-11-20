/*
Enter number :5
1	*	2	*	3	*	4	*	5	*	
vedantbarne@Vedants-MacBook-Air-2 Assignment_22 % ./myexe
Enter number :2
1	*	2	*			
*/
#include<iostream>
#include<cstdlib>

using namespace std ;

void print(int iNo){
    int i = 0 ;
    for(i=1 ; i <= iNo ; i++){
        cout<<i<<"\t";    
        cout<<"*\t";
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