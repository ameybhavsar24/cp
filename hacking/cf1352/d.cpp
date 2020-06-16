#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int MxN = 1e9;

int main(){
   int q;
   cin >> q;
   while(q--){
      int n, aa = 0, b = 0, move = 0, f = 0, s = 0;
      int bt[200000];
      memset(bt, 0, sizeof(bt));
      bool st = 1, flag = 1;
      cin >> n;
      int a[n+5];
      int i = 0, j = n-1;
      for(int i=0; i<n; ++i)   cin >> a[i];
      while(flag){
         if (st){
            st = 1 - st;
            f = 0;
            for(i; i<n; ++i){
               if (bt[i]==1){
                  if (f!=0) ++move;
                  flag = 0;
                  break;
               }
               else{
                  bt[i] = 1;
                  f+=a[i];
                  aa+=a[i];
                  if (f>s){
                      ++i;
                     ++move;
                     break;
                  }
               }
            }
         }
         else{
            st = 1 - st;
            s = 0;
            for(j; j>=0; --j){
               if (bt[j]==1){
                  flag = 0;
                  if (s!=0)
                    ++move;
                  break;
               }
               else{
                  bt[j] = 1;
                  s+=a[j];
                  b+=a[j];
                  if (s>f){
                      --j;
                     ++move;
                     break;
                  }
               }
            }
         }
      }
      cout << move << " "<< aa << " " << b << endl;
   }
}
    
