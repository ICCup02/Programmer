﻿#include <iostream>
#include <string>
using namespace std;
struct student {
	std::string name;
	int group;
	int sec[5];
};
int main()
{
	setlocale(LC_ALL, "RUS");
	const int k = 10;
	student stud[k] = {};
	stud[0] = { "Иванов А.В." ,			6,		5,5,5,5,5 };
	stud[1] = { "Смирнов Г.Д.",			1, 		5,5,5,1,5 };//7
	stud[2] = { "Соболев К.Д.",			3,		4,4,4,4,4 };
	stud[3] = { "Пупкин С.В.",			2,		5,0,5,5,5 };//5
	stud[4] = { "Волосянский Н.Г.",		2,		5,2,5,5,5 };//2
	stud[5] = { "Козлов А.В.",			2,		5,1,5,5,5 };//3
	stud[6] = { "Климов Г.В.",			3,		5,4,4,4,5 };
	stud[7] = { "Кочетов Л.М.",			4,		5,2,5,5,5 };//4
	stud[8] = { "Сидоров П.Н.",			4,		5,5,3,5,5 };//6
	stud[9] = { "Алексеев Р.К.",		6,		5,3,5,5,5 };//1
	int x = 0;
	for (int o = 0, i = 0; i < 10; o++)
	{
		if (o > 4) { o = -1; i++; continue; }
		if (stud[i].sec[o] <= 3) {
			swap(stud[i], stud[x]); x++; i++; o = -1;
		}
	}
	int c = x;
	bool first = true;
	while (first) {
		first = false;
		for (int o = 0, i = 1, last = 0; i < x; )
		{
			if (int(stud[i].name[o]) < int(stud[last].name[o])) { swap(stud[i], stud[last]); first = true; o = 0; }
			else if (stud[i].name[o] == stud[last].name[o]) { o++; continue; }
			else o = 0;
			i++, last++;
		}
		x--;
	}
	if (c > 0) {
		for (int i = 0; i < c; i++)
		{
			cout << stud[i].name << " " << stud[i].group << endl;
		}
	}
	else cout << "Not find";
}