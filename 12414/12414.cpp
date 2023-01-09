// 12414.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	float deposit_amount,
		deposit_one,
		deposit_two,
		deposit_three;

	cout << "Введите сумму вкладда: ";
	cin >> deposit_amount;

	deposit_one = (round((((deposit_amount * 1) / 100) / 12) * 100) / 100) * 3;
	deposit_two = (round((((deposit_amount * 2) / 100) / 12) * 100) / 100) * 6;
	deposit_three = (round((((deposit_amount * 3) / 100) / 12) * 100) / 100) * 12;

	cout << deposit_one << endl << deposit_two << endl << deposit_three << endl;

	return 0;
}

//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	float all_minute, 
//		price{},
//		one_minute = 1.75;
//
//	int price_day = 5,
//		minute_day = 100,
//		minute_month,
//		price_minute_month,
//		month = 30;
//
//	cout << "Введите количество минут: ";
//	cin >> all_minute;
//
//	minute_month = minute_day * month;
//	price_minute_month = price_day * month;
//
//	if (all_minute > minute_month) 
//	{
//		price = price_minute_month + ((all_minute - minute_month) * one_minute);
//
//	} else if (all_minute < minute_month)
//	{
//		price = ((floor(all_minute / 100) * price_day)) + ((all_minute - (floor(all_minute / 100) * minute_day))*one_minute);
//	}
//
//	if (price > 600) {
//		cout << "Абонент просил не беспокоить!";
//	}
//
//	return 0;
//}

//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	int x, y;
//
//	cout << "Введите значение x: ";
//	cin >> x;
//
//	cout << "Введите значение y: ";
//	cin >> y;
//	
//	x < 0 && y > 0 ?
//		cout << "Данные x, y являются координатами точки, лежащей во второй координатной четверти" << endl : 
//		cout << "Данные x, y являются координатами точки, не лежащей во второй координатной четверти" << endl;
//
//	return 0;
//}

//int main() {
//
//    setlocale(LC_ALL, "Russian");
//
//    float h, a, b;
//
//    cout << "Введите стороны a: ";
//    cin >> a;
//
//    cout << "Введите основание b: ";
//    cin >> b;
//
//    if (a <= 0 || b <= 0)
//    {
//        cout << "Введины не корректные данные";
//
//        return -1;
//    }
//
//    h = sqrt(pow(a, 2) - pow((b / 2), 2));
//
//    cout << "Высота равнобедренного треугольника: " << h << endl;
//
//    return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int space, time;
//	float speed;
//
//	cout << "Введите растояние которое проходит ученик от дома до школы (в метрах): ";
//	cin >> space;
//
//	cout << "Введите время за которое проходит данное растояние (в минутах):";
//	cin >> time;
//
//	// защита от нулевых и отрицательных значений
//	if (space <= 0 || time <= 0)
//	{
//		cout << "Введины не коректные данные";
//		return 1;
//	}
//
//	// вычесляем скорость в м/с
//	speed = space / (time * 60);
//
//	// выводим число с 3 знаками после запятой и переводим м/с в км/ч
//	cout << round(speed * 1000) / 1000 << " м/с" << endl
//		<< round((speed * 3.6) * 1000) / 1000 << " км/ч" << endl;
//
//	return 0;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
