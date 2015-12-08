//
//  BinaryIndexedTree.cpp
//  MyPrograms
//
//  Created by Narendra A on 02/12/15.
//  Copyright © 2015 Narendra A. All rights reserved.
//

#include "BinaryIndexedTree.hpp"

void BITree::Driver(){
    vector<Integer> v{3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3};
    BITree bit(v.size(), v);
    bit.buildBITree();
    cout << "Before : " << endl;
    bit.printBIT();
    bit.cum_freq(3);
    cout << "After : "  << endl;
    bit.update(3,9);
    bit.printBIT();
    bit.cum_freq(3);
}