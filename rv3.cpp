#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> rearrangeBySign(vector<int>& A) {
    int n = A.size();
    vector<int> ans(n, 0);

    int posIndex = 0, negIndex = 1;

    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            ans[negIndex] = A[i];
            negIndex += 2;
        } else {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> result = rearrangeBySign(A);

    cout << "Rearranged array:\n";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}