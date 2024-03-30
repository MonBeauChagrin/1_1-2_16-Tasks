#define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <fstream>
# include <stdio.h>
using namespace std;
struct SportTeam {
	char TeamName[100];
	char TeamCity[100];
	int TeamNumberOfPlayers;
	int TeamScore;
};
void addelements() {
	ofstream SportTeamFile("file1.txt", std::ios::app);
	if (SportTeamFile.is_open()) {
		SportTeam newteam;
		cout << "Введите название новой команды" << endl;
		cin.getline(newteam.TeamName, 100);
		SportTeamFile << "Название команды: " << newteam.TeamName << endl;
		cout << "Введите город команды" << endl;
		cin.getline(newteam.TeamCity, 100);
		SportTeamFile << "Город команды:  " << newteam.TeamCity << endl;
		cout << "Введите количество игроков" << endl;
		cin >> newteam.TeamNumberOfPlayers;
		SportTeamFile << "Количество игроков: " << newteam.TeamNumberOfPlayers << endl;
		cout << "Введите счёт команды " << endl;
		cin >> newteam.TeamScore;
		SportTeamFile << "Счёт команды: " << newteam.TeamScore << endl;
		cin.ignore();
		SportTeam newteam1;
		cout << "Введите название новой команды" << endl;
		cin.getline(newteam1.TeamName, 100);
		SportTeamFile << "Название команды: " << newteam1.TeamName << endl;
		cout << "Введите город команды" << endl;
		cin.getline(newteam1.TeamCity, 100);
		SportTeamFile << "Город команды:  " << newteam1.TeamCity << endl;
		cout << "Введите количество игроков" << endl;
		cin >> newteam1.TeamNumberOfPlayers;
		SportTeamFile << "Количество игроков: " << newteam1.TeamNumberOfPlayers << endl;
		cout << "Введите счёт команды " << endl;
		cin >> newteam1.TeamScore;
		SportTeamFile << "Счёт команды: " << newteam1.TeamScore << endl;

	}
	else {
		cout << "Ошибка открытия файла";
	}
	SportTeamFile.close();
}

void static swapelements() {
	FILE* ReadElements = fopen("file.txt", "r");
	ofstream SwapElements("file1.txt", std::ios::app);
	int size = 0;
	char buffer[256];
	while ((fgets(buffer, 256, ReadElements)) != NULL) {

		SwapElements << buffer;
	}
	fclose(ReadElements);
	SwapElements.close();
}
int main() {
	setlocale(LC_ALL, "RU");
	addelements();
	swapelements();
	remove("file.txt");
	int a = rename("file1.txt", "file.txt");
	return 0;
}