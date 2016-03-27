#include<iostream>
#include<bitset>

using namespace std;

int main(){
    uint32_t n = 0x0001;
    uint32_t result = 0x0000;
    for(int i = 0; i < 32; i++){
        //����Ĵ���,�����ԭ����û�п������ȼ���<<��&�����ȼ����ܵ͡�������
        //result = result << 1 + n&1;
        result = result << 1;
        result += n&1;
        n = n >> 1;
    }
    cout << result << endl;

    //bitsetʵ��
    bitset<32> b;
    for(int i = 31; i >= 0; i--){
        b[i] = n&1;
        n = n >> 1;
    }
    cout << b.to_ulong() << endl;
    return 0;
}
