Question
Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

 Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.
  
  

Solution
long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        
    if(x==0)
    return x;
   long long int low=1,high=x,ans;
   while(low<=high){
       long long int mid=(low+high)/2;
       long long int sqr=mid*mid;
       if(sqr==x){
           return mid;
       }
       else if(sqr<x){
           ans=mid;
           low=mid+1;
       }
       else{
           high=mid-1;
       }
   }
   return ans;
}
