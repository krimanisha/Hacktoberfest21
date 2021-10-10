/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun addTwoNumbers(l1: ListNode?, l2: ListNode?): ListNode? {
        val result = ListNode(0)
        var cur = result
        var carry = 0

        var n1 = l1
        var n2 = l2
        while (n1 != null || n2 != null || carry != 0) {
            val sum = (n1?.`val` ?: 0) + (n2?.`val` ?: 0) + carry
            cur.next = ListNode(sum % 10)
            cur = cur.next!!
            carry = sum / 10

            n1 = n1?.next
            n2 = n2?.next
        }
        return result.next
    }
}
