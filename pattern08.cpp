#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=n; i++) {
        for (int s=1; s<=i-1; s++) {
            cout<<" ";
        }
        for (int j=1; j<=n-i+1; j++) {
            cout<<"* ";
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