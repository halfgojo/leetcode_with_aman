class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> hashmap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int stringValue = 0;
    for (int i = 0; i < s.size(); ++i) {
        // Ensure i+1 is within bounds
        if (i + 1 < s.size()) {
            if (hashmap[s[i]] < hashmap[s[i + 1]]) {
                stringValue -= hashmap[s[i]];
            } else {
                stringValue += hashmap[s[i]];
            }
        } else {
            stringValue += hashmap[s[i]];
        }
    }
    return stringValue;
}

int main() {
    string input = "MCMXCIV";
    cout << "The numerical equivalent of this string of Roman integers is " << romanToInt(input) << "\n";
    return 0;
}
};
