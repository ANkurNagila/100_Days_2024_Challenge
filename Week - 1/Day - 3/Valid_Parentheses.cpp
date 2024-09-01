class Solution {
public:
    bool isValid(string s) {
        stack<char> x;

        for(auto it:s){
            if(x.size()==0){
                if(it==']' || it=='}' || it==')')
                    return false;
                x.push(it);
            }
            else{
                if(it=='[' || it=='{' || it=='('){
                    x.push(it);
                }
                else{
                    if((it==')' && x.top()=='(') || (it=='}' && x.top()=='{' )|| (it==']' && x.top()=='['))
                        x.pop();
                    else
                        return false;
                }
            }
        }

        return x.size()==0;
        
    }
};
