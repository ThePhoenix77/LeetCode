class Solution {
    public int onesSum(String s){
        int one_count=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1') one_count++;
        }
        return one_count;
    }
    public String decToBin(int num){
        if(num==0) return "0";
        StringBuilder bin_num=new StringBuilder();
        while(num>0){
            bin_num.append(num%2);
            num/=2;
        }
        return bin_num.reverse().toString();
    }
    public int[] countBits(int n) {
        int[] ans_arr=new int[n+1];
        for(int i=0;i<=n;i++){
            ans_arr[i]=onesSum(decToBin(i));
        }
        return ans_arr;
    }
}
