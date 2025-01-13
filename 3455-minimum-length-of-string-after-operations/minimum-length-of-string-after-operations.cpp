class Solution {
public:
    int minimumLength(string s) {
        vector<int>v(26 , 0) ;

        for(int i=0 ; i<s.size() ; i++){
            v[s[i]-'a']++ ;
        }

        int ans = 0 ;

        for(int i=0 ; i<v.size() ;  i++){
            if(v[i] != 0){
                if(v[i] % 2 == 0 ){
                    ans += 2 ;
                }else{
                    ans +=1 ;
                }

            }

        }
        return ans ;


        
    }
};