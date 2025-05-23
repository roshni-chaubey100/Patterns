#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=n; i++) {
        for (int s=1; s<=n-i; s++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            if (j==1 || j==i) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
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