from collections import Counter

class Solution(object):
    def groupAnagrams(self, strs):
        anagrams = defaultdict(list)
    
        for word in strs:
            sorted_word = ''.join(sorted(word))
            anagrams[sorted_word].append(word)
        
        result = [sorted(group) for group in anagrams.values()]
        result.sort(key=lambda x: x[0])
        
        return result
