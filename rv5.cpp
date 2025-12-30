#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int stockbuySell(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice) {
            minPrice = price;
        } else {
            maxProfit = max(maxProfit, price - minPrice);
        }
    }

    return maxProfit;
}

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << stockbuySell(prices) << endl;

    return 0;
}