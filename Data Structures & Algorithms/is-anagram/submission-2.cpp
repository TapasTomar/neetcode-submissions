class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count; 
        int i=0;
        if(s.length()!=t.length()){
            return false;
        }
        for(char ch: s){
            count[ch]++;
        }
        for (char ch : t) {
            if (count[ch] <= 0) {
                return false;

    }count[ch]--;
        }return true;
}};
