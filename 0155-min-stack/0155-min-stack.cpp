class MinStack {
    stack<int>st1;
    stack<int>st2;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st1.empty()){
            st1.push(value);
            st2.push(value);
        }else{
            st1.push(value);
            st2.push(min(value,st2.top()));
        }
    }
    
    void pop() {
        if(st1.empty()) return;
        else{
            st1.pop();
            st2.pop();
            return;
        }
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */