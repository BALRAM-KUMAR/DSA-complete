**Strings :-  are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0’.
    
  // Declare and initialize the string
    string str1 = "Welcome to GeeksforGeeks!";
    // Initialization by raw string
    string str2("A Computer Science Portal");

//String Concatenation 
Approach: Using ‘+’ operator
  string result = str1 + str2;              Both O(1)
Approach: Using append function.
  cout<<str1.append(str2)<<endl;            Both sc and O(1)
Approach: Using loop
// Get the two Strings to be concatenated
// Declare new Strings to store the concatenated String
// Insert the first string into the new string      Sc=O(M+N)
// Insert the second string in the new string
// Print the concatenated string
#include <iostream>  
using namespace std;  
int main ()  
{  
string str1, str2, result; // declare string variables  
int i;  
cout <<"  Enter the first string: ";  
cin >> str1; // take string  
cout << "  Enter the second string: ";  
cin >> str2; // take second string  
// use for loop to enter the characters of the str1 into result string   
for ( i = 0; i < str1.size(); i++)  
{  
result = result + str1[i]; // add character of the str1 into result   
}   
  
// use for loop to enter the characters of the str2 into result string   
for ( i = 0; i < str2.size(); i++)  
{  
result = result + str2[i]; // add character of the str2 into result   
}  
cout << " The Concatenation of the string " << str1 << " and " << str2 << " is " <<result;  
return 0;  
}  

//another way
int main()
{
	char str1[100] = "Geeks", str2[100] = "World";
	char str3[100];
	int i = 0, j = 0;
	cout <<"\nFirst string: "<< str1;
	cout <<"\nSecond string: "<< str2;
	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	cout <<"\nConcatenated string: "<< str3;
	return 0;
}


//Check if a string is a substring of another
using STL:- 
O(N) and sc O(1)
int isSubstring(string s1, string s2)
{
//   s2.find(s1) searches for the first occurrence of the string s1 within the string s2.
// string::npos is a static member constant of the string class that represents a value indicating that no matches were found.
// != is the not-equal-to comparison operator.
// Therefore, if s2.find(s1) returns a value that is not equal to string::npos, it means that s1 was found in s2. In other words,
//   the if statement will be true if s1 is a substring of s2.
	if (s2.find(s1) != string::npos)
		return s2.find(s1);
	return -1;
}
int main()
{
	string s1 = "for";
	string s2 = "geeksforgeeks";
	int res = isSubstring(s1, s2);
	if (res == -1)
		cout << "Not present";
	else
		cout << "Present at index " << res;
	return 0;
}


using nested loop
#include <iostream>
#include <string>

bool isSubstring(const std::string& str, const std::string& substring) {
    int strLength = str.length();
    int subLength = substring.length();
    
    for (int i = 0; i <= strLength - subLength; i++) {
        bool found = true;
        for (int j = 0; j < subLength; j++) {
            if (str[i + j] != substring[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string str = "Hello, world!";
    std::string substring = "world";
    
    if (isSubstring(str, substring)) {
        std::cout << "Substring found!" << std::endl;
    } else {
        std::cout << "Substring not found!" << std::endl;
    }
    
    return 0;
}
tc O(N) nd O(1)
//An efficient solution is to use a O(n) searching algorithm like KMP algorithm, Z algorithm,
  discuss it later
  
  //3. Replace in String
  
  
  
  
  
  
  
  
  
  //4. finding the length of string
  Length of string without using any inbuilt methods: 
Below is the algorithm for finding the length of two strings:

1. SET LEN = 0 AND I = 0.
2. Repeat Steps 3 to 4 while STRING[I] is not NULL:
3. LEN = LEN + 1.
4. SET I = I + 1.
5. Exit.
  Length of string using inbuilt methods
  str.length()
  str.size()
  
  //5. Trim a String
  using stl tc(N) and sc(1)

#include <iostream>
#include <algorithm>
using namespace std;

// Function to remove all spaces from a given string
string removeSpaces(string str)
{
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

// Driver program to test above function
int main()
{
	string str = "g eeks for ge eeks ";
	str = removeSpaces(str);
	cout << str;
	return 0;
}

without using stl
#include <iostream>
using namespace std;

// Function to remove all spaces from a given string
void removeSpaces(string &str)
{
    // To keep track of non-space character count
    int count = 0;

    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ')
            str[count++] = str[i];
    }

    // Add an extra null character at the end
    str[count] = '\0';
    str.resize(count); // remove any additional characters
}

// Driver program to test above function
int main()
{
    string str = "g eeks for ge eeks ";
    removeSpaces(str);
    cout << str;
    return 0;
}

please compare above to this program
// An efficient C++ program to remove all spaces
// from a string
#include <iostream>
using namespace std;

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
	// To keep track of non-space character count
	int count = 0;

	// Traverse the given string. If current character
	// is not space, then place it at index 'count++'
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i]; // here count is
								// incremented
	str[count] = '\0';
}

// Driver program to test above function
int main()
{
	char str[] = "g eeks for ge eeks ";
	removeSpaces(str);
	cout << str;
	return 0;
}
