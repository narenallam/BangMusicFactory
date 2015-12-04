//
//  reverseStackRecursive.hpp
//  MyPrograms
//
//  Created by Narendra A on 02/11/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#ifndef reverseStackRecursive_hpp
#define reverseStackRecursive_hpp

#include <stdio.h>
#include <iostream>
#include <stack>
class ReverseStack{
private:
    std::stack<uint64_t> stk;
public:
    void reverseStack(void);
    void insertAtBottom(uint64_t);
    void Driver(void);
};


#endif /* reverseStackRecursive_hpp */
