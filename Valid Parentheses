/*
  YAREN AKIN DENEK
  6.12.2022
*/

class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char>stackS;
        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
            {
                stackS.push(c);
            }
            else{
                
                if(stackS.empty()) return false;
                if(c == ')' && stackS.top() != '(') return false;
                if(c == '}' && stackS.top() != '{') return false;
                if(c == ']' && stackS.top() != '[') return false;
                stackS.pop();
            }
        }
        return stackS.empty();

    }
};
