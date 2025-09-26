class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int last=stoi(tokens[0]);
        stack<int>st;
        for(int i=1;i<tokens.size();i++){
            if(tokens[i]=="+"){
                last=(st.top()+last);
                st.pop();
               
            }
            else if(tokens[i]=="-"){
                last=(st.top()-last);
                st.pop();
    
            }
            else if(tokens[i]=="/"){
                last=(st.top()/last);
                st.pop();
                
            }
            else if(tokens[i]=="*"){
                last=(st.top()*last);
                st.pop();
              
            }
            else {
                 st.push(last);
                last=stoi(tokens[i]);  
            }

        }
        return last;
    }
};