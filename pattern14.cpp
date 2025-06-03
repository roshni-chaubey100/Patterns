#include<iostream>

using namespace std;

void pattern(int n) {
    char ch = 'a';
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<ch<<" ";
            // for only containing a to z
            (ch == 'z')?(ch = ch-25):ch++;
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