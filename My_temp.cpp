#include<iostream>
// We have to include all the required header file's (it's automaticaly detected by the compiler at the compiling time.)
#include<bits/stdc++.h>
// We have to try to make some sorcut's and uses in our program.
using namespace std;
using ll=long long;
#define fl(i,n) for(int i=0;i<n;i++)
// Main_function
int main()
{
    // we have to make sure that you must know about the following functions.
    // read it and judge my current skills about c/c++ gcc-9.2.0 
    ll n=484;
    // using to_string() function you have to convert integer to string.
    cout<<to_string(n) << endl; // 484

    // string binary = bitset<no_of_bits>(no_which_you_have_to_convert).to_string();
    // you have to get a binary of a decimal number as a string format.
    string binary = bitset<10>(n).to_string();
    cout<<binary<<endl; // 0111100100

    // Convert String to number format.
    // https://www.geeksforgeeks.org/converting-string-to-number-and-vice-versa-in-c/
    string s = "546184";
    cout<<stoi(s)<<endl; // 546184
    // for more just click the above link.

    // To reverse a string.
    string str="anoopgupta_cbsc";
    reverse(str.begin(), str.end());
    cout<<str<<endl; // csbc_atpugpoona

    // use str.length() to get the length of the string.
    cout<<str.length()<<endl; // 15

    // swap function.
    ll x = 234;
    ll y = 546;
    swap(x,y);
    cout<<x<<" "<<y<<endl; // 546 234

    // get min and max of two number's.
    x=4,y=6;
    cout<<min(x,y)<<" "<<max(x,y)<<endl; // 4 6

    // get min./max. number of an array.
    int a[] = {2,1,4,3,2,2};
    // or,
    vector<int> v = {2,1,4,5,5,5,5};
    cout<<*min_element(a, a + (sizeof(a)/sizeof(a[0])))<<" "; // 1
    // or,
    cout<<*max_element(v.begin(), v.end())<<endl; // 5


    // Also you have to get sum of all the elements of the vector/array by accumulate function.
    cout<< accumulate(a, a + (sizeof(a)/sizeof(a[0])),0)<<" "; // 14
    // or,
    cout<< accumulate(v.begin(), v.end(),0)<<endl; // 27


    // And also you have to count the occurrency of an elements in an array.
    cout<<count(a, a + (sizeof(a)/sizeof(a[0])),2) << " "; // 3
    cout<<count(v.begin(), v.end(),5)<<endl; // 4
    // anoopgupta_cbsc.
    // Thank you bhaiya :) 
}
// end_of_main_function



// navneetguptacse...
// !...GOOD...!
// Keep going ... And try some contest problems to see your ability where you'r stand globaly...!