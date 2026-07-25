class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums == null || nums.length == 0){
            return 0;
        }
        Set<Integer> numSet = new HashSet<>();
        for(int num : nums){
            numSet.add(num);
        }
        int longestCon = 0;
        for(int num : numSet){
            if(!numSet.contains(num-1)){
                int currentNum = num;//6
                int current = 1;//4

                while(numSet.contains(currentNum + 1)){
                    currentNum++;
                    current++;
                }
                longestCon = Math.max(longestCon , current );
            }
        }
        return longestCon;
    }
}
