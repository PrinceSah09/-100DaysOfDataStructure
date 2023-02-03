class Solution {
public:
    bool isPerfectSquare(int num) {

        //Using Binary Search
        int s = 1 , e =num;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long int sq = mid*mid; 
            if(sq == num)return true;
            else if(sq > num) e = mid-1;
            else{
                s = mid+1;
            }
        }
        return false;

        // Brute Force
        // for(long long int i=1;i<=num;i++){
        //     if(i*i==num){
        //         return true;
        //     }
        // }
        // return false; 
    }
};
