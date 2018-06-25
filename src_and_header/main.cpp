//
// Created by simon on 25.06.18.
//
#include <iostream>
#include "shellsort.h"
using namespace std;

int main() {
    int a[10] = {16, 2, 77, 40, 12071, 1};
    vector<int> vector1;
    vector1.push_back(2);
    vector1.push_back(1);

    sort(a, 10, vector1);
    for (int i = 0; i < 10; ++i) {
        cout<< a[i]<<endl;

    }
    return 0;
}

