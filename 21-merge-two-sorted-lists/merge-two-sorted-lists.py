# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        ans = ListNode()
        c = ans
        while list1 and list2:
            a = list1.val
            b = list2.val
            if a<b:
                c.next=list1
                list1=list1.next
            else:
                c.next=list2
                list2=list2.next
            c=c.next
        while list1:
            c.next=list1
            c=c.next
            list1=list1.next
        while list2:
            c.next=list2
            c=c.next
            list2 = list2.next
        return ans.next