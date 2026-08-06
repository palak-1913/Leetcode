class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="C" && operations[i]!="D"&& operations[i]!="+") st.push(stoi(operations[i]));

            else{
                if(st.size()>=1 && operations[i]=="C") st.pop();
                else if(st.size()>=1 && operations[i]=="D"){
                    int prev = st.top();
                    int ans = 2*prev;
                    st.push(ans);
                }

                else if(st.size()>=2 && operations[i]=="+"){
                    int val1 = st.top();
                    st.pop();
                    int val2 =  st.top();
                    
                    st.push(val1);
                    int ans = val1 + val2;
                    st.push(ans);
                }
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};