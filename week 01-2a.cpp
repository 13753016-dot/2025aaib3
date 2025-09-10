# week01-2a.py LeeyCode 學習計畫 python 版本1 for迴圈
# 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字母長度
        N = len(needle)   #字母長度
        # sadbutsad
        # sad i:0
        #  sad i:1
        # ....
        #          sad i:6
        for i in range(H-N+1):  #長度9 找 長度3 有0.....6 共7格
            if haystack[i:i+N] == needle: # 如果兩個相同
            # 把字串,從i開始,取到 i+N結束 共N個字
                return i # 成功找到位置
        return -1 # 沒有成功
