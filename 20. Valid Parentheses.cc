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
            if(stk.empty()) return false;
            if(ch==')' && stk.top()=='(') stk.pop(); //pair hogi toh stk khali karo, ni h toh false
            else  if(ch==']' && stk.top()=='[') stk.pop();
            else  if(ch=='}' && stk.top()=='{') stk.pop();
            else return false;
        }
    }
    return stk.empty();
    }
};
