class Solution {
public:
    string intToRoman(int num) {
        map<int, string> roman;
        roman[1] = "I";
        roman[4] = "IV";
        roman[5] = 'V';
        roman[9] = "IX";
        roman[10] = 'X';
        roman[40] = "XL";
        roman[50] = 'L';
        roman[90] = "XC";
        roman[100] = 'C';
        roman[400] = "CD";
        roman[500] = 'D';
        roman[900] = "CM";
        roman[1000] = 'M';
        
        string ans = "";
        
        while(num != 0){
            map<int, string>::iterator itr = roman.upper_bound(num);
            --itr;
            int value = itr->first;
            string curRoman = itr->second;
            num -= value;
            ans += curRoman;
        }
        
        return ans;
        
    }
};