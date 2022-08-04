/*We distribute some number of candies, to a row of n = num_people people in the following way:

We then give 1 candy to the first person, 2 candies to the second person, and so on until we give n candies to the last person.

Then, we go back to the start of the row, giving n + 1 candies to the first person, n + 2 candies to the second person, and so on until we give 2 * n candies to the last person.

This process repeats (with us giving one more candy each time, and moving to the start of the row after we reach the end) until we run out of candies.  The last person will receive all of our remaining candies (not necessarily one more than the previous gift).

Return an array (of length num_people and sum candies) that represents the final distribution of candies.*/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
            vector<int>arr(num_people,0);
    int cnt=1;
    int i=0;
   // num_people.assign(num_people.size(), 0);
    while(candies>0 && candies>=cnt)
    {
        arr[i]+=cnt;
         candies-=cnt;
        cnt++;
       
        i=(i+1)%num_people;
       
    }
    if(candies>0)
    {
            
    
        arr[i]+=candies;
        
    }
 
        return arr;
        
    }
};