class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> q;
        for(int i=0;i<n;i++){
            if(q.empty()){
                q.push(s[i]);
            }
            else if(s[i]==')' && q.top()=='('){
                q.pop();
            }
            else if(s[i]=='}' && q.top()=='{'){
                q.pop();
            }
            else if(s[i]==']' && q.top()=='['){
                q.pop();
            }
            else q.push(s[i]);
        }
        return q.empty();
    }
};

//Stack top added, removed if matched, returns emptiness