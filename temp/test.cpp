#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string inp = s;
        int len = inp.length();
        
        for(int i = 0; i <= len; i++){
            for(int j=i;j <= len; j++){
                if(inp[i]==inp[i+1]) break;
                else 

            }

        }
        
    }
};