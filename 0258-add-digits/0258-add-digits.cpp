class Solution {
public:
    int kuchbhi(int num){
        int sum = 0;
        while(num>0){
            sum  = sum + num%10;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum = kuchbhi(num);
        while(sum>=10){
           sum= kuchbhi(sum);
        }
        return sum;
                
        
    }
};