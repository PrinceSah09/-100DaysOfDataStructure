class Solution {
public:
    int arrangeCoins(int n) {


        //Linear O(1)
        return int(sqrt((2*long(n))+0.25) - 0.5);
        // Exp: 
        // (k*(k+1))/2 <= n
        // k^2+k <= 2n
        // k^2 + k-2n <= 0
        // After calculation: k = sqrt(2n + 1/4) - 1/2


        //Binary Search O(log N)
        int temp=0, s=0, e=n;
        while(s<=e){
            long long mid = s+(e-s)/2;
            if((mid*(mid+1))/2 <= n){
                temp = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return temp;

        //Brute Force O(n)
        int cnt=0;
        long long int temp=0;
        for(int i=1;i<=n;i++){
            temp = temp+i+1;
            cnt++;
            if(temp>=n){
                break;
            }
        }
        return cnt;
    }
};
