class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        //Creating a set of pairs
        set<pair<int,int>>st;
        
        //In each iteration, we will insert the count of soilder and the indices of that column
        for(int i=0;i<mat.size();i++){

            //Here we will use 'count' function, from STL which returns the count of that particular number that is mentioned on the right-most parameter.
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            st.insert({cnt,i});
        } 
        
        //Finally, we will create a vector for storing the indexes of the weakest row. 
        vector<int>ans;
        for(auto it:st){
            if(k==0)break;
            ans.push_back(it.second);
            k--;
        }
        return ans;
    }
};
