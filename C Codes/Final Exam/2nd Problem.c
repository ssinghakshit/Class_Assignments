#include <stdio.h>
#include <string.h>

struct cricket
{
	int battingAvg62;
	char playerName_62[20];
	char teamName_62[20];
};

int main()
{
	struct cricket player_62[6];
	int i,j;

	for(i=0 ; i<5 ; i++)
	{
		printf("Enter team name of player %d: ",i+1);
		scanf("%s",&player_62[i].teamName_62);
		printf("Enter player name of player %d: ",i+1);
		scanf("%s",&player_62[i].playerName_62);
		printf("Enter batting avg of player %d: ",i+1);
		scanf("%d",&player_62[i].battingAvg62);
		printf("\n");
	}

	for(i=0 ; i<5 ; i++)
	{
		for(j=i ; j<5; j++)
		{
			if(player_62[i].battingAvg62 > player_62[j].battingAvg62)
			{
				player_62[5] = player_62[i];
				player_62[i] = player_62[j];
				player_62[j] = player_62[5];
			}
		}
	}
	for(i=0 ; i<5 ; i++)
	{
        printf("Team %d: \n",i+1);
		printf("Player Name: %s \n",player_62[i].playerName_62);
		printf("Team Name: %s \n",player_62[i].teamName_62);
		printf("Avg: %d \n",player_62[i].battingAvg62);
		printf("\n");
	}
	return 0;
}
