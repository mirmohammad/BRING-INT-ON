//
//  03-vector.cpp
//  Vectors in C++ and how much we love them(!)
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library
#include <vector>  // Life saver in C++

using namespace std;

template <class T>
void printVectorProperties(const vector<T> &v) {
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;
}

int main(int argc, const char * argv[]) {

    // empty int vector vi with zero capacity
    vector<int> vi;
    // float vector vf with a capacity and size of 10
    vector<float> vf(10);

    // check whether a vector is empty or not
    // note that a vector may have a non-zero capacity with a size of zero
    if(vi.empty())
        cout << "Vector is empty!" << endl;

    // print properties before adding elements
    cout << "Properties of vi before adding values: " << endl;
    printVectorProperties(vi);
    cout << "Properties of vf: " << endl;
    printVectorProperties(vf);

    for(int i = 0; i < 5; i++)
        vi.push_back(i);

    // print properties after adding elements
    cout << "Properties of vi after adding values: " << endl;
    printVectorProperties(vi);

    // resize the vector vf (removes last elements)
    vf.resize(5);

    // print properties after resizing
    cout << "Properties of vf after resizing: " << endl;
    printVectorProperties(vf);

    // change the capacity to size (C++ 11 only)
    vf.shrink_to_fit();

    // print properties after resizing
    cout << "Properties of vf after shrinking: " << endl;
    printVectorProperties(vf);

    // access and change elements using [] operator
    for(int i = 0; i < vf.size(); i++)
        vf[i] = (float)(i * 2);

    // print elements of vector vi using iterator
    cout << "Elements of vi: " << endl;
    for(auto i = vi.begin(); i != vi.end(); i++)
        cout << *i << endl;

    // print elements of vector vf using index number
    cout << "Elements of vf: " << endl;
    for(int i = 0; i < vf.size(); i++)
        cout << vf.at(i) << endl;

    // read more about vectors below:
    // http://www.cplusplus.com/reference/vector/vector/
    // insert and erase functions are important(!)

    return 0;
}

