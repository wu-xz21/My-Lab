#pragma once
#ifndef LAB4_H
#define LAB4_H
enum CPU_rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU() :rank(P1), frequency(0), voltage(0.0f){}
	CPU(const CPU& c);
	void run(CPU_rank rrank, int rfrequency, float rvoltage);
	void stop();
	~CPU() {}
	
private:
	CPU_rank rank;
	int frequency;
	float voltage;
};

#endif LAB4_H