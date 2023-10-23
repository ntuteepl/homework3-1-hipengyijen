#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    char input[50];
    char answer[4];
    int r1=0,r2=0,same=0,temp=0;
    /*亂數*/
    int len= 0,c1 = 0,c2 = 0,c3 = 0,c4 = 0;
    /*檢查輸入的數字*/
  int i1 = 0,i2 = 0,i3 = 0,a = 0,b = 0;
  /*數字位置跟值*/
  int replay = 1,c5 = 0,replay_1 = 0;
  /*replay沒猜中繼續玩、repaly_1玩完了繼續嗎*/


    /*數字產生*/
    do
    {
        for(r1=0;r1<=3;r1++)
        {
            do
            {
                    same=0;
                    temp=rand()%10;
                    answer[r1]=temp+'0';
                    for(r2=0;r2<r1;r2++)
                    {
                        if(answer[r1]==answer[r2])
                            same=1;
                    }
            }
            while (same==1);
        }

    /*檢查玩家輸入*/

    do
    {
       a=0,b=0,replay=1;

        do
        {
            c1=0,c5=0;
            printf("請輸入4位數字:");
            scanf("%4s",input);
            len=strlen(input);

            if(len>4||len<4)
            {
                printf("您輸入的不是4位數字!");
                c1 = 1;
            }
            for(c2=0;c2<len;c2++)
            {
                if(input[c2]<48||input[c2]>57)
                {
                    printf("您輸入的非數字!");
                    c1=1;
                    break;
                }
            }
            for(c3=0;c3<=3;c3++)
            {
                for(c4=0;c4<c3;c4++)
                {
                    if(input[c3]==input[c4])
                    {
                        c1=1;
                        c5=1;
                        break;
                    }
                }
            }
            if(c5==1)
            {
                printf("數字重複!");
            }
            if(c1==1)
            {
                printf("請重新輸入...\n");
            }

        }
        while(c1==1);


/*檢查數字值跟位置*/
        for(i1=0;i1<=3;i1++)
        {
            if(input[i1]==answer[i1])
            {
                a++;
            }
        }
        printf("%dA",a);


        for(i2=0;i2<=3;i2++)
        {
            for(i3=0;i3<=3;i3++)
            {
                if(input[i2]==answer[i3]&&i2!=i3)
                {
                    b++;
                }
            }
        }
        printf("%dB\n",b++);

        if(a==4)
        {
            printf("您猜中了!\n");
            printf("繼續遊玩?(0為結束，大於1為繼續)");
            scanf("%d",&replay_1);

            if(replay_1>=1)
            {
                replay=0;
            }
            else
            {
                replay=0;
            }
        }

        }
     while(replay>=1);
    }
    while(replay_1>=1);

        printf("\n程式結束...");
        system("pause");




}
