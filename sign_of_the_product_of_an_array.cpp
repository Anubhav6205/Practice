/*There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).*/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
            int i;
    int count=0;
        int flag=0;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            count++;
        }
        else if(nums[i]<0)
        {
             count--;
            flag++;
        }
        else if(nums[i]==0)
        {
            return 0;
        }
        
    
    }
        if(flag%2==0)
        {
            return 1;
        }
        else
        {
            return -1;
        }

        
    }
};//completed