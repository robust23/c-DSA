#include<iostream>
using namespace std;

int main(){
    char userinput;
    cout<<"Enter the value" <<endl;
    cin >> userinput;

    if(userinput >= 'a' && userinput <= 'z'){
        cout<<"It is lowercase" <<endl;
    }
    if(userinput >= 'A' && userinput <= 'Z'){
        cout<<"It is uppercase" <<endl;
    }
    if(userinput >= '0' && userinput <= '9'){
        cout<< "It is numeric" <<endl;
    }
}