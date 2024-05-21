// Memberlistinit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//ParadigmaOOP1_4NIMBelakang
//Minimal commit = 15

class mahasiswa {
private:
	const int id;
	string nama;
	float nilai;

public:
	mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {
		//Member definisi
	}
