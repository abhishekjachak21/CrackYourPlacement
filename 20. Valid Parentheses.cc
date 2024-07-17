//stack string
//valid parenthesis
// date -> 17 july - day3

class Solution {
public:
    bool isValid(string s) {
    
    stack<char>stk;
    
    for(char ch:s){
    if(ch=='(' || ch=='{' || ch=='[') stk.push(ch);
     else{
        if(stk.empty() || abs(ch-stk.top())>2 ) return false; //abs() ASCII value chk karta h
        //parenthesis ke values mei 1-2 ka fark hota h
        else stk.pop(); //else toh pair thik h hogi 100%, isiliye stk khali karo
    }
    }
    return stk.empty(); //stk poora khali ho toh for sure sab pairs thik the
    }
};
