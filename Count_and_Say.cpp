#include<iostream>
#include<string>
#include<sstream>
#include<bitset>
using namespace std;

class Solution {
public:
	string countAndSay(int n) {
		if (n < 1) return "1";
		string s = "1";

		for (int i = 0; i < n; i++){
			string temp;
			auto iter = s.begin();
			int num = 1;

			while (iter != s.end()){
				if (iter + 1 == s.end()){
					temp += to_string(num);
					temp.push_back( *iter);
					iter++; 
				}
				else if (*iter != *(iter + 1)){
					temp += to_string(num);
					temp += *iter;
					num = 1;
					iter++;
				}
				else if (*iter == *(iter + 1)){
					num++;
					iter++;
				}
			}
			s = temp;
		}
		return s;
	}
};

int main(){
	Solution s;
	cout << s.countAndSay(5) << endl;
	return 0;
}