#include<stdio.h>
#include<string.h>

struct player{
    int  id;
    char name[50];
    int  score;
    char skill[20];
};

int main(){
    int N,i,j;

    printf("enter the number of players: ");
    scanf("%d", &N);

    struct player players[N]
    int total = 0;

    for(i = 0; i < N; i++){
        printf("enter ID, name, and score: ");
        scanf("%d %49s %d", &players[i].id, players[i].name, &players[i].score);
        total += players[i].score;

        if(players[i].score >= 80)
        strcpy(players[i].skill,"elite");
        else if (players[i].score >= 60)
        strcpy(players[i].skill,"Advanced");
        else if(players[i].score>= 40)
        strcpy(players[i].skill,"intermediate");
        else
        strcpy(players[i].skill,"begenner");

    }

    float avg =(float)total / N ;
    printf("\n overall average score is = %.2f \n",avg);

    int elite = 0 ,adv = 0 ,inter = 0 ,beg = 0;

    for(i=0;i<N;i++){
        if(strcmp(players[i].skill,"elite")==0)elite++;
        else if(strcmp(players[i].skill,"Advanced")==0)adv++;
        else if(strcmp(players[i].skill,"intermediate")==0)inter++;
        else beg++;

    }

    printf("elite : %d , advanced = %d , intermediate : %d , beginner : %d",elite,adv,inter,beg);

    printf("\n players details : \n");

    for(i=0;i<N;i++)
    {
        printf("\n ID : %d , name : %s , score : %d , skill : %s \n ",players[i].id, players[i].name , players[i].score, players[i].skill);
    }

    struct player temp;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(players[j].score> players[i].score){
                temp = players[i];
                players[i]= players[j];
                players[j] = temp;


            }
            
        }
    }

    printf("\ntop three\n");
    for(i=0;i<N && i <3;i++){
        printf("the name is : %s and the score is :%d\n",players[i].name,players[i].score);
    }

    return 0;
    
}