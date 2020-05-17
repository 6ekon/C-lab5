#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <regex>

using namespace std;

struct FIO
{
	string Name;
	string Surname;
	string Patronymic;

	void initials();
};

void FIO::initials()
{

	switch (rand() % 10)
	{
	case 0: Name = "Илон";
		break;
	case 1: Name = "Алекс";
		break;
	case 2: Name = "Генри";
		break;
	case 3: Name = "Патрик";
		break;
	case 4: Name = "Ганнибал";
		break;
	case 5: Name = "Томас";
		break;
	case 6: Name = "Фредерик";
		break;
	case 7: Name = "Ли";
		break;
	case 8: Name = "Хоакин";
		break;
	case 9: Name = "Брюс";
		break;
	default: Name = "Северус";
		break;
	}

	switch (rand() % 10)
	{
	case 0: Surname = "Уиллис";
		break;
	case 1: Surname = "Феникс";
		break;
	case 2: Surname = "Лектор";
		break;
	case 3: Surname = "Харрис";
		break;
	case 4: Surname = "Чинаски";
		break;
	case 5: Surname = "Бэйтмен";
		break;
	case 6: Surname = "Клегг";
		break;
	case 7: Surname = "Андерсон";
		break;
	case 8: Surname = "Маск";
		break;
	case 9: Surname = "Снейп";
		break;
	default: Surname = "Блэк";
		break;
	}

	switch (rand() % 10)
	{
	case 0: Patronymic = "Дмитриевич";
		break;
	case 1: Patronymic = "Андреевич";
		break;
	case 2: Patronymic = "Сергеевич";
		break;
	case 3: Patronymic = "Александрович";
		break;
	case 4: Patronymic = "Олегович";
		break;
	case 5: Patronymic = "Лаврентьевич";
		break;
	case 6: Patronymic = "Мирославич";
		break;
	case 7: Patronymic = "Николаевич";
		break;
	case 8: Patronymic = "Федорович";
		break;
	case 9: Patronymic = "Игоревич";
		break;
	default: Patronymic = "Кириллович";
		break;
	}
}

struct moreInfo
{
	string Gender;
	string Nationality;

	void info();
};

void moreInfo::info()
{
	Gender = "Мужской";
	switch (rand() % 10)
	{
	case 0: Nationality = "Англичанин";
		break;
	case 1: Nationality = "Немец";
		break;
	case 2: Nationality = "Француз";
		break;
	case 3: Nationality = "Американец";
		break;
	case 4: Nationality = "Испанец";
		break;
	case 5: Nationality = "Португалец";
		break;
	case 6: Nationality = "Бельгиец";
		break;
	case 7: Nationality = "Мексиканец";
		break;
	case 8: Nationality = "Ирландец";
		break;
	case 9: Nationality = "Швед";
		break;
	default: Nationality = "Австриец";
		break;
	}
}

struct Parameters
{
	short weight;
	short height;

	void parametr();
};

void Parameters::parametr()
{
	weight = rand() % (90 - 66) + 65;
	height = rand() % (200 - 166) + 165;
}

struct BirthdayDate
{
	short day;
	short month;
	short year;

	void date();
};

void BirthdayDate::date()
{

	day = rand() % 31 + 1;
	month = rand() % 12 + 1;
	year = rand() % 20 + 1980;

}

struct OtherInfo
{
	string Teamname;
	string Role;
	int phonenum = 0;
	short teamnum = 0;
	short result = 0;
	short amountofgames = 0;

	void other();
};

void OtherInfo::other()
{
	switch (rand() % 10)
	{
	case 0: Teamname = "ФК Реал Мадрид";
		break;
	case 1: Teamname = "ФК Манчестер Юнайтед";
		break;
	case 2: Teamname = "ФК Бавария";
		break;
	case 3: Teamname = "ФК Барселона";
		break;
	case 4: Teamname = "ФК Сантос";
		break;
	case 5: Teamname = "ФК Аякс";
		break;
	case 6: Teamname = "ФК Ювентус";
		break;
	case 7: Teamname = "ФК Пеньяроль";
		break;
	case 8: Teamname = "ФК Ливерпуль";
		break;
	case 9: Teamname = "ФК Арсенал";
		break;
	default: Teamname = "ФК Милан";
		break;
	}

	switch (rand() % 9)
	{
	case 0: Role = "Вратарь";
		break;
	case 1: Role = "Последний Защитник";
		break;
	case 2: Role = "Центральный Защитник";
		break;
	case 3: Role = "Крайний Защитник";
		break;
	case 4: Role = "Опорный Полузащитник";
		break;
	case 5: Role = "Крайний Полузащитник";
		break;
	case 6: Role = "Атакующий Полузащитник";
		break;
	case 7: Role = "Нападающий";
		break;
	}

	phonenum = 10000000000 + rand() % 1000000000;
	teamnum = rand() % 199 + 1;
	result = rand() % 99 + 1;
	amountofgames = rand() % 70;
}

FIO fio;
moreInfo moreinfo;
Parameters parameters;
BirthdayDate birthdaydate;
OtherInfo otherinfo;

void task1()
{
	ofstream out;
	out.open("footballer.txt");

	for (int i = 0; i < 20; i++)
	{
		fio.initials();
		moreinfo.info();
		parameters.parametr();
		birthdaydate.date();
		otherinfo.other();

		if (otherinfo.amountofgames >= 50)
		{
			out << "Фамилия: " << fio.Surname << endl;
			out << "Имя: " << fio.Name << endl;
			out << "Отчество: " << fio.Patronymic << endl;
			out << "Пол: " << moreinfo.Gender << endl;
			out << "Национальность: " << moreinfo.Nationality << endl;
			out << "Год рождения: " << birthdaydate.year << endl;
			out << "Месяц рождения: " << birthdaydate.month << endl;
			out << "День рождения: " << birthdaydate.day << endl;
			out << "Номер телефона: " << otherinfo.phonenum << endl;
			out << "Название команды: " << otherinfo.Teamname << endl;
			out << "Номер в команде:" << otherinfo.teamnum << endl;
			out << "Амплуа: " << otherinfo.Role << endl;
			out << "Количество  голов: " << otherinfo.result << endl;
			out << "Количество игр: " << otherinfo.amountofgames << endl;
			out << "--------------------------------------------------------------" << endl;
		}
	}
	out.close();
}

void Output()
{
	int random, day, month, year;
	ofstream out;

	out.open("dates.txt");
	random = rand() % 20;

	for (int i = 0; i < random; i++)
	{
		day = rand() % 31 + 1;
		month = rand() % 12 + 1;
		year = rand() % 2000;

		out << day << "." << month << "." << year << endl;
	}
}

void lastDate(int* date, int* last)
{
	if (date[2] < last[2]) return;
	if (date[2] == last[2] && date[1] < last[1]) return;
	if (date[1] == last[1] && date[0] < last[0]) return;
	memcpy(last, date, sizeof(int) * 3);
}

void task2()
{
	ifstream file("dates.txt");
	string line;   
	int minYear = INT_MAX; 
	int date[3], last[3] = { 0 };   
	regex rx("(\\d){1,2}");
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline(file, line);
			sregex_iterator begin(line.begin(), line.end(), rx);
			sregex_iterator end;
			for (int i = 0; i < 3; i++)
			{
				date[i] = (begin != end) ? atoi((*begin++).str().c_str()) : 0;
				if (date[1] > 2 && date[1] < 6) cout << "Весенняя дата: " << date[0] << '/' << date[1] << '/' << date[2] << endl;
				if (date[2] < minYear) minYear = date[2];
				lastDate(date, last);
			}
			file.close();
			cout << "Минимальный год: " << date;
			cout << "Самая поздняя дата: " << last;
		}
	}
}

int main()
{
	srand(time(0));
	setlocale(0, "");
	task1();
	Output();
	task2();
}