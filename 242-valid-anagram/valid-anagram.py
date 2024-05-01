class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        
        hashmap1 = [0] * 26
        hashmap2 = [0] * 26
        
        for char in s:
            hashmap1[ord(char) - ord('a')] += 1
        
        for char in t:
            hashmap2[ord(char) - ord('a')] += 1
        
        return hashmap1 == hashmap2
