// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:
//     Open brackets must be closed by the same type of brackets.
//     Open brackets must be closed in the correct order.

class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(int i = 0; i < s.length(); i++){
            char curr = s[i];
            if(curr == '('|| curr == '{' || curr == '['){
                str.push(curr);
            }
            else if(str.empty()){
                return false;
            }
            else if(curr==')' && str.top()=='('){
                str.pop();
            }
            else if(curr=='}' && str.top()=='{'){
                str.pop();
            }
            else if(curr==']' && str.top()=='['){
                str.pop();
            }
            else{
                return false;
            }
        }
        
        if(str.empty()){
            return true;
        }
        return false;
    }
};
