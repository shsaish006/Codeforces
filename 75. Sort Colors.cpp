#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = (int)nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol;
    sol.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
