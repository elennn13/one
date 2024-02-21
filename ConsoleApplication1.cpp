//КРЕСТИКИ НОЛИКИ С КОМПЬЮТЕРОМ ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int tiktok[9]{ 0 };
	for (int x = 0; x < 5; x++) {
		//Ход компьютера
		//system("cls");
		if (tiktok[0] == 0) {
			tiktok[0] = 2;
		}
		else if (tiktok[1] == 0 && tiktok[2] == 0) {
			tiktok[2] = 2;
		}
		else if (tiktok[1] == 0) {
			tiktok[1] = 2;
		}
		else if (tiktok[7] == 0) {
			tiktok[7] = 2;
		}
		else if (tiktok[4] == 0) {
			tiktok[4] = 2;
		}
		else if (tiktok[1] == 0) {
			tiktok[1] = 2;
		}
		else if (tiktok[5] == 0) {
			tiktok[5] = 2;
		}
		else if (tiktok[6] == 0) {
			tiktok[6] = 2;
		}
		else if (tiktok[0] == 0) {
			tiktok[0] = 2;
		}

		for (int i = 0; i < 9; i++) {
			if (i % 3 == 0) cout << endl;
			if (tiktok[i] == 2) {
				cout << 'X' << " ";
			}
			else if (tiktok[i] == 1) {
				cout << 'O' << " ";
			}
			else {
				cout << "- ";
			}
		}
		cout << endl;
		if ((tiktok[0] == 2 && tiktok[1] == 2 && tiktok[2] == 2) ||
			(tiktok[0] == 2 && tiktok[4] == 2 && tiktok[8] == 2) ||
			(tiktok[0] == 2 && tiktok[3] == 2 && tiktok[6] == 2) ||
			(tiktok[1] == 2 && tiktok[4] == 2 && tiktok[7] == 2) ||
			(tiktok[2] == 2 && tiktok[4] == 2 && tiktok[6] == 2) ||
			(tiktok[2] == 2 && tiktok[5] == 2 && tiktok[8] == 2) ||
			(tiktok[3] == 2 && tiktok[4] == 2 && tiktok[5] == 2) ||
			(tiktok[6] == 2 && tiktok[7] == 2 && tiktok[8] == 2)) {
			cout << "CPU winner!";
			break;
		}
		if ((tiktok[0] == 1 && tiktok[1] == 1 && tiktok[2] == 1) ||
			(tiktok[0] == 1 && tiktok[4] == 1 && tiktok[8] == 1) ||
			(tiktok[0] == 1 && tiktok[3] == 1 && tiktok[6] == 1) ||
			(tiktok[1] == 1 && tiktok[4] == 1 && tiktok[7] == 1) ||
			(tiktok[2] == 1 && tiktok[4] == 1 && tiktok[6] == 1) ||
			(tiktok[2] == 1 && tiktok[5] == 1 && tiktok[8] == 1) ||
			(tiktok[3] == 1 && tiktok[4] == 1 && tiktok[5] == 1) ||
			(tiktok[6] == 1 && tiktok[7] == 1 && tiktok[8] == 1)) {
			cout << "Ты победил!" << endl;
			break;
		}

		int sel = 0;
		bool t = true;
		do {
			cout << "Введите номер от 1 до 9: ";
			cin >> sel;
			if (sel < 0 || sel > 9) {
				cout << "Не правильный номер" << endl;
				continue;
			}
			if (tiktok[sel - 1] != 0) {
				cout << "не правильный номер!" << endl;
				continue;
			}
			tiktok[sel - 1] = 1;
			t = false;
		} while (t);
		if (x >= 3) {
			cout << "Ничья!" << endl;
			break;
		}
	}
	cout << "Конец игры!" << endl;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
