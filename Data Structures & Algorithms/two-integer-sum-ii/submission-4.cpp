class Solution {
public:





// method 3: optimal

vector<int> twoSum(vector<int> &numbers, int target){
    vector<int> ans;
    int left =0, right = numbers.size()-1;

    while(left < right){
        int sum = numbers[left] + numbers[right];
        if(sum == target){
            return {left + 1, right + 1};
        }
        if(sum < target){
            left++;
        }else{
            right--;
        }
    }
}


// method 2:
// vector<int> twoSum(vector<int>& numbers, int target){
//     vector<int> ans;
//     for(int i=0; i < numbers.size()-1; i++){
//         for(int j = i+1; j < numbers.size(); j++){
//             if(numbers[i] + numbers[j] == target){
//                 return {i+1, j+1};
//             }
//         }
//     }   
// }



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
