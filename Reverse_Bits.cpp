#include<iostream>

using namespace std;

int main(){
    uint32_t n = 00000000000000000000000000000001;
    uint32_t result = 00000000000000000000000000000000;
    for(int i = 0; i < 32; i++){
        //错误的代码,错误的原因是没有考虑优先级，<<、&的优先级都很低。。。。
        //result = result << 1 + n&1;
        result = result << 1;
        result += n&1;
        n = n >> 1;
    }
    cout << result << endl;
    return 0;
}
