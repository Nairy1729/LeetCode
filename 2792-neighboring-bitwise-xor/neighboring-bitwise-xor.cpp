class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int fans = 0 ;
        for(auto i:derived){
            fans^=i ;

        }
        return fans==0 ;

        
    }
};