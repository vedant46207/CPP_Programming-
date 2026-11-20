/*
Enter number :5
5	#	4	#	3	#	2	#	1	#	
vedantbarne@Vedants-MacBook-Air-2 Assignment_22 % ./myexe
Enter number :4
4	#	3	#	2	#	1	#		
*/
#include<iostream>
#include<cstdlib>

using namespace std ;

void print(int iNo){
    int i = 0 ;
    for(i=iNo ; i>= 1 ; i--){
        cout<<i<<"\t";    
        cout<<"#\t";
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