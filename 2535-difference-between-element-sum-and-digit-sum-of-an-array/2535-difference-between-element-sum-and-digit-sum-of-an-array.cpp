class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while (n>0){
            sum = sum + n%10;
            n=n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elesum = 0;
        int abssum = 0;
        for(int i = 0 ; i<nums.size(); i++){
            elesum = elesum + nums[i];
            abssum = abssum + digitSum(nums[i]);
        }
        return elesum-abssum;
    }
};