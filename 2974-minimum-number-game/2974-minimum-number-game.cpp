class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> y;
     priority_queue<int , vector<int> , greater<int> > x(nums.begin(),nums.end());
     while(x.empty()!= 1){
        int one = x.top();
        x.pop();

        int two = x.top();
        x.pop();

        y.push_back(two);
        
        y.push_back(one);
     }
     return y;
    }
};