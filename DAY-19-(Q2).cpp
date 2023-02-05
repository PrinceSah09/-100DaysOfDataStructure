class Solution {
public:

    int firstoccr(vector<int>& nums, int target){
        int temp=-1;
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                temp = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return temp;
    }
    int lastoccr(vector<int>& nums, int target){
        int temp=-1;
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                temp = mid;
                s = mid+1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return temp;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstoccr(nums,target);
        int last = lastoccr(nums,target);
        nums.clear();
        nums.push_back(first);
        nums.push_back(last);
        return nums;
    }
};
