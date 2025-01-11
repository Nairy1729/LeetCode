class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size() ;

        map<char,int>mp ;

        for(auto i : s){
            mp[i]++ ;
        }
        int odd = 0  ;
        int even = 0 ;


        for(auto i : mp){
            if(i.second%2 != 0){
                odd++ ;
                even += (i.second - 1)/2 ;
            }else{
                even += (i.second/2) ;
            }

        }

        if(k > n){
            return false ;
        }
        if(k<odd){
            return false ;
        }
        if(k == odd){
            return true ;
        }

        return true ;


        
    }
};