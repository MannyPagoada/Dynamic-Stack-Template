//
// Created by manuelpagoada on 3/2/23.
//

#include "stack.h"


stack::stack(){
    top=-1;
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
bool stack::IsFull() const
{
  return (top ==  MAX_ITEMS-1);
}

ItemType stack::Top() {
    return 0;
}
