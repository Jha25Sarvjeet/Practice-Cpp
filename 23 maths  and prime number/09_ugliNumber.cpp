/*An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

 */
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  bool isUgly(int n) {
        if(n==0)return false;
        while(n%2==0)n=n/2; 
        while(n%3==0)n=n/3; 
        while(n%5==0)n=n/5;
        return (n==1); 
    }
int main(){
    int n;
    cout << "enter number" << endl;
    cin >> n;
    if(isUgly(n))cout<<"true"<<endl;
    else cout<<"false"<<endl;
}