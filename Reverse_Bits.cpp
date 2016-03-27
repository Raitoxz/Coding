#include<iostream>
#include<bitset>

using namespace std;

int main(){
    uint32_t n = 0x0001;
    uint32_t result = 0x0000;
    for(int i = 0; i < 32; i++){
        //错误的代码,错误的原因是没有考虑优先级，<<、&的优先级都很低。。。。
        //result = result << 1 + n&1;
        result = result << 1;
        result += n&1;
        n = n >> 1;
    }
    cout << result << endl;

    //bitset实现
    bitset<32> b;
    for(int i = 31; i >= 0; i--){
        b[i] = n&1;
        n = n >> 1;
    }
    cout << b.to_ulong() << endl;
    return 0;
}
