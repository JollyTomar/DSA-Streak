class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for(int i=0; i<nums.size(); i++){
            sum1 += nums[i];


            int num = nums[i];
            while(num>0){
                int val = num % 10;
                sum2 +=  val;
                num  = num / 10;
            }
        }
        int fsum(sum1-sum2);
        return fsum;
    }
};