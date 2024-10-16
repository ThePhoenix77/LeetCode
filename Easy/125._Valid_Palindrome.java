class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb=new StringBuilder();
        for(char c: s.toCharArray()){
            if(Character.isLetterOrDigit(c))
                sb.append(Character.toLowerCase(c));
        }
        String s1=sb.toString();
        String s2=sb.reverse().toString();
        return s1.equals(s2);
    }
}
