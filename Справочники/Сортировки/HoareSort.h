#pragma once
#include <vector>

void HoareSort(vector<int>& vect, int beginIndex, int endIndex) {
    int pivot = vect[(beginIndex + endIndex) / 2];
    int leftIndex = beginIndex;
    int RightIndex = endIndex;

    while (leftIndex <= RightIndex) {
        while (vect[leftIndex] < pivot) {
            leftIndex++;
        }
        while (vect[RightIndex] > pivot) {
            RightIndex--;
        }
        if (leftIndex <= RightIndex) {
            swap(vect[leftIndex++], vect[RightIndex--]);
        }
    }
    if (beginIndex < RightIndex) {
        HoareSort(vect, beginIndex, RightIndex);
    }
    if (leftIndex < endIndex) {
        HoareSort(vect, leftIndex, endIndex);
    }
}

void HoareSort(vector<int>& vect) {
    if (vect.size() > 1) {
        HoareSort(vect, 0, vect.size() - 1);
    }
}