//
//  nstairs.cpp
//  MyPrograms
//
//  Created by Narendra A on 15/11/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "nstairs.hpp"
int NStairs::countWays(int n){
    
    if(n < 0){
        return 0;
    }
    else if (n==0) {
        return 1;
    }
    else if (map[n] > -1) {
        return map[n];
    }
    else{
        map[n] = 0;
        for(int i=1; i<=this->step_count;i++)
            map[n] += countWays(n-i);

        return map[n];
    }

}