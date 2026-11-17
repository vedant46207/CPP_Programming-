/*
Enter number :2
2	4	6	8	10	12	14	16	18	20	
vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :4
4	8	12	16	20	24	28	32	36	40	
vedantbarne@Vedants-MacBook-Air-2 Assignment_8 % ./myexe
Enter number :7
7	14	21	28	35	42	49	56	63	70	


*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void table(int iNo ){
    int i = 0; 

    for(i =1; i<= 10; i++ ){
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