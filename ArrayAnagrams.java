import java.util.*;

class checkAnagrams {
    public List<List<String>> collectAnagrams(String[] strs) {
        if(strs.length==0) return new ArrayList<>();
        Map<String, List<String>> map = new HashMap<>();
        for (String s : strs) {
            char[] c = s.toCharArray();
            Arrays.sort(c);
            String key = String.valueOf(c);
            if(!map.containsKey(key)){
                map.put(key, new ArrayList<>());
            }
            map.get(key).add(s);
        }
        return new ArrayList(map.values());
    }
}

public class ArrayAnagrams {
    public static void main(String[] args) {
        String[] stringArray = {"net", "dear", "disk", "ten", "kids", "read"};

        checkAnagrams objectAnagram = new checkAnagrams();
        System.out.println(objectAnagram.collectAnagrams(stringArray));
    }
}