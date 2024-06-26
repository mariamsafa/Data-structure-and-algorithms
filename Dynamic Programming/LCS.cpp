/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int LCS[l1 + 1][l2 + 1];
   // for(int i=0; i<l1; i++)
   // {
       // LCS[i][0]=0;
    //}

   // for(int i=0; i<l2; i++)
    //{
       // LCS[0][i]=0;
    //}

    for(int i=0; i<=l1; i++)
    {
        for(int j=0; j<=l2; j++)
        {
           if (i == 0 || j == 0)
            {
                 LCS[i][j] = 0;
            }
            else if(s1[i-1]==s2[j-1])
            {
                LCS[i][j]= LCS[i - 1][j - 1] + 1;
            }

            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }

        }
    }
    cout<<LCS[l1][l2]<<endl;
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();

    // 2D array to store the length of LCS and the actual LCS
    pair<int, string> LCS[l1 + 1][l2 + 1];

    for (int i = 0; i <= l1; i++) {
        for (int j = 0; j <= l2; j++) {
            if (i == 0 || j == 0) {
                LCS[i][j] = {0, ""};
            } else if (s1[i - 1] == s2[j - 1]) {
                LCS[i][j] = {LCS[i - 1][j - 1].first + 1, LCS[i - 1][j - 1].second + s1[i - 1]};
            } else {
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
            }
        }
    }

    // Print the length of LCS
    cout << "Length of LCS: " << LCS[l1][l2].first << endl;

    // Print the actual LCS
    cout << "LCS: " << LCS[l1][l2].second << endl;

    return 0;
}

