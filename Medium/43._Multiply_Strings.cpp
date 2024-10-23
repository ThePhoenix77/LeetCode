class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        string ans;
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> res(n1+n2, 0);
        for (int i=n1-1;i>=0;--i){
            for (int j=n2-1;j>=0;--j){
                int product = (num1[i] - '0')*(num2[j] - '0');
                int p1=i+j;    
                int p2=i+j+1;
                int sum=product+res[p2];
                res[p2]=sum%10;
                res[p1]+=sum/10;
            }
        }
        for(int num : res){
            if (!(ans.empty() && num==0)) ans.push_back(num + '0');
        }
        return ans;
    }
};
