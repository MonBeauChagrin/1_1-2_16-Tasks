#include <iostream>
#include <ostream>
using namespace std;
int collis = 0;
int error_push = 0;
string surname[50] = { "������", "������", "�������", "������", "�������", "��������", "��������", "�����", "�������", "��������","�������", "�������", "�������", "������", "��������", "�������", "�������", "������", "������", "������","��������", "��������", "�����", "�������", "�������", "�������", "�������", "������", "�������", "���������","�������", "���������", "�������", "�����", "��������", "�����", "�������", "���������", "������", "�������","�������", "��������", "��������", "���������", "�������", "������", "����", "���������"
};
string name[50] = { "����", "����", "���������", "�������", "������", "������", "������", "����", "����", "�����", "��������", "�������", "�������", "�����", "������", "����������", "�������", "�������", "�����", "������","�����", "�������", "�����", "��������", "����", "�����", "������", "������", "�����", "�������","�����", "�����", "������", "�����", "������", "�����", "�������", "��������", "������", "����","�������", "�������", "�����", "������", "����", "���", "������", "����", "�����"
};
string patronymics[50] = { "��������", "��������", "�������������", "����������", "���������", "���������", "����������", "�������", "��������", "���������", "������������", "����������", "����������", "��������", "����������", "��������������", "����������", "����������", "���������", "����������", "���������", "����������", "���������", "�����������", "�����", "���������", "����������", "����������", "���������", "����������", "���������", "��������", "���������", "���������", "����������", "���������", "�����������", "������������", "���������", "��������", "����������", "����������", "���������", "����������", "��������", "�������", "����������", "��������", "���������"
};
string adress_a[50] = { "������, ��. ������, �. 10, ��. 5", "�����-���������, ��. �������, �. 20, ��. 3","������������, ��. �������, �. 15, ��. 8", "�����������, ��. ��������, �. 12, ��. 4","����������, ��. ���������, �. 7, ��. 2", "�����������, ��. �������������, �. 3, ��. 6","������-��-����, ��. ������, �. 9, ��. 1", "������, ��. �������, �. 25, ��. 7","������ ��������, ��. �����������, �. 14, ��. 10", "����, ��. �������, �. 22, ��. 5","���������, ��. ������, �. 18, ��. 7", "����, ��. ������, �. 22, ��. 11","�����������, ��. ��������, �. 6, ��. 4", "������, ��. ���������, �. 14, ��. 3","�������, ���. ���������, �. 9, ��. 2", "������, ��. ����������, �. 17, ��. 6","�����, ��. ������, �. 11, ��. 8", "���������, ��. ���������, �. 4, ��. 10","�������, ��. ������, �. 30, ��. 1", "���������, ��. ������, �. 5, ��. 3","���������, ��. ���������, �. 13, ��. 6", "���������, ��. �������������, �. 8, ��. 2","����, ��. ������������, �. 19, ��. 4", "�������, ��. ������, �. 7, ��. 9","���, ��. ������, �. 16, ��. 3", "�����, ��. ��������, �. 25, ��. 1","�����, ��. �����������, �. 14, ��. 6", "��������, ��. ���������, �. 11, ��. 8","�������, ��. ����������, �. 22, ��. 7", "��������, ��. ��������, �. 10, ��. 5","�����, ��. ���������, �. 8, ��. 3", "�����, ��. ����������, �. 12, ��. 4","������������, ��. �������, �. 30, ��. 2", "��������, ��. ������, �. 16, ��. 7","������, ��. �����������, �. 9, ��. 3", "��������, ��. ��������, �. 5, ��. 6","���������, ��. ������������� ,� .20 ,�� .11", "������ ,�� .������� ,� .15 ,�� .8","������ ,�� .��������� ,� .7 ,�� .2","��������, ��. ��������, �. 11, ��. 9","��������, ��. ������, �. 13, ��. 4","�������, ��. ������������, �. 6, ��. 7","������-���, ��. ������, �. 17, ��. 3","��������, ��. �������������, �. 28, ��. 5","���������, ��. ���������, �. 9, ��. 2","��������, ��. ��������, �. 21, ��. 6","��������-18, ��. ���������-2�, �. 14�, ��. 1","���������-1, ��. ����������-2�, �. 23�, ��. 8","���������-2, ��. ����-1�, �. 19�, ��. 3",
};
struct human
{
	string fio;
	long long int phone;
	string adress;
};
struct list_elem
{
	human data;
	list_elem* next;
	list_elem* prev;
};
struct list
{
	list_elem* start;
	int size_t;

	void init()
	{
		start = new list_elem;
		start->next = nullptr;
		start->prev = nullptr;
		size_t = 0;
	}

	void push_back(human data_n)
	{
		if (size_t == 0)
		{
			start->data = data_n;
			size_t++;
		}
		else if (size_t == 1)
		{
			list_elem* new_el = new list_elem;
			new_el->data = data_n;
			new_el->prev = start;
			new_el->next = nullptr;
			start->next = new_el;
			size_t++;
		}
		else
		{
			list_elem* tmp = start;
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			list_elem* new_el = new list_elem;
			new_el->data = data_n;
			new_el->next = nullptr;
			new_el->prev = tmp;
			tmp->next = new_el;
			size_t++;
		}
	}


	void print()
	{
		if (size_t > 1)
		{
			list_elem* tmp = start;
			while (tmp != nullptr)
			{
				cout << tmp->data.fio << "   " << tmp->data.phone << "   " << tmp->data.adress << endl;
				tmp = tmp->next;
			}
		}
		else if (size_t == 1)
		{
			cout << start->data.fio << "   " << start->data.phone << "   " << start->data.adress << endl;
		}
		else
		{
			cout << "Void list\n";
		}
	}
	void print_tab()
	{
		if (size_t > 1)
		{
			list_elem* tmp = start;
			while (tmp != nullptr)
			{
				cout << "\t" << tmp->data.fio << "   " << tmp->data.phone << "   " << tmp->data.adress << endl;
				tmp = tmp->next;
			}
		}
		else if (size_t == 1)
		{
			cout << "\t" << start->data.fio << "   " << start->data.phone << "   " << start->data.adress << endl;
		}
	}
};
human set_human()
{
	human new_h;
	string str_t = "";
	int a = rand() % 50;
	str_t += surname[a] + " ";
	a = rand() % 50;
	str_t += name[a] + " ";
	a = rand() % 50;
	str_t += patronymics[a];
	a = rand() % 50;
	new_h.adress = adress_a[a];
	new_h.phone = 80000000000 + abs(rand() % 100000) + abs(rand() % 100000 * 100000);
	new_h.fio = str_t;
	return new_h;
}
int hash_fuction(string fio, int M)
{
	int sum = 0; int a = 0;
	for (int i = 0; i < fio.length(); i++)
	{
		a = fio[i];
		sum += a;
	}
	sum = sum % M;
	return abs(sum);
}
long long int set_search_phone()
{
	long long int phone;
	cout << "������� ����� �������� �������� �������� ���� �����: ";
	cin >> phone;
	return phone;
}
int choice()
{
	int choi;
	cout << "1 - �������� �������\n2 - ������� �������\n������� ����� ��������������� ���� ��� �� ������ �������, ���� ������ ����� �������� ������������� �� ���������� �� ������ �� ��������: ";
	cin >> choi;
	return choi;
}
void add_del_list(int hash_size, list*& table)
{
	cout << "\n\n";
	human new_h;
	switch (choice())
	{
	case 1:
		cout << "������� ���-��� �� �������� ����� �������� �������: ";
		int pos;
		new_h = set_human();
		cin >> pos;
		if (pos < hash_size && pos >= 0)
		{
			cout << "����� ��������  " << new_h.fio << "   " << new_h.phone << "   " << new_h.adress << endl;
			if (table[pos].size_t >= 1)
			{
				collis++;
			}
			table[pos].push_back(new_h);
		}
		else
		{
			cout << "������������ �������\n";
		}
		break;
	case 2:
		cout << "������� ���-��� � ������� �������� �������� ���� �������: ";
		int hash_del, pos_del;
		cin >> hash_del >> pos_del;
		if (hash_del < hash_size && hash_del >= 0 && pos_del <= table[hash_del].size_t && pos_del > 0)
		{
			if (pos_del != 1)
			{
				list_elem* tmp = table[hash_del].start;
				for (int i = 2; i < pos_del; i++)
				{
					tmp = tmp->next;
				}
				list_elem* tmp2 = tmp;
				tmp2 = tmp->next;
				tmp->next = tmp->next->next;
				delete tmp2;
				table[hash_del].size_t--;
			}
			else if (pos_del == 1)
			{
				table[hash_del].start = table[hash_del].start->next;
				table[hash_del].start->prev = nullptr;
			}
		}
		else
		{
			cout << "������������ �������\n";
		}
		break;
	default:
		cout << "\n";
	}
}
void add_del_o(int hash_size, human* table, int* arr_c)
{
	cout << "\n\n";
	human new_h;
	switch (choice())
	{
	case 1:
		cout << "������� ���-��� �� �������� ����� �������� �������: ";
		new_h = set_human();
		int pos;
		cin >> pos;
		cout << "����� ��������  " << new_h.fio << "   " << new_h.phone << "   " << new_h.adress << endl;
		if (arr_c[pos] == 0 && pos < hash_size && pos >= 0)
		{
			table[pos] = new_h;
			arr_c[pos] = 1;
		}
		break;
	case 2:
		cout << "������� ���-��� �������� �������� ���� �������: ";
		int pos1;
		cin >> pos1;
		if (arr_c[pos1] == 1 && pos1 < hash_size && pos1 >= 0)
		{
			arr_c[pos1] = 0;
		}
		break;
	default:
		cout << "\n";
	}
}
void list_method()
{
	int n;
	cout << "������� ���������� �������: ";
	cin >> n;
	human* peoples = new human[n];
	for (int i = 0; i < n; i++)
	{
		peoples[i] = set_human();
	}

	int hash_size;
	cout << "������� ������ ��� �������: ";
	cin >> hash_size;

	list* table = new list[hash_size];
	for (int i = 0; i < hash_size; i++)
	{
		table[i].init();
	}
	for (int i = 0; i < n; i++)
	{
		human ph = peoples[i];
		int code = hash_fuction(ph.fio, hash_size);
		if (table[code].size_t >= 1) { collis++; }
		table[code].push_back(ph);
	}

	for (int i = 0; i < hash_size; i++)
	{
		cout << "���-��� " << i << " ������ " << table[i].size_t << endl;
		table[i].print_tab();
	}
	cout << "\n��������: " << collis << endl;

	long long int s_phone = set_search_phone();
	for (int i = 0; i < hash_size; i++)
	{
		list_elem* tmp = table[i].start;
		int counter = 1;
		while (tmp != nullptr)
		{
			if (tmp->data.phone == s_phone)
			{
				cout << "������� ������ �� ���-���� " << i << " �� ������� " << counter << endl;
			}
			tmp = tmp->next;
			counter++;
		}
	}

	add_del_list(hash_size, table);
	for (int i = 0; i < hash_size; i++)
	{
		cout << "���-��� " << i << " ������ " << table[i].size_t << endl;
		table[i].print_tab();
	}
}
void o_method()
{
	int n;
	cout << "������� ���������� �������: ";
	cin >> n;
	human* peoples = new human[n];
	for (int i = 0; i < n; i++)
	{
		peoples[i] = set_human();
	}

	int hash_size;
	cout << "������� ������ ��� �������: ";
	cin >> hash_size;

	human* table = new human[hash_size];
	human* no_hash_people = new human[n];
	list not_hash;
	not_hash.init();
	int* count_arr = new int[hash_size];

	for (int i = 0; i < hash_size; i++) { count_arr[i] = 0; }
	for (int i = 0; i < n; i++)
	{
		bool hash_t = 1;
		human ph = peoples[i];
		int code = hash_fuction(ph.fio, hash_size);
		while (count_arr[code] != 0)
		{
			if (code == hash_size - 1)
			{
				no_hash_people[error_push] = ph;
				error_push++;
				hash_t = 0;
				break;
			}
			code++;
			collis++;
		}
		if (hash_t)
		{
			table[code] = ph;
			count_arr[code] = 1;
		}
	}
	for (int i = 0; i < hash_size; i++)
	{
		cout << "���-��� " << i << endl;
		if (count_arr[i] == 1)
		{
			cout << "\t" << table[i].fio << "   " << table[i].phone << "   " << table[i].adress << endl;
		}
	}

	cout << "\n��������: " << collis;

	if (error_push > 0)
	{
		cout << "\n������ ��� �����������: " << error_push;
		cout << "\n\n���� �� �������������� (����� ������� ��������)" << endl;
		for (int i = 0; i < error_push; i++)
		{
			cout << "\t" << no_hash_people[i].fio << "   " << no_hash_people[i].phone << "   " << no_hash_people[i].adress << endl;
		}
	}
	delete[] no_hash_people; //������� ��������

	long long int s_phone = set_search_phone();
	for (int i = 0; i < hash_size; i++)
	{
		if (table[i].phone == s_phone)
		{
			cout << "������� ������ �� ���-���� " << i << endl;
		}
	}


	add_del_o(hash_size, table, count_arr);
	for (int i = 0; i < hash_size; i++)
	{
		cout << "���-��� " << i << endl;
		if (count_arr[i] == 1)
		{
			cout << "\t" << table[i].fio << "   " << table[i].phone << "   " << table[i].adress << endl;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "ru_RU");
	int end_if;
	cout << "���� ������ ���������� ������ ��������� ������� '1'   ";
	cin >> end_if;
	if (end_if == 1)
		return 0;

	cout << "\n1 - ����� ������\n2 - ����� �������� �� O ������\n������� ����� ��������������� ���� ������ ����������� ������� ����� �����������, ����� ������ ������� �������� ������������ ����������� ����������� ���������� ���������: ";
	int type_hash;
	cin >> type_hash;
	switch (type_hash)
	{
	case 1:
		list_method(); break;
	case 2:
		o_method(); break;
	default:
		cout << "����������� �� �����������\n";
	}

	system("pause");
	main();
}