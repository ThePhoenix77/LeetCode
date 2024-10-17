class Solution {
    public int maximumSwap(int num) {
        char[] digits=Integer.toString(num).toCharArray();
        int[] dg=new int[10];
        for(int i=0;i<digits.length;i++)
            dg[digits[i] - '0']=i;
        for(int i=0;i<digits.length;i++){
            for(int d=9;d>digits[i]-'0';d--){
                if(dg[d]>i){
                    char tmp = digits[i];
                    digits[i] = digits[dg[d]];
                    digits[dg[d]] = tmp;
                    return Integer.parseInt(new String(digits));
                }
            }
        }
        return num;
    }
}
