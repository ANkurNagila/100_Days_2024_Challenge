class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> x;

        for(auto it:tokens){
            if(it=="+"){
                int ele = x.top();
                x.pop();
                ele+=x.top();
                x.pop();

                x.push(ele);
            }
            else if(it=="-"){
                int ele = x.top();
                x.pop();
                ele=x.top()-ele;
                x.pop();

                x.push(ele);
            }
            else if(it=="*"){
                int ele = x.top();
                x.pop();
                ele*=x.top();
                x.pop();

                x.push(ele);

            }
            else if(it=="/"){
                int ele = x.top();
                x.pop();
                ele=x.top()/ele;
                x.pop();

                x.push(ele);

            }
            else{
                int temp=stoi(it);
                x.push(temp);
            }
            //cout<<x.top()<<endl;
        }

        return x.top();
        
    }
};
