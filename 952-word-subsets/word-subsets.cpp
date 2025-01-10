class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;
        for (const auto& word : words2) {
            unordered_map<char, int> temp;
            for (char ch : word) {
                temp[ch]++;
            }
            for (auto [ch, count] : temp) {
                maxFreq[ch] = max(maxFreq[ch], count);
            }
        }

        vector<string> ans;
        for (const auto& word : words1) {
            unordered_map<char, int> wordFreq;
            for (char ch : word) {
                wordFreq[ch]++;
            }
            bool isUniversal = true;
            for (auto [ch, count] : maxFreq) {
                if (wordFreq[ch] < count) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal) {
                ans.push_back(word);
            }
        }

        return ans;
    }
};
