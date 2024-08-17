//Link: https://www.geeksforgeeks.org/problems/subset-sums2234/1
public:
    void f(int ind, int sum, vector<int> &arr, int n, vector<int> &sumSubset){
        //base-case:
        if(ind==n){
            sumSubset.push_back(sum);
            return;
        }
        //pick
        f(ind+1, sum+arr[ind], arr, n, sumSubset);
        //not-pick
        f(ind+1, sum, arr, n, sumSubset);
    }
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> sumSubset;
        f(0, 0, arr, n, sumSubset);
        sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
