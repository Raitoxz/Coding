//别人的解法，不使用其他的函数，从字符串的开头开始迭代
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        auto iter = s.begin();
        while (*iter) {
            if (*iter++ != ' ')//iter在这里进行加一，如果这个值是' '，那么else if 也不会执行，注意此时的iter已经加一了
                ++len;
            else if (*iter && *iter != ' ')//进入这里的iter的值是' '，注意到这里的iter已经加一了
                len = 0;
        }
        return len;
    }
};

//我自己的解法
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
