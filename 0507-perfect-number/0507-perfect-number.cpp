class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1){
            return 0;
        }
        int sum = 0;
           for (int i =1; i<num; i++){
            if(num%i == 0){
                sum = sum +i;
            }
           }
            if(sum == num){
                return 1;
            }
            return 0;
           
        }
};