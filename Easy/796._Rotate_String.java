class Solution {
    public boolean rotateString(String s, String goal) {
        if (s.length() != goal.length()) return false;
        String doubledS = s + s;
        return doubledS.contains(goal);
    }
}
