class Solution(object):
    def romanToInt(self, s):
        roman={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        sum=0
        prev_value=0
        for i in s:
            current_value=roman[i]
            if current_value>prev_value:
                sum += current_value - 2 * prev_value
            else:
                sum+=current_value
            prev_value=current_value
        return sum

        