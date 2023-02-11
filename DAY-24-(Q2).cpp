class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int s=0,e =int(sqrt(c));
        if(c==0 || c==1 || c==2 || c== 5)return true;
        while(s<=e){  
            if(pow(s,2) + pow(e,2) == c)return true;

            else if(pow(s,2) + pow(e,2) > c){
                e--;
            }
            else{
                s++;
            }
        }
        return false;
    }
};
