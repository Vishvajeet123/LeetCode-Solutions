class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     vector<int>ans(nums1.size());

        
        
        
        
        int i=0;
        int n1=0;
        int n2=0;
        while (n1<m   &&  n2<n)
        {
            if (nums1[n1]>nums2[n2])
            {
                ans[i]=nums2[n2];
                i++;
                n2++;
            }
            else 
            {
                ans[i]= nums1[n1];
                n1++;
                i++;
            }
            
        }
        
        
        while (n1<m)
        {
            ans[i]= nums1[n1];
        i++;
            n1++;
        }
        
        
        while (n2<n)
        {
            ans[i]= nums2[n2];
        i++;
            n2++;
        }
        
        nums1=ans;
    }
};