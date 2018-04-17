//
//  Sort.cpp
//
//  Created by Rohit Navalgund on 17/04/18.
//  Copyright © 2018 Rohit Navalgund. All rights reserved.
//

// Uses C++'s inbuilt sort() function to sort the unsorted array. This is a long integer (8bytes).
#include <iostream>
using namespace std;

class Randomiser {
public:
    void Ascending() {
        int IntArray[] = {1, 5, 2, 4, 0, 10, 3, 8, 9, 6, 7};
        int n = sizeof(IntArray)/sizeof(IntArray[0]);
        
        sort(IntArray, IntArray + n);
        cout<<"Elements after sorting in ascending Order: \n";
        for (int i = 0; i < n; ++i) {
            cout <<IntArray[i]<<" ";
        }
        cout<<"\n";
    }
    
    void Descending() {
        int IntArray[] = {1, 5, 2, 4, 0, 10, 3, 8, 9, 6, 7};
        int n = sizeof(IntArray)/sizeof(IntArray[0]);
        
        sort(IntArray, IntArray + n, greater<int>());
        cout<<"Elements after sorting in Descending Order: \n";
        for (int i = 0; i < n; ++i) {
            cout <<IntArray[i]<<" ";
        }
        cout<<"\n";
    }
};

int main() {
    Randomiser r;
    r.Ascending();
    r.Descending();
    return 0;
}
