/*
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe               
Enter a number :12
5	7	8	9	10	11	
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :13
2	3	4	5	6	7	8	9	10	11	12	
vedantbarne@Vedants-MacBook-Air-2 Assignment_14 % ./myexe
Enter a number :16
3	5	6	7	9	10	11	12	13	14	15		
*/

#include<iostream>
#include<cstdlib>

using namespace std ; 
void print(int iNo){
    int i = 0 ;

    for(i=1 ; i <= iNo; i++ ){
        if(iNo %    i !=0){
            cout << i<<"\t";
        }
    }
    cout << "\n" ;

}
int main(){
    int iValue = 0 ;

    cout << "Enter a number :" ;
    if(!(cin >> iValue )) {
        cerr << "invalid input"; 
        return EXIT_FAILURE ;
    }
    print(iValue) ;
    return EXIT_SUCCESS ;
}