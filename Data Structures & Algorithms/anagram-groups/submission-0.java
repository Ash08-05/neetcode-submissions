class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> group = new HashMap<>();
        for(String s : strs){
            String key = s;
            char[] ch = key.toCharArray();
            Arrays.sort(ch);
            key = new String(ch);

            group.putIfAbsent(key,new ArrayList<>());
            group.get(key).add(s);
        }
        List<List<String>> ans = new ArrayList<>();
        for(Map.Entry<String, List<String>> entry : group.entrySet()){
            ans.add(entry.getValue());
        }
        return ans;
    }
}
