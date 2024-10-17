class Solution {
    public int heightChecker(int[] heights) {
        int count=0;
        int[] tmp=Arrays.copyOf(heights, heights.length);
        Arrays.sort(tmp);
        for(int i=0;i<heights.length;i++){
            if(heights[i]!=tmp[i]) count++;
        }
        return count;
    }
}
