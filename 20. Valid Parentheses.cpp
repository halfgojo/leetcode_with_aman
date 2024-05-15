class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                myStack.push(s[i]);
            } else if(s[i] == ')') {
                if(myStack.empty() || myStack.top() != '(')
                    return false;
                myStack.pop();
            } else if(s[i] == ']') {
                if(myStack.empty() || myStack.top() != '[')
                    return false;
                myStack.pop();
            } else if(s[i] == '}') {
                if(myStack.empty() || myStack.top() != '{')
                    return false;
                myStack.pop();
            } else {
                return false;
            }
        }
        return myStack.empty() ? true : false;
    }
};
