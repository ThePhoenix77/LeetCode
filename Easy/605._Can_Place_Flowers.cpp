class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        for(int i=0;i<s;i++){
            if(n==0) return true;
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) 
               && (i==s-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
            }
        }
        return n <= 0;
    }
};
