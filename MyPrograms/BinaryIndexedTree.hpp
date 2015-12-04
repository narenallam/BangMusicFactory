//
//  BinaryIndexedTree.hpp
//  MyPrograms
//
//  Created by Narendra A on 02/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#ifndef BinaryIndexedTree_hpp
#define BinaryIndexedTree_hpp

#include <stdio.h>
#include <vector>


typedef int64_t Integer;

class BITree{
public:
    BITree(Integer l, std::vector<Integer>& a): cfq(l+1, 0),v(l, 0), len(l+1){
        for(auto x: a){
            v.push_back(x);
        }
    }
    void buildBITree(){
        
        cfq[0] = 0;
        for(int i = 1, j; i < len-1; i++){
            j = i;
            while (j<len) {
                cfq[j] += v[j];
                j += (~j+1); // Get Next
            }
        }
        
    }
    void update(int idx, Integer val){
        
        Integer diff = (val - v[idx]);
        int i = idx+1;
        while (i < len) {
            cfq[i]+= diff;
            i+= (~i+1);
        }
    }
private:
    Integer len;
    
    std::vector<Integer> v;
    std::vector<Integer> cfq;
};

/*{3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3}*/

#endif /* BinaryIndexedTree_hpp */
