class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> ans;
        int num1, num2, sum;
       for(int i=0; i < numbers.size(); i++){
        sum = 0;
         num1 = numbers[i];
        for(int j = 0; j < numbers.size(); j++){
                if(i != j && j > i){
                 num2 = numbers[j];
                }
            sum = num1 + num2;
            if(sum == target && j > i){
                return {i+1,j+1};
            }
        }
       }
    
        

    }
};
