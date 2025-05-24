#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=2*n-1; i++) {
        for (int j=1; j<=2*n-1; j++) {
            int value = min(min(i, j), min(2*n-i, 2*n-j));
            cout<<(n - value + 1)<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern(n);
    return 0;
}