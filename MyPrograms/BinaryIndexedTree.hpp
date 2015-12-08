//
//  BinaryIndexedTree.hpp
//  MyPrograms
//
//  Created by Narendra A on 02/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#ifndef BinaryIndexedTree_hpp
#define BinaryIndexedTree_hpp

#include<iostream>
#include <vector>
using namespace std;
typedef long long int Integer;

class BITree{
public:
    BITree(Integer l, std::vector<Integer>& a): tree(l+1, 0),v(l, 0), len(static_cast<unsigned>(l)+1){
        for(int i =0; i<len-1; i++){
            v[i] = a[i];
        }
    }
    void buildBITree(){
        
        tree[0] = 0;
        Integer val;
        for(unsigned i = 1, j, k; i < len; i++){
            j = i;
            val = v[j-1];
            
            while (j<len) {
                tree[j] += val;
                k = j;
                j += j&(~k+1); // Get Next
            }
        }
        
    }
    void update(unsigned idx, Integer val){
        
        Integer diff = (val - v[idx]);
        unsigned i = idx+1;
        unsigned k;
        v[idx] = val;
        while (i < len-1) {
            tree[i]+= diff;
            k = i;
            i+= i&(~k+1);
        }
    }
    void cum_freq(int idx){
        unsigned i = idx+1;
        unsigned k;
        Integer sum = 0;
        if(i > len-1){
            cout << "Index out of bound!" << endl;
            return;
        }
        while (i > 0 ) {
            k = i;
            cout << "'" << i <<"'";
            sum+= tree[i];
            i-= i&(~k+1);
        }
        cout << "cumulative freq : " << sum << endl;
    }
    void printBIT(){
        cout << "Freq Table : " << endl;
        for (auto x : v){
            cout << x << " ";
        }
        cout << endl;
        cout << "CFQ Table : " << endl;
        for (auto x : tree){
            cout << x << " ";
        }
        cout << endl;
        
    }
    static void Driver();
private:
    unsigned len;
    
    std::vector<Integer> v;
    std::vector<Integer> tree;
};

/*{3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3}*/

#endif /* BinaryIndexedTree_hpp */
