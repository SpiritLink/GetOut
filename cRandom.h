#pragma once
#define RND cRandom::GetInstance()

class cRandom
{
private:
	SINGLETONE(cRandom);

public:

	int getInt(int num) { return rand() % num; }

	int getIntFromTo(int fromNum, int toNum)
	{
		return (rand() % (toNum - fromNum + 1)) + fromNum;
	}

	int getIntAorB(int a, int b)
	{
		if (rand() % 2 == 0) return a;
		else return b;
	}

	//getFloat
	//0.0~1.0 RAND_MAX�� �ִ밪(32767)
	float getFloat() { return (float)rand() / (float)RAND_MAX; }

	float getFloat(float num) { return (float)rand() / (float)RAND_MAX * num; }

	float getFloatFromTo(float fromNum, float toNum)
	{
		float rnd = (float)rand() / (float)RAND_MAX;
		return (rnd * (toNum - fromNum) + fromNum);
	}
};

