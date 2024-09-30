#pragma once
#include <vector>

void BubbleSort(vector<int>& vect) {
    if (vect.size() < 2) {
        return;
    }

    for (int i = 0; i < vect.size() - 1; i++) {
        for (int j = 0; j < vect.size() - i - 1; j++) {
            if (vect[j] > vect[j + 1]) {
                swap(vect[j], vect[j + 1]);
            }
        }
    }
}