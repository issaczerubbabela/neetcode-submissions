class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_freq;
        unordered_map<char,int> t_freq;
        for (char c:s) {
            s_freq[c]++;
        }
        for (char c:t) {
            t_freq[c]++;
        }
        if (s_freq == t_freq) {
            return true;
        }
        return false;
    }
};
