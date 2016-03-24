//一个比5大的数有多少个五的倍数的个数等于n/5。
//计算得到0的个数，可以理解成阶乘结果可以分解出多少个10相乘，而10又是2和5相乘的结果。
//因此，只要计算出1-n中有多少个2和5即可，因2的个数会远大于5的个数，即知道5的个数既可以得到0的个数。

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n >= 5){
            count += n/5;
            n /= 5;
        }
        return count;

    }
};
