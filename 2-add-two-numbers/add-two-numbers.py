# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        g = True
        passs = 0
        sum = l1.val + l2.val
        if sum > 9:
            sum -= 10
            passs +=1
            head = ListNode(sum)
        else:
            head = ListNode(sum)
        current = head
        
        while g:
            if passs == 1:
                if l1.next:
                    l1 = l1.next
                    value1 = l1.val
                else:
                    value1 = 0
                if l2.next:
                    l2 = l2.next
                    value2 = l2.val
                else:
                    value2 = 0
            else:
                if l1.next == None and l2.next == None:
                    g = False
                    break
                if l1.next:
                    l1 = l1.next
                    value1 = l1.val
                else:
                    value1 = 0
                if l2.next:
                    l2 = l2.next
                    value2 = l2.val
                else:
                    value2 = 0

            sum = value1 + value2 

            if passs == 1:
                sum += 1
                passs = 0

            if sum > 9:
                sum -= 10
                current.next = ListNode(sum)
                passs +=1
            else:
                current.next = ListNode(sum)

            current = current.next

        return head

        