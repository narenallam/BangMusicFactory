//
//  nstairs.hpp
//  MyPrograms
//
//  Created by Narendra A on 15/11/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#ifndef nstairs_hpp
#define nstairs_hpp

#include <iostream>
#include <vector>

class NStairs{
private:
    int countWays(int);
    int stairs;
    int step_count;
    int *map;
    
public:

    void Driver(int n, int m){
        this->map = new int [n+1];
        //initializing map with default value -1
        for(int i = 0; i <= n; i++){
            this->map[i] = -1;
        }
        this->step_count = m > n ? n : m;
        this->stairs = n;
        std::cout<< "No of ways to reach " << this->stairs<<" stairs is " <<countWays(this->stairs) <<std::endl;
    }
    
};

#endif /* nstairs_hpp */
