class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++)
        {
            vector<int> v = ans.back();
            if(v[1] >= intervals[i][0])
            {
                
                cout<<ans.back()[0]<<" "<<ans.back()[1];
                //ans.back()[0] = min(ans.back()[0], intervals[i][0]);
                ans[ans.size()-1][1] = max(intervals[i][1], ans[ans.size()-1][1]);
            }
            else ans.push_back(intervals[i]);
        }
        return ans;
    }
};
