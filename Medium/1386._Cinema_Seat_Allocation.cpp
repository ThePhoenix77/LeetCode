class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int ans=2*n;
        int s=reservedSeats.size();
        sort(reservedSeats.begin(),reservedSeats.end());
        for(int i=0;i<s;i++){
            int p25=0;
            int p47=0;
            int p69=0;
            int row=reservedSeats[i][0];
            while(i<s && reservedSeats[i][0]==row){
                int seat=reservedSeats[i][1];
                if(seat>=2 && seat<=5){
                    p25=1;
                    if(seat>=4 && seat<=5) p47=1;
                }
                else if(seat>=6 && seat<=9){
                    p69=1;
                    if(seat>=6 && seat<=7) p47=1;
                }
                i++;
            }
            if(p25==1 && p47==1 && p69==1) ans-=2;
            else if(p25==1 || p47==1 || p69==1) ans-=1;
            i--;
        }
        return ans;
    }
};
