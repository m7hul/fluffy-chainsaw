class Solution {
public:
    int sign(int n){
        if(n>0){return 1;}
        if(n==0){return 0;}
        return -1;
    }
    int arraySign(vector<int>& nums) {
        int sig = 1;
        for( int i = 0 ; i<nums.size(); i++){
            sig = sig*sign(nums[i]);
        }
        return sig;
    }
};