/**
 * Problem URL : http://www.spoj.com/problems/ONP/
 * Author : Aman Pratap Singh
 * Language : C++
 * Compiler : G+
 */
 
#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
     int t;
     cin >> t;
     
     for(int z = 0; z < t; z++) {
         string str;
         
         cin >> str;
         stack<char> s;
         
         string onp = "";

         for (int i = 0; i < str.length(); i++) {
             if(isalpha(str[i])) {
                 onp += str[i];
             }
             
             else if(str[i] == '(') {
                 s.push(str[i]);
             }
             
             else if(str[i] == ')') {
                 while(s.top() != '(') {
                     onp += s.top();
                     s.pop();
                 }
                 s.pop();
             }
             
             else if (str[i] == '^') {
                 s.push(str[i]);
             }
             
             else if (str[i] == '*' || str[i] == '/') {
                 while(s.top() == '^' || s.top() == '*' || s.top() == '/') {
                     onp += s.top();
                     s.pop();
                 }
                 s.push(str[i]);
             }
             
             else if (str[i] == '+' || str[i] == '-') {
                 while(s.top() == '^' || s.top() == '*' || s.top() == '/' || s.top() == '+' || s.top() == '-') {
                     onp += s.top();
                     s.pop();
                 }
                 s.push(str[i]);
             }
         }
         
         while(!s.empty()) {
             onp += s.top();
             s.pop();
         }
         
         cout << onp << endl;
     }
     
     return 0;
}