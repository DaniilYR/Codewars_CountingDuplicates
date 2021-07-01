#include <string>
#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <map>

size_t duplicateCount(const char* in){
	size_t ans = 0;
	std::string s = in;
	std::transform(s.begin(), s.end(), s.begin(), tolower);	
	
    std::map<char, int> a;
    for(int i = 0; i < s.length(); i++){
        if(a.find(s[i]) != a.end()){
            a[s[i]]++;
        }
        else{
            a.insert({s[i], 1});
        }
    }
    std::map<char,int>::iterator it;
    for(it = a.begin(); it != a.end(); ++it){
        if(it->second > 1){
            ans++;
        }
    }
	return ans;
}

int main(){
	char* s = "";
	std::cout << duplicateCount(s) << std::endl;
	return 0;
}
