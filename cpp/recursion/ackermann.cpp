#include <iostream>
using namespace std;
    

int acker(int m , int n)
{
    if(m == 0){
        return n + 1;
    }
    else if( m > 0 && n ==0 ){
        return acker(m-1,1);

    }
    else
    {
        return acker(m - 1,acker(m,n-1));
    }
    
}

int main(){
    int m, n;
    cout<<"enter the two numbers"<<endl;
    cin>>m >>n;
    cout<<"the number after using acker man function we get is "<<acker(m,n)<<endl;
    return 0;
}

/* ackermann function 
ia an classic example of deaply recusion function 


when A(m,n)

        rule says that 
        A(m,n) = n+1 when m = 0
               = A(m-1 , 1)  when M > 0 and n ==0 
               = A(m-1 , A(m , n-1)) when M > 0 and n > 0

*/