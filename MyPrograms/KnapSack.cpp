//
//  KnapSack.cpp
//  MyPrograms
//
//  Created by Narendra A on 07/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "KnapSack.hpp"
#include <algorithm>

int KnapSack::solve(int W, int n){
    if (W == 0 or n == 0) {
        return 0;
    }
    if (wt[n-1] > W) {
        return solve(W, n-1);
    }        
    return std::max(val[n-1] + solve(W-wt[n-2], n-1), solve(W, n-1));
}

void KnapSack::Driver(){
    this->solve(this->W, this->n)
}