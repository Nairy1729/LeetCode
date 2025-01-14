vector<int> findIntersection( vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> elementsSet(arr1.begin(), arr1.end());
    vector<int> intersection;

    for (int num : arr2) {
        if (elementsSet.find(num) != elementsSet.end()) {
            intersection.push_back(num);
            elementsSet.erase(num); 
        }
    }

    return intersection;
}

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        vector<int>ans ;

        int n = A.size() ;

        for(int i=0 ; i<n ; i++){
            
            vector<int>a ;
            vector<int>b ;
            for(int j=0 ; j<=i ; j++){
                a.push_back(A[j]) ;
                b.push_back(B[j]) ;
            }
            vector<int>temp  = findIntersection(a,b);
            ans.push_back(temp.size()) ;
        }
        return ans ;
        
    }
};