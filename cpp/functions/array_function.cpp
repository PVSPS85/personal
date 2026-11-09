// #include<iostream>
// using namespace std ;

// int sum(int x , int y , int result ){
//     result = x + y;
//     return result ;
    
// }

// int main(){
//     int a , b , result;
//     cout<<"enter the first number : "<<endl;
//     cin>> a;
//     cout<<"enter the secound number : "<<endl;
//     cin>> b;
//     cout<<"the result of the number is " << " " <<sum(a,b,result)<<endl;
//     return 0;
// }



#include <iostream>
using namespace std;

void function(int a[], int n) {

    for (int i = 0; i < n; i++) {
        cout << "Number: " << a[i] << endl;
    }
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];   // fixed-size array

    if (n > 100 || n <= 0) {
        cout << "Invalid number of elements" << endl;
        return 0;
    }

    cout << "Enter " << n << " numbers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    function(a, n);

    return 0;
}