class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size());
        stack<int> st;
    
        for(int i=0;i<temperatures.size();i++){
            
            while(!st.empty()&& temperatures[st.top()]<temperatures[i]){
                int index=st.top();
                st.pop();
                answer[index]=i-index;

                
            }
           st.push(i);
           


        }return answer;
    }
};