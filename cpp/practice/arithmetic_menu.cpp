# include <iostream>
using namespace std;
int main(){
    int x , y , result , choice ;
    cout<<"enter your choice : "<<endl;
    cout<<"1.addition \n 2. subtraction \n 3.multiplication \n 4.division \n 5.modulus \n 6.logarithmic \n 7.maximum number \n 8.minimum number \n 9power \n";
    cin >> choice;
    
    if (choice ==1 ){
        cout<<"enter the first number : "<<endl;
        cin >> x;
        cout<<"enter the secound number : "<<endl;
        cin >> y;
        result = x+y ;
        cout<<"the result of the addition is : "<<result<<endl;
    }
    else if (choice == 2 ){
        cout<<"enter the first number : "<<endl;
        cin>> x;
        cout<<"enter the secounf number :"<<endl; 
        cin>> y ;
        result = x -y ;
        cout<<"the number after subtraction is "<<result<<endl;
    }
    else if(choice == 3){
        cout<<"enter the first number : "<<endl;
        cin>>x;
        cout<<"enter the secound number "<<endl;
        cin>>y;
        result = x * y ;
        cout<<"the number after multiplecation is : "<<result<<endl;
    }
    else if(choice == 4){
        cout<<"enter the first number : "<<endl;
        cin>>x;
        cout<<"enter the secound number :"<<endl;
        cin>>y;
        if(y == 0){
            cout<<"not possiable"<<endl;

        }else{
            result = x/y;
        }
        cout<<"the number after division is : "<<result<<endl;


    }
    else if(choice == 5){
        cout<<"enter the first number "<<endl;
        cin>>x;
        cout<<"enter the secoud number "<<endl;
        cin>>y;
        if(y == 0){
            cout<<"not possiable"<<endl;

        }else{
            result = x%y;
        }
        cout<<"the number after  modulus is : "<<result<<endl;
    }
    else if(choice == 6){
        cout<<"eneter the number you want to find log "<<endl;
        cin>>x;
        result = log(x);
        cout<<"the number after log is "<<result<<endl;

    }
    else if (choice == 7){
        cout<<"enter the first number "<<endl;
        cin>>x;
        cout<<"enter the secoud number "<<endl;
        cin>>y;
        result = max(x,y);
        cout<<"the maximum number is : "<<result<<endl;
    }
    else if(choice == 8 ){
        cout<<"enter the first number "<<endl;
        cin>>x;
        cout<<"enter the secoud number "<<endl;
        cin>>y;
        result = min(x,y);
        cout<<"the mimimum number is : "<<result<<endl;
    }
    else if(choice == 9){
        cout<<"enter the base number "<<endl;
        cin>>x;
        cout<<"enter the power number "<<endl;
        cin>>y;
        result = pow(x,y);
        cout<<"the base number is " <<x<<"the power number is : "<<y<<"the result of the number is : "<<result<<endl;
    }
    else{
        cout<<"invalid choice";
    }


    return 0 ;
}