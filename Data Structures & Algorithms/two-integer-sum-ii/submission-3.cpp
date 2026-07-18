class Solution {
public:
// method 2:

vector<int> twoSum(vector<int>& numbers, int target){
    vector<int> ans;
    for(int i=0; i < numbers.size()-1; i++){
        for(int j = i+1; j < numbers.size(); j++){
            if(numbers[i] + numbers[j] == target){
                return {i+1, j+1};
            }
        }
    }   
}






    // vector<int> twoSum(vector<int>& numbers, int target) {
    //    vector<int> ans;
    //     int num1, num2, sum;
    //    for(int i=0; i < numbers.size(); i++){
    //     sum = 0;
    //      num1 = numbers[i];
    //     for(int j = 0; j < numbers.size(); j++){
    //             if(i != j){
    //              num2 = numbers[j];
    //             }
    //         sum = num1 + num2;
    //         if(sum == target && j > i){
    //             return {i+1,j+1};
    //         }
    //     }
    //    }
    
        

    // }
};
