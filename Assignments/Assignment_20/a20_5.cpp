/*
Enter number of rows :5
Enter number of columns :5
1	2	3	4	5	
1	2	 	 	5	
1	 	3	 	5	
1	 	 	4	5	
1	2	3	4	5	
vedantbarne@Vedants-MacBook-Air-2 Assignment_20 % ./myexe
Enter number of rows :6
Enter number of columns :6
1	2	3	4	5	6	
1	2	 	 	 	6	
1	 	3	 	 	6	
1	 	 	4	 	6	
1	 	 	 	5	6	
1	2	3	4	5	6
*/
#include<iostream>
#include<cstdlib>

using namespace std ;
void print(int iRow, int iCol) {
    int i =0 ; 
    int j = 0; 
    for(i =1 ; i<= iRow;i++){
        for(j=1 ; j<= iCol; j++){
            if(
                (i==1 || i== iRow)
                ||
                (j==1 || j== iCol)
                ||
                (i==j)
            )cout << j << "\t";
            else cout << " \t";
        }

        cout<<"\n";
    }
}
int main(){
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    cout <<"Enter number of rows :";
    if(!(cin >> iValue1)){
        cerr<<"Invalid input "; 
        return EXIT_FAILURE ;

    }
    cout <<"Enter number of columns :";
    if(!(cin >> iValue2)){
        cerr<<"Invalid input "; 
        return EXIT_FAILURE ;
    }

    print(iValue1, iValue2) ; 

    return EXIT_SUCCESS ;
}