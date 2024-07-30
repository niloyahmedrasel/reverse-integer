class Solution {
public:
    int reverse(int x) {
        long long reminder;
        long long ans=0;
        while(x!=0 ){
            reminder = x%10;
            x = x/10;
            ans = (ans*10) + reminder;
            
            if (ans > INT_MAX || ans < INT_MIN) {
                return 0;
            }
        }
        return ans;
    }
};
