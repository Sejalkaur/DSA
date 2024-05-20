//Link: https://www.geeksforgeeks.org/problems/count-digits5716/1
class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int count=0;
        int temp=n;
            while(temp>0){
                int lastD=temp%10;
                if(lastD > 0 && n % lastD==0){
                    count+=1;
                }
                temp=temp/10;
                
            }return count;
    }
};
