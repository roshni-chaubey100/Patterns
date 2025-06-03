#include<iostream>

using namespace std;

void pattern(int n) {
    int countChar = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            char ch;
            if ((countChar+1) % 2 != 0) {
                ch = 'a' + (countChar % 26);
            } else {
                ch = 'A' + (countChar % 26);
            }
            cout<<ch<<" ";
            countChar++;
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