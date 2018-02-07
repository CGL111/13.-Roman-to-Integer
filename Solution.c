class Solution {
public:
    int romanToInt(string s) {
        int m = 0;
        map<char,int> p = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i = 1;i < s.size();i++){
            if(p[s[i]] > p[s[i-1]]){
                m -= p[s[i-1]];
            }
            else
                m += p[s[i-1]];
        }
        m+=p[s.back()];
        return m;
    }
};
