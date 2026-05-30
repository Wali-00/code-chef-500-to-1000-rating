#include <iostream>
#include <vector>
using namespace std;


void multiply(int x, vector<int> &result) {
    int carry = 0;

    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; i++) {
        multiply(i, result);
    }

  
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        factorial(n);
    }
    
}