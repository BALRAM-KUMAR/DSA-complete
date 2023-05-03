bool areRotations(string s1,string s2)
    {
        // Your code here
     int n = s1.length();
    
    // Concatenate the string with itself
    s1 = s1 + s1;
    
    // Generate all rotations of the string
    for (int i = 0; i < n; i++) {
        string rotatedString = s1.substr(i, n);
        if(rotatedString==s2)
        {
            return true;
        }
    }
    return false;
         
    }

both o(n)
     Input:
      geeksforgeeks
      forgeeksgeeks
     Output: 
      1
