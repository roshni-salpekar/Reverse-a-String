#include <bits/stdc++.h>
using namespace std;

// Method 1 - for loop 
void reverseUsingFor(string& str)
{
    int n = str.length();
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

//Method 2 - Using Recursion 
void reverse(string &str, int k)
{
    static int i = 0;
 
    // if the end of the string is reached
    if (k == str.length()) {
        return;
    }
 
    reverse(str, k + 1);
 
    if (i <= k) {
        swap(str[i++], str[k]);
    }
}

//Method 3 - String printed in reverse order
void reversePrinting(string str)
{
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}

int main(){
    string str = "abcd";
    reverseUsingFor(str);
    cout << str;
    return 0;
}
