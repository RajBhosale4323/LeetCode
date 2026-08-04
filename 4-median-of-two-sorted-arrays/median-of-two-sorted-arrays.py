class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        l1 = len(nums1)
        l2 = len(nums2)
        t = max(l1,l2)
        t1=0
        t2=0
        ans=[]
        for i in range(t+1):
            if t1==l1 or t2==l2:
                break
            if nums1[t1] < nums2[t2]:
                ans.append(nums1[t1])
                t1+=1
            else:
                ans.append(nums2[t2])
                t2+=1

        while t1<l1:
            ans.append(nums1[t1])
            t1+=1

        while t2<l2:
            ans.append(nums2[t2])
            t2+=1

        n = len(ans)
        if n%2==0:
            n = int(n/2)
            temp = float(ans[n-1] + ans[n])
            return temp/2
        else:
            n = int(n/2)
            return ans[n]
        