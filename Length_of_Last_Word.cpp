//���˵Ľⷨ����ʹ�������ĺ��������ַ����Ŀ�ͷ��ʼ����
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        auto iter = s.begin();
        while (*iter) {
            if (*iter++ != ' ')//iter��������м�һ��������ֵ��' '����ôelse if Ҳ����ִ�У�ע���ʱ��iter�Ѿ���һ��
                ++len;
            else if (*iter && *iter != ' ')//���������iter��ֵ��' '��ע�⵽�����iter�Ѿ���һ��
                len = 0;
        }
        return len;
    }
};

//���Լ��Ľⷨ
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        if(!size) return 0;
        auto iter = s.end() - 1;
        while(*iter == ' '){
            iter--;
            size--;
        }
        int count = 0;
        while(*iter != ' ' && count != size){
            count++;
            iter--;
        }
        return count;
    }
};
