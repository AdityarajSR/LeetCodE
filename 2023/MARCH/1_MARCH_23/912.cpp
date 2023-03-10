#include <bits/stdc++.h>
using namespace std;

class Solution {
    void merge(vector<int> &arr, int left, int mid, int right, vector<int> &temp) {
        int start1 = left;
        int start2 = mid + 1;
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        for (int i = 0; i < n1; i++) {
            temp[start1 + i] = arr[start1 + i];
        }
        for (int i = 0; i < n2; i++) {
            temp[start2 + i] = arr[start2 + i];
        }

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (temp[start1 + i] <= temp[start2 + j]) {
                arr[k] = temp[start1 + i];
                i += 1;
            } else {
                arr[k] = temp[start2 + j];
                j += 1;
            }
            k += 1;
        }

        while (i < n1) {
            arr[k] = temp[start1 + i];
            i += 1;
            k += 1;
        }
        while (j < n2) {
            arr[k] = temp[start2 + j];
            j += 1;
            k += 1;
        }
    }

    void mergeSort(vector<int> &arr, int left, int right, vector<int> &temp) {
        if (left >= right) {
            return;
        }
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid, temp);
        mergeSort(arr, mid + 1, right, temp);
        merge(arr, left, mid, right, temp);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temporaryArray(nums.size());
        mergeSort(nums, 0, nums.size() - 1, temporaryArray);
        return nums;
    }
};

int main(){
    
    return 0;
}