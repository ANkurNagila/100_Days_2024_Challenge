class MinStack {
    vector<int> arr,mini;
    int size;
    

public:
    MinStack() {
        size=0;
        mini.push_back(INT_MAX);
    }
    
    void push(int val) {
        arr.push_back(val);
        if(val<mini[size])
            mini.push_back(val);
        else
            mini.push_back(mini[size]);
        size++;
    }
    
    void pop() {
        arr.pop_back();  
        mini.pop_back();      
        size--;
    }
    
    int top() {
        return arr[size-1];
    }
    
    int getMin() {
        return mini[size];
    }
};
