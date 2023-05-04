Approach 1:
 1. generate all possible substring 
 2. check each substring is palindrome or not
 3. which palindrome has larger in size retrun that string
 time complexity : for generating string n2
                and for checking palindrome n then total n3
                
                
                
Approach 2: DP
Approach 3: odd and even length 

 string longestPalin (string s) {
        // code here
        int start = 0;
    int maxLen = 1;
    for (int i = 1; i < s.length(); i++) {
        // even
        int l = i - 1;
        int r = i;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                maxLen = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
        // odd
        l = i - 1;
        r = i + 1;
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                maxLen = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    }
    return s.substr(start, maxLen);
    }
    
time o(N) and space 1
   
