//
// Created by manuelpagoada on 3/2/23.
//
#include "iostream"
#include "stack.h"
using namespace std;
int main(){

    string input,output;

    ItemType item;
    stack newstack;

    cout << "Please enter a string for me to return backwards" << endl;
    cin >> input;


 //this will push the string on the stack
    for(int i=0;i<sizeof(input);i++){

        newstack.Push(input[i]);
    }





    return 0;
};