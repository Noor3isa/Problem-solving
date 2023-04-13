#include <bits/stdc++.h>
#define gofast() ios_base::sync_with_stdio(false);

using namespace std;

int main()
{
      string s;
      cin>>s;
      int n = s.length();
      int kevin_score=0, stuart_score=0;
      for(int i=0; i<n; i++){
        for(int k=i; k<n; k++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                kevin_score++;
            else
                stuart_score++;
        }
      }
      cout<<"kevin "<<kevin_score<<"\n";
      cout<<"stuart "<<stuart_score<<"\n";
      cout<<"Thanks for playing";

}
