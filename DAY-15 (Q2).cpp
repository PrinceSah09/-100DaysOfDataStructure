class Solution {
public:
    int guessNumber(int n) {
        int num;
        int s=1,e=n;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(guess(mid)==0){
                num = mid;
                break;
            }
            else if(guess(mid)==-1){
                e = mid-1;
            }
            else s=mid+1;
        }
        return num;
    }
};
