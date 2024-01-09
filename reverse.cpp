#include<iostream>

using namespace std ;


void reverse ( int crr[] , int size ) {

    int start = 0 ;
    int end = size-1 ;

    while (start<=end) 
    {
        swap(crr[start], crr[end] ) ;

        start++ ;
        end-- ;
    }
    
}



void printarray( int crr[] , int n ) {

    for (int  i = 0; i < n ; i++)
    {
        cout<< crr[i] << " " ;
    }
    cout<<endl ;
}


int main(){ ;

int arr[6] = { 12  , 54 , 27 , -62, 77 , -32 } ;
int brr[5] = { 543 , 42 , 12 , 44 , -96} ;

reverse( arr , 6) ;
reverse( brr , 5) ;

printarray( arr , 6 ) ;
printarray( brr , 5 ) ;

return 0 ;
}