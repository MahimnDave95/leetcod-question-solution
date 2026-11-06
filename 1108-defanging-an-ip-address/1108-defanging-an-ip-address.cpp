class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        int n = address.length();
        for (int i = 0 ; i < n ;i++){
            if (address[i]=='.'){
                s+="[.]";
            }
            else{
                s.push_back(address[i]);
            }
        }
        return s;
    }
};