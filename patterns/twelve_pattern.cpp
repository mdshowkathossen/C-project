#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 0; i < n; i++){
        // Top
        // Space
        for (int j = 0; j < (n-i-1); j++){
            cout << " ";
        }
        // Star
        for (int j = i; j<= i; j++){
            cout << "*";
        }
        if (i !=0) {
            // Second space
            for (int j = 0; j < (2*i-1); j++){
                cout << " ";
            }
            // Second Star
            for (int j = i; j <=i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    // Bottom
    for (int i = 0; i <n-1; i++){
        // Space
        for (int j = 0; j < i+1; j++){
            cout << " ";   
        }
        // first star
        for (int j = i; j <= i; j++) {
            cout << "*";
        }
        if (i != (n-2)) {
            // Middle space
            for (int j = 0; j < (2*(n-i)-5); j++){
            cout << " ";
            }
            // last star
            for (int j = i; j<=i; j++){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}