//
//  KnapSack.hpp
//  MyPrograms
//
//  Created by Narendra A on 07/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#ifndef KnapSack_hpp
#define KnapSack_hpp

#include <vector>

class KnapSack{
public:
    KnapSack(int W, std::vector<int>&wt, std::vector<int>&val, int n):idx(n,false){
        this->wt = wt;
        this->val = val;
        this->W = W;
        this->n = n;
        
    }
    int solve(int, int);
    void print();

    static void Driver();
    
private:
    int W; /*Knapsack Capcity*/
    int n;
    std::vector<bool> idx;
    std::vector<int> wt;
    std::vector<int> val;
    
};
#endif /* KnapSack_hpp */
