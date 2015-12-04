//
//  Narendra_1.cpp
//  MyPrograms
//
//  Created by Narendra A on 06/11/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "Narendra_1.hpp"
#include <iostream>
void NextBiggerArray::nextBigger(void){
    int l = 10;
    int prev;
    for(int i = l-2 ; i >= 0; i--){
        prev = a[i+1];
        if(a[i] < prev){
            prev = a[i];
            a[i] = a[i+1];
        }
        else{
            
        }
    }
    
    for(int i=0; i<l;i++){
        std::cout << a[i] << " ";
    }
}

