
#include <iostream>
#include <vector>
 
int main() {
    int n, k, ctr = 0;
 
    std::cin >> n >> k;
 
    std::vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            ctr++;
        }
    }
 
    std::cout << ctr;
 
    return 0;
}