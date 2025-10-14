// Added a question in c++ for two pointers
// Pair with Given Sum

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 4, 7, 11, 15};
    int k = 15;

    int i = 0, j = a.size() - 1;
    bool found = false;

    while (i < j) {
        int sum = a[i] + a[j];
        if (sum == k) {
            cout << "Pair found: " << a[i] << " + " << a[j] << " = " << k;
            found = true;
            break;
        }
        else if (sum < k) i++;
        else j--;
    }

    if (!found) cout << "No pair found";
}
