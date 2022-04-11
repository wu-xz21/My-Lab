#include<iostream>
#include"lab4.h"
using namespace std;
CPU::CPU( const CPU& c) {
	rank = c.rank;
	frequency = c.frequency;
	voltage = c.voltage;
}
void CPU::run(CPU_rank rrank, int rfrequency, float rvoltage) {
	rank = rrank;
	frequency = rfrequency;
	voltage = rvoltage;
}
void CPU::stop() {
	rank = P1;
	frequency = 0;
	voltage = 0.0f;
}