#include<iostream>
using namespace std;

void input( int a[] , int n){

    cout<<"enter "<<n<<"number : "<<endl;
    for(int i = 0; i<n ; i++){
        cin >> a[i];
    }

}

void display(int a[] , int n){
    cout<<"the numbers are : "<<endl;

    for(int i = 0 ; i < n ; i++){
        cout << a[i] << endl;
    }
}

int main(){
    int n;
    int a[100];

    cout<<"how many number do you want to enter ? ";
    cin >>n;

    input(a , n);

    display(a , n);

    return 0;
}