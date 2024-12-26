#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxChunksToSorted(vector<int>& arr) {
    int n = arr.size();
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int chunks = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += arr[i];
        sum2 += sortedArr[i];
        if (sum1 == sum2) {
            chunks++;
        }
    }
    return chunks;
}

int main() {
    vector<int> arr = {2, 1, 3, 4, 4};
    cout << "Max Chunks: " << maxChunksToSorted(arr) << endl; // Output: 4
    return 0;
}
