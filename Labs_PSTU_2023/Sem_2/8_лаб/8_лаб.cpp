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
		cout << "������� �������� ����� �������" << endl;
		cin.getline(newteam.TeamName, 100);
		SportTeamFile << "�������� �������: " << newteam.TeamName << endl;
		cout << "������� ����� �������" << endl;
		cin.getline(newteam.TeamCity, 100);
		SportTeamFile << "����� �������:  " << newteam.TeamCity << endl;
		cout << "������� ���������� �������" << endl;
		cin >> newteam.TeamNumberOfPlayers;
		SportTeamFile << "���������� �������: " << newteam.TeamNumberOfPlayers << endl;
		cout << "������� ���� ������� " << endl;
		cin >> newteam.TeamScore;
		SportTeamFile << "���� �������: " << newteam.TeamScore << endl;
		cin.ignore();
		SportTeam newteam1;
		cout << "������� �������� ����� �������" << endl;
		cin.getline(newteam1.TeamName, 100);
		SportTeamFile << "�������� �������: " << newteam1.TeamName << endl;
		cout << "������� ����� �������" << endl;
		cin.getline(newteam1.TeamCity, 100);
		SportTeamFile << "����� �������:  " << newteam1.TeamCity << endl;
		cout << "������� ���������� �������" << endl;
		cin >> newteam1.TeamNumberOfPlayers;
		SportTeamFile << "���������� �������: " << newteam1.TeamNumberOfPlayers << endl;
		cout << "������� ���� ������� " << endl;
		cin >> newteam1.TeamScore;
		SportTeamFile << "���� �������: " << newteam1.TeamScore << endl;

	}
	else {
		cout << "������ �������� �����";
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