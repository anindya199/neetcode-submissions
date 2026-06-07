class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int opt_cnt=0,min_cnt=0;
        int i;
        int l=0,r=k-1;

        for(i=0;i<=r;i++)
        {
            if(blocks[i]=='W')
                opt_cnt++;
        }
        min_cnt=opt_cnt;

        while(r<blocks.size()-1)
        {
            if(blocks[l]=='W')
                opt_cnt--;
            l++;
            r++;
            if(blocks[r]=='W')
                opt_cnt++;

            min_cnt=min(min_cnt,opt_cnt);
        }
        return min_cnt;
    }
};