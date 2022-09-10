#include<iostream>
using namespace std;

int FS(){
    int limit, firstNumber = 0, secondNumber = 1, nextNumber;
    cout<<"Enter the limit: ";
    cin>>limit;
    for(int i=0; i<limit; i++){
        cout<<firstNumber<<" ";
        nextNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }return -1;
}

int main(){
    FS();

    return 0;
}