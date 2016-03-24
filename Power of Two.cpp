class Solution1 {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return !(n&n-1);
    }
};


class Solution1 {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        bitset<32> b(n);
        return b.count() == 1;
    }
};
