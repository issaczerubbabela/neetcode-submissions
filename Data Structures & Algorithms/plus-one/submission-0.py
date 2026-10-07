class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if digits[-1] < 9:
            digits[-1] = digits[-1] + 1
            return digits
        else:
            digits[-1]=0
            sub=1
            i=-1
            while sub==1 and len(digits)+i>0:
                i=i-1
                if digits[i] < 9:
                    digits[i] = digits[i] + 1
                    sub=0
                else:
                    digits[i]=0
            if digits[0]==0:
                digits.insert(0, 1)
            return digits