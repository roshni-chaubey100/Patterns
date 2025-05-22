#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=2*n-1; i++) {
        int col = (i > n) ? (2*n - i) : i;
        int spaces = (n - col);
        for (int s=1; s<=spaces; s++) {
            cout<<" ";
        }
        for (int j=1; j<=col; j++) {
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