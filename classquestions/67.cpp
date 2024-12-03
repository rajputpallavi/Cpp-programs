/*Problem Statement: Spiral Traversal of a matrix in anti - clockwise Direction.

You are given a rectangular matrix, and your task is to return an array while traversing the matrix in spiral form (anticlock - wise).

Input format:

First line - Integer N, M (size of array / Matrix N*M) Second line - N*M space-separated integers representing the 2D array/Matrix.
Output format:

Print the elements of the matrix in spiral form.

Code constraints:

1 <= matrix.size(), matrix[0].size() <= 100 0 <= matrix[i][j] < = 100.

Sample test cases:

Input 1:

Output 1:

34

1 5 9 10 11 12 8 43: 4 3:

1 2 3 4

5 6 7 8

9 10

11

12*/
/*
#include <iostream>
#include <vector>
using namespace std;

void spiralTraversalAntiClockwise(int n, int m, const vector<vector<int>>& matrix) {
    vector<int> result;
    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top <= bottom && left <= right) {
        // Traverse downwards along the left boundary
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][left]);
        }
        left++; // Move the left boundary to the right

        // Traverse right along the bottom boundary
        if (top <= bottom) {
            for (int i = left; i <= right; i++) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--; // Move the bottom boundary up
        }

        // Traverse upwards along the right boundary
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary to the left
        }

        // Traverse left along the top boundary
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[top][i]);
            }
            top++; // Move the top boundary down
        }
    }
    

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m; // Read dimensions of the matrix

    vector<vector<int>> matrix(n, vector<int>(m));
    
    // Read matrix elements
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    spiralTraversalAntiClockwise(n, m, matrix);
    
    return 0;
}

*/

/*
#include <bits/stdc++.h>
// #include <string>
// #include <iostream>
// #include <algorithm>
using namespace std;

bool isana(string s,string t){
    if(s.length()!=t.length()) return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<(isana(s,t)?"True":"False")<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
#include <bits/stdc++.h>

class Time{
int hours;
int minutes;

public:
Time(){
hours=0;
minutes=0;
}
Time(int hours, int minutes){
this->hours=hours;
this->minutes=minutes;
}

void displayTime();

Time operator++();

Time operator++(int);
};

void Time::displayTime()

{
    int displayhours=hours%12;
    if (displayhours==0) displayhours=12;
    string period=(hours>=12)?"PM":"AM";
    cout<<setw(2)<<setfill('0')<<displayhours<<":"<<setw(2)<<setfill('0')<<minutes<<" "<<period<<endl;

}

Time Time::operator++()
{
    minutes++;
    if(minutes==60){
        minutes=0;
        hours++;
        if(hours==24){
            hours=0;
        }
    }
    return *this;

//Write your code here

}

Time Time::operator++(int)

{
    Time temp=*this;
    ++(*this);
    return temp;

//Write your code here

}

int main()
{
int h,m;
cin>>h;
cin>>m;
Time T1(h,m);
++T1;
T1.displayTime();
T1++;
T1.displayTime();
return 0;}
*/

//isomorphic
// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     bool isisomorphic(string s,string t){
//     vector <int> charToIndex_s(128);
//     vector <int> charToIndex_t(128);
//     for(int i=0;i<s.length();++i){
//         if (charToIndex_s[s[i]]!=charToIndex_t[t[i]]) return false;
//         charToIndex_s[s[i]]=i+1;
//         charToIndex_t[t[i]]=i+1;

//     }
//     return true;
//     }
// };

//reverse the vowel in string
// #include <bits/stdc++.h>
// using namespace std;
// class solution{
//     public:
//     string reverse(string s){
//         int left=0;
//         int right=s.length()-1;
//         while(left<=right){
//             while(left<=right && !isvowel(s[left])){
//                 left++;

//             }
//             while(left<=right && !isvowel(s[right])){
//                 right--;
//             }

//             swap(s[left++],s[right--]);
//         }
//         return s;


//     }


//     private:
//     bool isvowel(char c){
//         return c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U';
//     }
// };

// int main(){
//     string s;
//     cin>>s;
//     solution sol;
//     cout<<sol.reverse(s);
// }

//edit distance
// #include <bits/stdc++.h>
// using namespace std;
// class solution{
// public:
// int mindis(string w1,string w2){
//     int n=w1.size();
//     int m=w2.size();
//     vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//     for(int i=0;i<=n;i++) dp[i][0]=i;
//     for(int j=0;j<=m;j++) dp[0][j]=j;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(w1[i-1]==w2[j-1]){dp[i][j]=0+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j]=min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
//             }
//         }
//     }
//     return dp[n][m];

// }};

//power of two
// #include <iostream>
// using namespace std;
// class solution{
//     public:
//     bool poweroftwo(int n){
//         if (n<=0) return false;
//         while(n%2==0){
//             n=n/2;
//         }
//         return n==1;

//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     solution s;
//     cout<<(s.poweroftwo(n)?"yes":"no");
// }

//maximum69numbers
// #include <bits/stdc++.h>
// using namespace std;
// class solution{
//     public:
//     int max69num(int num){
//         string strnum=to_string(num);
//         for(char& ch:strnum){
//             if(ch=='6'){
//                 ch='9';
//                 break;
//             }
//         }
//         return stoi(strnum);
//     }
// };

// int main(){
//     int n;
//     cin>>n;
//     solution s;
//     cout<<s.max69num(n);
    
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, p;

//     // Correctly read the dimensions
//     cout << "Enter dimensions (n m p): ";
//     cin >> n >> m >> p;

//     // Declare matrices with correct dimensions
//     int m1[n][m];
//     int m2[m][p];  // m2 should have dimensions m x p
//     int result[n][p]; // Resultant matrix will have dimensions n x p

//     // Input elements for the first matrix
//     cout << "Enter elements of first matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> m1[i][j];
//         }
//     }

//     // Input elements for the second matrix
//     cout << "Enter elements of second matrix:\n";
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < p; j++) {
//             cin >> m2[i][j];
//         }
//     }

//     // Initialize the result matrix to 0
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             result[i][j] = 0;
//         }
//     }

//     // Matrix multiplication
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             for (int k = 0; k < m; k++) { // Use k < m
//                 result[i][j] += m1[i][k] * m2[k][j];
//             }
//         }
//     }

//     // Output the result
//     cout << "Multiplication of two matrices:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < p; j++) {
//             cout << result[i][j] << " "; // Add space for readability
//         }
//         cout << endl; // New line after each row
//     }

//     return 0;
// }


//rotate an array
//  #include <iostream>
//  #include <bits/stdc++.h>
// using namespace std;
// void rotate(vector<int>&nums,int k){
//     int n=nums.size();
//     k=k%n;
//     reverse(nums.begin(),nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k,nums.end());

// } 

//maxdepth
  #include <iostream>
 #include <bits/stdc++.h>
using namespace std;
int depth(string s){
    int maxdepth=0;
    int currentdepth=0;
    for(char c:s){
        if(c=='('){
            currentdepth++;
            maxdepth=max(currentdepth,maxdepth);
        } else if(c==')'){
            currentdepth--;
        }
    }
    return maxdepth;
}