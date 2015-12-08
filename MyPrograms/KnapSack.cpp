//
//  KnapSack.cpp
//  MyPrograms
//
//  Created by Narendra A on 07/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "KnapSack.hpp"
#include <algorithm>
#include <iostream>

int KnapSack::solve(int W, int n){
    if (W == 0 or n == 0) {
        return 0;
    }
    if (wt[n-1] > W) {
        return solve(W, n-1);
    }
    int val_with_wt = val[n-1] + solve(W-wt[n-1], n-1);
    int val_without_wt = solve(W, n-1);
    if (val_with_wt > val_without_wt) {
        idx[n-1] = true;
        return val_with_wt;
    }
    else{
        idx[n-1] = false;
    return val_without_wt;
    }
}

void KnapSack::print(){
    std::cout << "Values Considered = " ;
    int i = 0;
    for(auto x: idx){
        if (x) {
            std::cout << i << " ";
        }
        i++;
    }
    std::cout << std::endl;
}

void KnapSack::Driver(){
    std::vector<int>v_wt{20, 10, 15, 30};
    std::vector<int>v_val{100, 130, 90, 110};
    KnapSack kp(50, v_wt, v_val, 3);
    std::cout << "Max value fro weight 50 = " << kp.solve(50, 3) << std::endl;
    kp.print();
}