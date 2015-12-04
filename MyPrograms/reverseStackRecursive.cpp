//
//  reverseStackRecursive.cpp
//  MyPrograms
//
//  Created by Narendra A on 02/11/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "reverseStackRecursive.hpp"

void ReverseStack::reverseStack(void){
    if(!this->stk.empty()){
        uint64_t tmp = stk.top();
        stk.pop();
        this->reverseStack();
        this->insertAtBottom(tmp);
    }
}
void ReverseStack::insertAtBottom(uint64_t x){
    if(this->stk.empty()){
        this->stk.push(x);
    }
    else{
        uint64_t tmp = this->stk.top();
        this->stk.pop();
        this->insertAtBottom(x);
        this->stk.push(tmp);
    }
}
void ReverseStack::Driver(){
    this->stk.push(4);
    this->stk.push(3);
    this->stk.push(2);
    this->stk.push(1);
    
    std::cout << " Stack Before reversal : " << std::endl;
    while(!stk.empty()){
        std::cout<< this->stk.top() << " " << std::endl;
        stk.pop();
    }


    this->reverseStack();
    std::cout << " Stack After reversal : " << std::endl;
    while(!stk.empty()){
        std::cout<< this->stk.top() << " " << std::endl;
        stk.pop();
    }
}