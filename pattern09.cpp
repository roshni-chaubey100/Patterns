#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=n; i++) {
        for (int s=1; s<=n-i; s++) {
            cout<<"  ";
        }
        for (int j=i; j>=1; j--) {
            cout<<j<<" ";
        }
        for (int j=2; j<=i; j++) {
            cout<<j<<" ";
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