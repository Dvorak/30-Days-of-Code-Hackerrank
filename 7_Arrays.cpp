#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        // string to int
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    //solution 1
    for (int j = 0; j < arr.size(); j++){
        cout << arr[n-1-j];
        if(j<n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
/*
    //solution 2
    int main() {
        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        reverse(arr, arr + N);

        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }

        return 0;
    }
*/
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
