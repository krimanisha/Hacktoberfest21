Problem Description

Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".
Example Input
Input 1:

A = ["abcdefgh", "aefghijk", "abcefgh"]
Input 2:

A = ["abab", "ab", "abcd"];


Example Output
Output 1:

"a"
Output 2:

"ab"





public class Solution {
  public String longestCommonPrefix(String[] A) {
 
    int min = Integer.MAX_VALUE;
    String s = "";
 
    for (int i = 0; i < A.length; i++) {
      min = Integer.min(min, A[i].length());
    }
 
    String ans = "";
 
    for (int i = 0; i < min; i++) {
      char ch = A[0].charAt(i);
 
      for (int j = 1; j < A.length; j++) {
 
        if (A[j].charAt(i) != ch)
          return ans;
      }
      ans += ch;
    }
    return ans;
  }
}