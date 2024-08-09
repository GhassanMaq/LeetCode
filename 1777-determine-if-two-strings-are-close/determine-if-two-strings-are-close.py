class Solution(object):
    def closeStrings(self, word1, word2):
        w1=Counter(word1)
        w2=Counter(word2)
        if(len(w1)!=len(w2)):
            return False
        print(w1)
        print(w2)
        n1=Counter([v for v in w1.values()])
        print(n1)
        n2=Counter([v for v in w2.values()])
        print (n2)
        print(set(word1))
        print(set(word2))
        return w1==w2 or (n1==n2 and set(word1) == set(word2))
        
        