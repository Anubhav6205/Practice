/*A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.*/

class Solution {
public:
    bool checkPerfectNumber(int num) {
    int sum=0,i,j;
    for(i=1;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        cout<<"Perfect";
        return true;
    }
    else
    {
        cout<<"NO";
        return false;
    }
        return true;
        
    }
};