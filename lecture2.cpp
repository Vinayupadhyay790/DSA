#include<iostream>
using namespace std;

int main(){

    // cout << "I am going to be a coder in few time";
    // cout << "\nHarman is good human being\n";

    // int a=10;
    // cout << a << endl;

    // bool b=true;
    // cout << b << endl;

    // float c = 1.23;
    // cout << c << endl;

    // cout << sizeof(a) << endl;
    // cout << sizeof(b) << endl;
    // cout << sizeof(c) << endl;
    
    // A program to check greater of two numbers
    
    // int a,b;
    // cout << "Print the value of a" <<endl;
    // cin >> a;
    // cout << "print the value of b "<< endl;
    // cin >> b;
    // if(a>b){
    //     cout << "A is greater than B" <<endl;
    // }
    // else{
    //     cout << "B is greater than A" <<endl;
    // }


    //A program to check weather a given number entered is positive negative or zero
    
    int a;
    cout << "Enter the value of A" << endl;
    cin >> a;
    if(a>0){
        cout << "A  is a positive number" << endl;
    }
    else{
        if(a<0){
            cout << "A is negative number" << endl;
        }
        else{
            cout << "A is zero" <<endl;
        }
        
    }

}