class Node{
public:    
    long long val;
    Node* next;
    Node():val(1e10),next(nullptr){}
    Node(long long val) :val(val),next(nullptr) {}
};
class MinStack {
public:
    Node* topp=new Node();
    Node* topMin=new Node();
    MinStack() {
        
    }
    
    void push(long long val) {
        Node* tmp=new Node(val);
        Node* tmpMin=new Node(min(val,topMin->val));
        tmp->next=topp;
        topp=tmp;
        tmpMin->next=topMin;
        topMin=tmpMin;
    }
    
    void pop() {
       topp=topp->next; 
       topMin=topMin->next; 
    }
    
    int top() {
        return topp->val;
    }
    
    int getMin() {
        return topMin->val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */