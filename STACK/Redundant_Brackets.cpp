#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> stack;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            stack.push(s[i]);
        }
        else if(s[i]==')')
        {
            char ch = stack.top();
            if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
            {
                while(stack.top()!='(')
                    stack.pop();
                stack.pop();
            }
            else
            {
                return true;
            }
        }
    }

    return false;
}