//每次看到别人的代码都会觉得自己好渣
//看到一个人用递归写的，使用递归就避免了对链头的处理
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;//从链表的末尾开始返回
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;//返回的时候进行决策，如果节点的val等于val，则返回节点的儿子，否则返回节点本身
    }
};

//下面是我写的
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        
        while(head->val == val){
            if(head->next)
                head = head->next;
            else
                return NULL;
        }
        
        ListNode* pr = head;
        while(pr->next){
            while(pr->next && pr->next->val == val){
                pr->next = pr->next->next;
            }
            if(pr->next)
                pr = pr->next;
            else
                break;
        }
        return head;
    }
};