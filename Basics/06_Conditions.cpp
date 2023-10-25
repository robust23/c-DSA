#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>> a >> b;
    //if we use cin.get() it will get the ASCII value 
    //it will register enter/tab/space ASCII value so remember that
cout << "Value of a :" <<a<<endl;
cout << "Value of b :" <<b<<endl;
       if(a>b){
           cout << "A is bigger" <<endl;
       }
       if(b>a){
           cout << "B is bigger" <<endl;
       }
       if(a==b){
           cout << "Both are equal" <<endl;
       }
       
}