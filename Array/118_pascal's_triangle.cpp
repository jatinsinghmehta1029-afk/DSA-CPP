class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>> answer;
    for(int j=0;j<numRows;j++){
        vector<int> row(j+1);
        for(int i=0;i<=j;i++){
        if(i==0){
            row[i]=1;
        }
        else if(i==j){
            row[i]=1;
        }
        else{
            row[i]=answer[j-1][i-1]+answer[j-1][i];
        }
    
        }answer.push_back(row);}return answer;
    }
};