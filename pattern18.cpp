#include<iostream>

using namespace std;

void pattern(int n) {
    char ch;
    for (int i=1; i<=n; i++) {
        for (int j=i; j>=1; j--) {
            ch = 'A' + (j-1)%26;
            cout<<ch<<" ";
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