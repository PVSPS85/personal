#include <iostream>
#include <string>
using namespace std;

int main(){
struct{
    int id;
    string name;
}student1 , student2 ;

student1.id = 1234 ;
student1.name = "pranav"; 

student2.id = 12345 ;
student2.name = "varshith";

cout<<student1.id<<" || " << " the name is "<<student1.name <<endl ;
cout<<student2.id<<"|| " << " the name is "<<student2.name <<endl;
}

