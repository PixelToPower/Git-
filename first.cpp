#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    int a , b;
    cout<<"Enter a and b :";
    cin>>a;
    cin>>b;
    int sum;

    sum = a + b ;
    int multi = a * b;
    int sub = a - b;
    cout <<"a + b : "<<sum; 
    cout <<"a * b : "<<multi; 
    cout <<"a - b : "<<sub;
    

    return 0;
}