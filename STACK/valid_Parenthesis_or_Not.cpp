bool isValidParenthesis(string s)
{
    stack<char> st; // Fixed: Renamed 's' to 'st' to avoid confusion with input string
    for(int i = 0; i < s.length(); i++){ // Fixed: Use s.length() instead of undefined 'expression'
        char ch = s[i]; // Fixed: Use input string 's' instead of undefined 'expression'

        // If opening bracket, push to stack
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else {
            // For closing brackets
            if (st.empty()) {
                return false; // Stack is empty when trying to match a closing bracket
            }
            
            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop();
            } else {
                return false; // Mismatched brackets
            }
        }
    }

    // Check if all brackets are matched
    return st.empty();
}