/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
 
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
    // first we will try to find the mid 
    let slow =head;
    let fast =head;

    while(fast.next && fast.next.next){
        slow =slow.next;
        fast =fast.next.next;
    }
    // now reverse the second half
    let curr = slow.next;
    let prev =null;
    
        while(curr){
            let next = curr.next;
            curr.next =prev;
            prev =curr;
            curr= next;
            
        }
        let second=  prev;
     
    
     let first = head;
     while( first && second){
        if(first.val!==second.val){
            return false;
        }
        first =first.next;
        second =second.next;

     }
     return true;
};