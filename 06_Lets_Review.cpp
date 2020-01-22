#include <cmath>
#include <cstdio>
#include <stdexcept>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    cin >> num;
    cin.ignore();
    for (int i=0; i<num; i++) {
        string s;
        int length;
        cin >> s;
        cin.ignore();
        for (int j = 0; j< s.length(); j++) {
            if(j%2==0){
                cout << s[j];
            }
        }

        cout << " ";

        for (int j = 0; j< s.length(); j++) {
            if(j%2){
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}
