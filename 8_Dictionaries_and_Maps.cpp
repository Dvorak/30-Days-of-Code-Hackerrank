#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    string name;
    map<string, int> phoneBook;
    
    for (int i=0; i<n; i++) {
        cin >> name;
        cin >> phoneBook[name];
    }

    while(cin >> name) {
        if(phoneBook[name]){
            cout << name << "=" << phoneBook[name]<<endl;
        }else{
            cout << "Not found" << endl;
        }

    }
    return 0;
}
