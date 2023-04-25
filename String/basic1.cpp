//6. Reverse and Rotation of a String
Generate all rotations of a given string
as example :
 Input : S = "geeks"
Output : geeks
         eeksg
         eksge
         ksgee
         sgeek
  Approach:- 
void printRotatedString(char str[])
{
	int n = strlen(str);
	char temp[2*n + 1];
	strcpy(temp, str);
	strcat(temp, str);
	for (int i = 0; i < n; i++)
	{
		for (int j=0; j != n; j++)
			cout<<temp[i+j];
		printf("\n");
	}
}
int main()
{
  //sc=O(N)
  //tc=o(N2)
	char str[] = "geeks";
	printRotatedString(str);
	return 0;
}

Approach 2: with same tc and sc
void printRotatedString(char str[])
{
	int len = strlen(str);
	char temp[len];
	for (int i = 0; i < len; i++)
	{
		int j = i; 
		int k = 0;
		while (str[j] != '\0')
		{
			temp[k] = str[j];
			k++;
			j++;
		}
		j = 0;
		while (j < i)
		{
			temp[k] = str[j];
			j++;
			k++;
		}

		printf("%s\n", temp);
	}
}
int main()
{
	char str[] = "geeks";
	printRotatedString(str);
	return 0;
}


//b) Reverse a String:
void reverseStr(string& str)
{
  //sc O(1) and tc=o(n)
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

Approach:-  inbuilt method
  reverse(str.begin(), str.end());

//7.substring..............................................................................substring
A substring is a contiguous part of a string, i.e., a string inside another string.

In general, for an string of size n, there are n*(n+1)/2 non-empty substrings.
  for example string str="geeks"
substring starting with :-
g----->g, ge, gee, geek, geeks,
e----->e, ee, eek, eeks,
e----->e, ek, eks,
k----->k, ks, 
s----->s
//8.subsequence.......................................................................subsequence

A subsequence is a sequence that can be derived from another sequence by removing zero or more elements, without changing the order of the remaining elements.

More generally, we can say that for a sequence of size n, we can have ((2^n)-1) non-empty sub-sequences in
For the same above example, there are 15 sub-sequences. They are:
          String "geeks"
Subsequences of length 1:- g, e, e, k, s,
Subsequences of length 2:- ge, ge, gk, gs, ee, ek, es, ek, es, ks,
Subsequences of length 3:- gee, gek, ges, gek, ges, gks, eek, ees, eks, eks,
Subsequences of length 4:- geek, gees, eeks,
Subsequences of length 2:- geeks


//9.Binary String
A Binary String is a special kind of string made up of only two types of characters, such as 0 and 1.
For Example:  

Input: str = "01010101010"
Output: Yes, it is a Binary String

Input: str = "geeks101"
Output: No, it is not a Binary String
