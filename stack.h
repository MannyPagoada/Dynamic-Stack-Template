//
// Created by manuelpagoada on 3/2/23.
//

#ifndef DYNAMIC_STACK_TEMPLATE_STACK_CPP_H
#define DYNAMIC_STACK_TEMPLATE_STACK_CPP_H


#include "ItemType.h"

class EmptyStack{};
class FullStack{};

class stack{
public:
    stack();
    bool IsFull() const;
    bool IsEmpty() const;
    void Push(ItemType item);
    void Pop();
    ItemType Top();

private:
    int top;
    ItemType  items[MAX_ITEMS];

};

#endif //DYNAMIC_STACK_TEMPLATE_STACK_CPP_H
