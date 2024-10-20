//Link: https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-nth-root-of-m
long long power(int x, int y) {
    long long product = 1; // Use long long to prevent overflow
    for (int i = 0; i < y; i++) {
        product *= x;
        // If at any point product exceeds m, we can stop early
        if (product > 1e9) return product; // Prevent overflow by early stopping
    }
    return product;
}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low = 1;
	    int high = m;
	    
	    while(low <= high){
	        int mid = (low+high)/2;
	        
	        if(power(mid, n)==m)return mid;
	        
	        if(power(mid, n)>m){
	            high = mid-1;
	        }
	        else{
	            low = mid+1;
	        }
	    }
	    return -1;
	} 
