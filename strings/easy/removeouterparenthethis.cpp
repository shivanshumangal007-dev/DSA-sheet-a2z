#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>


using namespace std;

//leetcode aaproach
string removeOuterParentheses(string s)
{
    int n = s.length(), cnt = 0;
    string res;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            if (cnt >= 1)
            {
                res += '(';
            }
            cnt++;
        }
        else
        {
            if (cnt > 1)
            {
                res += ')';
            }
            cnt--;
        }
    }
    return res;
}

// my approach
string removeOuterParentheses2(string s)
{
    stack<string> st;
    st.push("-1");
    if (s.length() < 1)
        return s;
    string ans = "";
    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() == "(" && s[i] == ')')
        {
            st.pop();
        }
        else if (st.top() == "-1" && s[i] == ')')
        {
            st.push(")");
            continue;
        }
        else if ((st.top() == "-1" || st.top() == "(") && s[i] == '(')
        {
            st.push("(");
        }
        else if (st.top() == ")" && s[i] == '(')
        {
            st.pop();
            continue;
        }
        ans += s[i];
    }
    return ans;
}
int main(){
    
    return 0;
}