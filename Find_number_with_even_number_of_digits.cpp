class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int digit=nums[i];

            int n=0 ; // count number of digits in a number
            while(digit > 0){
                 digit= digit/10;
                 n++; 
            }
            if(n%2==0){
                count++;// mtlb ek no. hnn jo even no. of digits rakhta h
            }
        }
        return count;
    }
};