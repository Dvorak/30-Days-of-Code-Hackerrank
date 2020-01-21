#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int maxConsecutive = 0;
    int numConsecutive = 0;
    while (n > 0) {
        if(n % 2 == 1){
            numConsecutive++;
            if(numConsecutive > maxConsecutive){
                maxConsecutive = numConsecutive;
            }
        }else{
            numConsecutive = 0;
        }

        n = n / 2;
        //cout << n << endl;
    }

    cout << maxConsecutive;
    return 0;
}
