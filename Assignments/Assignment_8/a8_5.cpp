/*
Enter number :2
20	18	16	14	12	10	8	6	4	2	
vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :7
70	63	56	49	42	35	28	21	14	7	
vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :8
80	72	64	56	48	40	32	24	16	
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void table(int iNo ){
    int i = 0; 

    for(i =10; i>= 1; i--){
        cout << i*iNo <<"\t" ;
    }
    cout<<"\n" ;

}
int main(){
    int iValue = 0 ; 

    cout <<"Enter number :" ;
    if(!(cin >> iValue )) {
        cerr << "Invalid input " ;
        return EXIT_FAILURE ; 
    }

    table(iValue) ;

    return EXIT_SUCCESS ; 
}