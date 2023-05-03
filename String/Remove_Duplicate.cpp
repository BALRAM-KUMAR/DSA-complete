Approach:1
tc(N) and sc(logn)
string removeDuplicates(string str) {
	    // code here
	    ordered_set<char> take;
	    for(int i=0;i<str.length();i++){
	        take.insert(str[i]);
	    }
	    int k = take.size();
        int j = 0;
       for (char x: take) {
         str[j++] = x;
        }
        return str;
	}
