// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        // Binary Search (Accepted)
        int s=1,e=n,temp;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(isBadVersion(mid)==true){
                temp = mid;
                e = mid-1;
            }
            else if(isBadVersion(mid)==false){
                s = mid+1;
            } 
        }
        return temp;

        // Brute Force (TLE)
        for(int i=0;i<n;i++){
            if(isBadVersion(i)){
            return i;
            }
        }
        return n;
    }
}; 
