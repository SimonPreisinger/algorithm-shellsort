//
// Created by simon on 25.06.18.
//

#include "shellsort.h"


void sort(int *a, int n, vector<int> incs) {
    for (auto h : incs) {
        for (int i = 0; i < n; ++i) {
            int j = i;
            int t = a[i];
            bool continue_ = true;
            while (a[j - h] > t && continue_) {
                a[j] = a[j - h];
                j = j - h;
                continue_ = j > h;
            }
            a[j] = t;
        }
    }
}
