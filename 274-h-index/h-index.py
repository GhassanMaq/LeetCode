class Solution(object):
    def hIndex(self, citations):
        cit=citations
        cit.sort(reverse=True)
        for i in range(len(citations)):
            if i >=citations[i]:
                return i
        return len(citations)
        