
#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s1,s2;
 cin>>s1>>s2;
            int len = s1.size();
            bool dp[len + 1][len + 1][len + 1];
            memset(dp, 0, sizeof(dp));

            for (int i = len - 1; i >= 0; i--) {
                for (int j = len - 1; j >= 0; j--) {
                    dp[i][j][1] = (s1[i] == s2[j]);
                    for (int l = 2; i + l <=len && j + l <= len; l++) {
                        for (int n = 1; n < l; n++) {
                            dp[i][j][l] |= dp[i][j][n] && dp[i+n][j+n][l-n];
                            dp[i][j][l] |= dp[i][j+l-n][n] && dp[i+n][j][l-n];
                        }
                    }
                }
            }
            cout<< (dp[0][0][len]==1?"TRUE":"FALSE");
            return 0;
        }