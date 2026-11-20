/*
Enter number :5
A	B	C	D	E	
vedantbarne@Vedants-MacBook-Air-2 Assignment_22 % ./myexe
Enter number :3
A	B	C	
*/
#include<iostream>
#include<cstdlib>

using namespace std ;

void print(int iNo){
    int i = 0 ;
    char ch = '\0';
    for(i=1 , ch = 'A'; i<= iNo ; i++,ch++){
        cout<<ch <<"\t"; 
        
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