#include <stdio.h>
#include <stdbool.h>
int main()
{
int n;
scanf("%d", &n);
bool a=true;

for(int i=2;i<n;i++){
    if (n%i==0){
        a=false;
        }

}
if(a==false)
    printf("NO");
else
    printf("YES");

}

