class Solution(object):
    def wordPattern(self, pattern, s):
        temp={}
        words=s.split()
        if(len(words)!=len(pattern)):
            return False
        for i in range(len(pattern)):
            if pattern[i] in temp:
                if temp[pattern[i]]!=words[i]:
                    return False  
            elif words[i] in temp.values():
                return False
            else:
                temp[pattern[i]] = words[i]
        return True
