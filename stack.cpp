//
// Created by manuelpagoada on 3/2/23.
//

#include "stack.h"


stack::stack(int max){
    maxStack = max;
    top = -1;
    items = new ItemType[maxStack];
}

stack::stack(){
    maxStack = 500;
    top = -1;
    items = new ItemType[maxStack];
}
bool stack::IsEmpty() const{
    return (top == -1);
}
void stack::Push(ItemType newItem){
    if (IsFull())
        throw FullStack();
    top++;
    items[top] = newItem;
}
void stack::Pop(){
    if( IsEmpty() )
        throw EmptyStack();
    top--;
}