class Solution {
public:
    bool checkPerfectNumber(int num) {
            vector<int> f;
            for(int i =1 ; i<num ; i++){
                if(num%i == 0){
                    f.push_back(i);
                }
            } 
        int sum = 0;
        for(auto it : f){
            sum = sum + it;
        }
        if( sum == num){
            return 1;
        } 
        return 0;
        }
};