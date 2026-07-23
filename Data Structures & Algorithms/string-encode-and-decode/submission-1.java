class Solution {

    public String encode(List<String> strs) {
        StringBuilder encoded = new StringBuilder();
        for(String s : strs){
            encoded.append(s.length()).append('#').append(s);
        }
        return encoded.toString();
    }

    public List<String> decode(String str) {
        List<String> res = new ArrayList<>();
        int i = 0;
        while(i < str.length()){
            int j = str.indexOf('#',i);
            int length = Integer.parseInt(str.substring(i,j));
            i = j + 1;
            String s = str.substring(i,i+length);
            res.add(s);
            i += length;
        }
        return res;
    }
}
