#include<stdio.h>
#include<time.h>
//물고기가 6마리가 있다.
//이들은 어항에 살고있는데, 사막이예요
//사막이 너무 더워서 , 너무 건조해서 물이 아주 빨리 증발을 해요
//물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요ㅕ 
//물고기는 시간이 지날수록 점점 커져서 ...나중에는 ...냠냠 


int level;
int arrayFish[6];
void initData();
int* cursor;
void printFishes();

int main1(void)
{
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0;//총 경과 시간
	long preElapsedTime = 0;//직전 경과시간(최근에 물을 준 시간간격)

	int num;// 몇 번 어항에 물을 줄 것인지, 사용자 입력 
	initData();

	cursor = arrayFish; // cursor[0] .. cursor[1] ...

	startTime = clock(); //현재 시간을 millisecond(1000분의 1초)단위로 반환 

	while (1)
	{
		printFishes();
		gechar();// 임시로 사용자 입력 대기 
	}
}

	void printFishes()
{
	
	printf("%3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);

	}
	printf('\n\n');
	

    return 0;
}


 void initData()
{
	level = 1;// 게임레벨(1~5)
	for (int i = 0; i <6; i++)
	{
		printf("%4d", arrayFish[i]);
	}
	printf("\n\n");

}