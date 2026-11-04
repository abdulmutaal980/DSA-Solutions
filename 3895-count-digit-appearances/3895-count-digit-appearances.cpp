class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int res=0;
        int d=0;
        for (auto x:nums){
            int temp=x;
            while(temp!=0){
                d=temp%10;
                if (d==digit){
                    res++;
                }
                temp/=10;
            }
        }
        return res;
    }
};

