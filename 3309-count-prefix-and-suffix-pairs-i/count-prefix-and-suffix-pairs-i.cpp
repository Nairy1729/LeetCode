bool isPrefixAndSuffix(const string& str1, const string& str2) {
    int m = str1.size(), n = str2.size();
    if (m > n) return false; 
    for (int i = 0; i < m; ++i) {
        if (str1[i] != str2[i]) return false;
    }

    for (int i = n - m, j = 0; i < n; ++i, ++j) {
        if (str1[j] != str2[i]) return false;
    }

    return true;
}


class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size() ;
        int ans = 0 ;
        for(int i=0 ;i<n ; i++){
            string s1 = words[i] ;
            for(int j=i+1 ; j<n ; j++){
                string s2 = words[j] ;
                if(isPrefixAndSuffix(s1,s2)){
                    ans++ ;
                }
                
                
            }
        }
        return ans ;
        
    }
};