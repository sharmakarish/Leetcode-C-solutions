class MyStack {
public:
    queue <int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            int ans = q1.front();
            q1.pop();
            q2.push(ans); //q2 me q1 ke sare elements daal diye 1 2 3 
        }
        q1.push(x); // 5 
        while(!q2.empty()){
            int move = q2.front();
            q2.pop();
            q1.push(move); //q1 me q2 ke sare elements wapis //5 1 2 3 
        }
        
    }
    
    int pop() {
          int result = q1.front();
          q1.pop();
          return result;
    
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */