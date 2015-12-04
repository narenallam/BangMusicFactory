//
//  Permutations.cpp
//  MyPrograms
//
//  Created by Narendra A on 30/10/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//



#include "Permutations.hpp"
#include <string>
void permuations(std::string& s, uint64_t startIdx, uint64_t endIdx){
    
    if ( startIdx == endIdx) {
        std::cout<< s << std::endl;
    }
    else{
        for(uint64_t i = startIdx; i <= endIdx; i++){
            std::swap(s[i], s[startIdx]);
            permuations(s, startIdx+1, endIdx);
            std::swap(s[i], s[startIdx]);
        }
    }
}

void Driver(std::string &s){
    uint64_t len = s.length();
    permuations(s, 0, len-1);
}