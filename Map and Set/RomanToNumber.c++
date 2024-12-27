#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cout << "Enter the roman number: ";
    cin >> s;

    unordered_map<char, int> mp;
    mp.insert({'I', 1});
    mp.insert({'V', 5});
    mp.insert({'X', 10});
    mp.insert({'L', 50});
    mp.insert({'C', 100});
    mp.insert({'D', 500});
    mp.insert({'M', 1000});

    int result = 0;
    int current = 0;
    int prev = 0;
    
    for (int i = s.length() - 1; i >= 0; i--) {
        current = mp[s[i]];
        
        if (current < prev) {
            result -= current;
        } else {
            result += current;
        }
        
        prev = current;
    }

    cout << "The Integer form of [" << s << "] is :" << result << endl;

    return 0;
}