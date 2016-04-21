//���˵Ľⷨ����ʹ�������ĺ��������ַ����Ŀ�ͷ��ʼ����
//I've noticed that a lot of solutions use available library functions that return directly the positions of certain characters or do other operations like "split". 
//I personally don't think that's a good idea. Firstly, these functions take some time and usually involve with iteration through the whole string. 
//Secondly, questions like this one is intended to be a practice of detail implementation, not calling other functions. 
//My solution like below uses only the most basic string operations and probably beats many other solutions which call other existing functions.
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
