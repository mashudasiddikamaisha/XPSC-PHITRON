class Solution{
public:
	int search(string pat, string txt) {
	    int n = pat.size(), m=txt.size(), res=0;
	    int l=0,r=0, cnt=0;
	    map<char,int> x,y;
	    for(auto c:pat)
	    {
	       x[c]++;
	    }
	    while(r<m)
	    {
	        y[txt[r]]++;
	        if(r-l+1==n)
	        {
	            bool flg=true;
	            for(auto a:x)
	            {
	                if(y[a.first]!=a.second)
	                {
	                    flg=false;
	                    break;
	                }
	            }
	            if(flg) cnt++;
	            y[txt[l]]--;
	            l++, r++;
	        }
	        else r++;
	    }
	    return cnt;
	}

};
