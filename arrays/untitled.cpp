#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

string sortString(string input, string key) {
    set<char> uniqueKeys(key.begin(), key.end());

    string insideKey = "";
    string outsideKey = "";

    for (char c : input) {
        if (uniqueKeys.count(c)) {
            insideKey += c;
        } else {
            outsideKey += c;
        }
    }

    sort(insideKey.begin(), insideKey.end());

    return outsideKey + insideKey;
}

int main() {
    string input = "apple";
    string key = "apl";

    string result = sortString(input, key);

    cout << input << endl;
    cout << key << endl;
    cout << result << endl;

    return 0;
}