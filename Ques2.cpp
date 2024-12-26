#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for (int& num : nums) {
        num *= num;
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);
    for (int val : result) {
        cout << val << " ";
    }
    // Output: 0 1 9 16 100
    return 0;
}
