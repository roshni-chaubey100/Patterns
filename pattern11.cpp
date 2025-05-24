#include<iostream>

using namespace std;

void pattern(int n) {
    for (int i=1; i<=3*n-2; i++) {
        int stars;
        if (i <= n) {
            stars = i;
        } else if (i <= 2*n - 1) {
            stars = 2*n - i;
        } else {
            stars = i - (2*n - 2);
        }

        for (int j=1; j<=stars; j++) {
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