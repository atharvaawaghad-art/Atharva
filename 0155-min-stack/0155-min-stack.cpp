class MinStack {
public:
    vector<pair<int,int>> items;
    MinStack() {
        
    }
    
    void push(int value) {
        if (items.size()==0){
            items.push_back({value,value});
            
        }
        else{
            int mini=min(items.back().second,value);
            items.push_back({value,mini});
        }
        
    }
    
    void pop() {
        items.pop_back();
    }
    
    int top() {
        return items.back().first;
    }
    
    int getMin() {
        return items.back().second;
    }
};

