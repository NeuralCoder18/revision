#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    for (auto& pair : mp) {
        if (pair.second > n / 2) {
            return pair.first;
        }
    }
    return -1;
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

    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}