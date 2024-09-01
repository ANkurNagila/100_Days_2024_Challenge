class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> x;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k=k;

        for(auto it:nums){
            if(x.size()<k){
                x.push(it);
                continue;
            }

            if(x.top()<it){
                x.pop();
                x.push(it);
            }
        }
    }
    
    int add(int val) {
        if(x.size()<k)
            x.push(val);
            
        else if(x.top()<val){
            x.pop();
            x.push(val);
        }

        return x.top();
        
    }
};
