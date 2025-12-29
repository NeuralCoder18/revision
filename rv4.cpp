#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int remain = target - nums[i];
        if (mp.count(remain)) {
            return {mp[remain], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}