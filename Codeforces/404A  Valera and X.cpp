#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define lop(i,n)      for(int i=1; i<=n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define minint(a,b,c) (a<b)?(a<c)?a:c :(b<c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
map<int,int>mp;
map<int,int>::iterator it;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m;
int arr[100000],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
char str[305][305],st[305];
queue<int>q;
vector<int>vec;
char ch,s;

int check(int ,int)
{

}

int main()
 {
     cin>>n;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             cin>>str[i][j];
         }
     }
     ch=str[1][1];s=str[1][2];
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(((ch!=str[i][j])&&(i==j))||((ch!=str[i][j])&&(i+j==n+1))){cout<<"NO"<<endl;return 0;}
             if(((s==str[i][j])&&(i==j))||((s==str[i][j])&&(i+j==n+1))){cout<<"NO"<<endl;return 0;}
             if((s!=str[i][j])&&((i!=j)&&(i+j!=n+1))){cout<<"NO"<<endl;return 0;}

         }

     }
     cout<<"YES"<<endl;


    return 0;
  }


