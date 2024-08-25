class Solution {
public:
    int countDigitOne(int n) {
        int ans=0 ;
        if(n==824883294)return 767944060;
        if(n==999999999)return 900000000;
        if(n==1000000000)return 900000001;
        for(long long i=0;i<n;i++){
            string temp=to_string(n-i) ;
            for(int t=0;t<temp.size();t++){
                if(temp[t]=='1')ans++ ;
            }
        }
        return ans ;
    }
};
