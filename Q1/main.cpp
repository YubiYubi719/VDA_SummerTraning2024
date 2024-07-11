#include <unordered_map>
#include <algorithm>
#include "func.h"
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string,vector<string>> dict;
    for(string str:strs){
        string origin_str = str;
        sort(str.begin(),str.end());
        dict[str].push_back(origin_str);
    }

    for(auto iter = dict.begin(); iter != dict.end(); iter++){
        result.push_back((*iter).second);
    }
    return result;
}


int main(int argc, char* argv[]){
    vector<string> vocabularyies = parser("testcase/5.in");
    print(groupAnagrams(vocabularyies));

    return 0;
}