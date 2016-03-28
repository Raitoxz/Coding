//把这个题放上来的原因是，才发现char类型的字符可以直接做数组的索引
//最开始考虑的时候我以为只有字母，后面发现还有数字，所以用256表示所有的ascii码的索引
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() == 0) return true;
        if(s == t) return true;

        int hash1[256] = {0};
        int hash2[256] = {0};

        auto iter1 = s.cbegin();
        auto iter2 = t.cbegin();
        int count1 = 1, count2 = 1;//映射的起始值
        string s1, s2;
        for(; iter1 != s.cend();iter1++, iter2++ ){
            int index1 = *iter1;
            if(hash1[index1] == 0){
                hash1[index1] = count1;
                s1 += count1++;
            }
            else
                s1 += hash1[index1];

            int index2 = *iter2;
            if(hash2[index2] == 0){
                hash2[index2] = count2;
                s2 += count2++;
            }
            else
                s2 += hash2[index2];
            if(count1 != count2) return false;
        }
        return (s1 == s2);
    }
};

//别人的解法
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};
