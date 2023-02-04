class Solution {
public:
    int mySqrt(int x) {
        int s=1,e=x;
        int ans=0;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long sq = mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq>x){
                e = mid -1;
            }
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
    }
};
