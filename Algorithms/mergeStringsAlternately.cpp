// Source : https://leetcode.com/problems/merge-strings-alternately/
// Author : Mikah Stroude
// Date   : 2025-07-25

/***************************************************************************************************** 
 *
 * You are given two strings word1 and word2. Merge the strings by adding letters in alternating 
 * order, starting with word1. If a string is longer than the other, append the additional letters 
 * onto the end of the merged string.
 * 
 * Return the merged string.
 * 
 * Example 1:
 * 
 * Input: word1 = "abc", word2 = "pqr"
 * Output: "apbqcr"
 * Explanation: The merged string will be merged as so:
 * word1:  a   b   c
 * word2:    p   q   r
 * merged: a p b q c r
 * 
 * Example 2:
 * 
 * Input: word1 = "ab", word2 = "pqrs"
 * Output: "apbqrs"
 * Explanation: Notice that as word2 is longer, "rs" is appended to the end.
 * word1:  a   b 
 * word2:    p   q   r   s
 * merged: a p b q   r   s
 * 
 * Example 3:
 * 
 * Input: word1 = "abcd", word2 = "pq"
 * Output: "apbqcd"
 * Explanation: Notice that as word1 is longer, "cd" is appended to the end.
 * word1:  a   b   c   d
 * word2:    p   q 
 * merged: a p b q c   d
 * 
 * Constraints:
 * 
 * 	1 <= word1.length, word2.length <= 100
 * 	word1 and word2 consist of lowercase English letters.
 ******************************************************************************************************/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;

        int s1 = word1.length();
        int s2 = word2.length();

        //word1==word2
        for(int i=0; i<s2&&i<s1; i++){
            merged = merged + word1[i] + word2[i];
        }

        //word2>word1
        if(s2>s1){
            for(int i=s1; i<s2; i++){
                merged = merged + word2[i];
            }
        }

        if(s1>s2){
            for(int i=s2; i<s1; i++){
                merged = merged + word1[i];
            }
        }

        return merged;
    }
};


