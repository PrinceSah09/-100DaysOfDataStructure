class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>mp;
        for(auto it:nums1){
            mp[it]++;
        }
        for(auto it:nums2){
            if(mp[it]>0){
                result.push_back(it);
                mp[it]--;
            }
        }
        return result;
    }
};  
