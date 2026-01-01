#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return true;

    int rp = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            rp++;
            if (rp > 1) return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << (check(nums) ? "true" : "false") << endl;

    return 0;
}