#include <iostream>

using namespace std;

int main()
{
    cout<<"\a********************\ncalculator\n********************\n";
    cout<<"enter the first number"<<endl;
    long long first_number,second_number,addition,subtraction,multiplication,division,mod;
    char operation;
    cin>>first_number;
    cout<<"enter the second number"<<endl;
    cin>>second_number;
    cout<<"enter the operation(+,-,*,/,%)"<<endl;
    cin>>operation;
    addition = first_number + second_number ;
    subtraction = first_number - second_number ;
    multiplication = first_number * second_number ;
    division = first_number/ second_number ;
    mod = first_number % second_number ;
    if(operation=='+'){
        cout<<addition;
    }
    else if(operation=='-'){
        cout<<subtraction;
    }
    else if(operation=='*'){
        cout<<multiplication;
    }
    else if(operation=='/'){
        cout<<division;
    }
    else if(operation=='%'){
        cout<<mod;
    }
    else{
        cout<<"enter a valid operation";
    }
    return 0;

}
