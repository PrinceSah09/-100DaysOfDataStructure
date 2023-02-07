class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x,y;
        //Creating two pointer
        int s=0,e=numbers.size()-1;
        while(s<=e){
            if(numbers[s]+numbers[e]==target){
                x = s+1;
                y = e+1;
                break;
            }
            else if(numbers[s]+numbers[e]>target){
                e--;
            }
            else{
                s++;
            }
        }
        numbers.clear();
        numbers.push_back(x);
        numbers.push_back(y);
        return numbers;
    }
};
