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
    int solve(int, int);
    void Driver();
    
private:
    int W; /*Knapsack Capcity*/
    int n;
    std::vector<int> wt;
    std::vector<int> val;
    
};
#endif /* KnapSack_hpp */
