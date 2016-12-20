#include<stdio.h>
#include<string.h>
int strrindex(char s[], char t[]);

int main() {
  int result = strrindex("hello, world", "or");
  printf("result:%d\n", result);
}

int strrindex(char s[], char t[]) {
  int i, j, k;
  for(i= strlen(s)-1; i>=0; --i) {
    for(j=i,k=strlen(t)-1; j>=0 && k>=0 && s[j]==t[k]; --j, --k) {
      ;
    }
    if(k==-1 && j!=-1)
      return i;
  }
  return -1;
}
