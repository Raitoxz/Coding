//ÿ�ο������˵Ĵ��붼������Լ�����
//����һ�����õݹ�д�ģ�ʹ�õݹ�ͱ����˶���ͷ�Ĵ���
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return NULL;//�������ĩβ��ʼ����
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;//���ص�ʱ����о��ߣ�����ڵ��val����val���򷵻ؽڵ�Ķ��ӣ����򷵻ؽڵ㱾��
    }
};

//��������д��
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