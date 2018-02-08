#include <cstdio>
#include <cstring>
#define N 16000003
bool hash[N];
char w[N];
int id[500];
int main()
{
    int n,nc,i,j;
    while(~scanf("%d%d",&n,&nc))
    {
        memset(hash,false,sizeof(hash));
        memset(id,-1,sizeof(id));
        int cnt=0;
        scanf("%s",w);
        int len=strlen(w);
        for(i=0;i<len&&cnt<nc;i++)
        {
            if(id[w[i]]!=-1)continue;
            id[w[i]]=cnt++;
        }
        int ans=0;
        for(i=0;i<len-n+1;i++)
        {
            int s=0;
            for(j=1;j<i+n;j++)
            {
                s=s*nc+id[w[j]];
            }
            if(hash[s]) continue;
            ans++;
            hash[s]=true;
        }
        printf("%d\n",ans);
    }
}
