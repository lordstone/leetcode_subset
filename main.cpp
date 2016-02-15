class Solution {
public:
    /**
     * @param S: A set of numbers.
     * @return: A list of lists. All valid subsets.
     */
    vector<vector<int> > subsets(vector<int> &nums) {
    	// write your code here
    	std::sort(nums.begin(), nums.end());
    	vector<vector<int>> res;
    	res.push_back(vector<int> (0));
    	for(int i = 0; i < nums.size(); i ++){
    	    /*
    	    int count = 1;
    	    while(i < nums.length() - 1 && nums[i] == nums[i+1]){
    	        i ++;
    	        count ++;
    	    }
    	    */
    	    int size = res.size();
    	    for(int j = 0; j < size; j ++){
    	        vector<int> out = res[j];
    	        //for(int k = 0; k < count ; k ++){
    	            out.push_back(nums[i]);
    	            res.push_back(out);
    	        //}//end for k
    	    }//end for j
    	}//end for i
    	return res;
    }
    
    vector<vector<int> > subsetsWithDup(const vector<int> &S) {
        // write your code here
        vector<int> nums = S;
        std::sort(nums.begin(), nums.end());
    	vector<vector<int>> res;
    	res.push_back(vector<int> (0));
    	for(int i = 0; i < nums.size(); i ++){
    	    
    	    int count = 1;
    	    while(i < nums.size() - 1 && nums[i] == nums[i+1]){
    	        i ++;
    	        count ++;
    	    }
    	    
    	    int size = res.size();
    	    for(int j = 0; j < size; j ++){
    	        vector<int> out = res[j];
    	        for(int k = 0; k < count ; k ++){
    	            out.push_back(nums[i]);
    	            res.push_back(out);
    	        }//end for k
    	    }//end for j
    	}//end for i
    	return res;
    }
};
