8ms��
class Solution {
public:
    bool isUgly(int num) {
        if(num < 1) return false;
        while(num % 2 == 0) num /= 2;
        while(num % 3 == 0) num /= 3;
        while(num % 5 == 0) num /= 5;
        if(num == 1)
            return true;
        else
            return false;
    }
};

4ms��
class Solution {
public:
    bool isUgly(int num) {
        if(num == 1) return true;//�ٶȵ��������⣬����Ϊ�кܶ����������1��
        if(num < 1) return false;
        while(num % 2 == 0) num /= 2;
        while(num % 3 == 0) num /= 3;
        while(num % 5 == 0) num /= 5;
        return num == 1;
    }
};
