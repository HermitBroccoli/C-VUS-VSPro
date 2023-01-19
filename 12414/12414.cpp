// 12414.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <clocale>

using namespace std;

#define ARRSIZE 10
int main(void) {

    setlocale(LC_ALL, "Russian");

    double arr[ARRSIZE] = { -1.4, -0.8, 2.2, -4.0, -5.5, 2.0, 0.0, 0.0, -15.0, 11.4 };
    double max, sum, tmp;
    int i, maxi, j;


    printf("\nИсходный массив:\n");
    for (i = 0; i < ARRSIZE; ++i)
        printf("ARR[%d] = %5.1f\n", i, arr[i]);

    /* 1 */
    maxi = 0;
    max = fabs(arr[maxi]);
    for (i = 1; i < ARRSIZE; ++i) {
        if (max < fabs(arr[i])) {
            maxi = i;
            max = fabs(arr[maxi]);
        }
    }
    printf("\nМаксимальный по модулю элемент:\nARR[%d] = %.1f\t%.1f\n", maxi, arr[maxi], max);

    /* 2 */
    i = 0;
    sum = 0.0;
    while (arr[i] < 0 && i < ARRSIZE)
        ++i;
    if (i == ARRSIZE) {
        printf("\nВ массиве нет положительных элементов!\n");
        goto THREE;
    }
    ++i;
    while (arr[i] < 0 && i < ARRSIZE)
        sum += arr[i++];
    if (i == ARRSIZE) {
        printf("\nВ массиве только один положительный элемент!\n");
        goto THREE;
    }
    printf("\nСумма элементов между первым и вторым положительными равна %.1f\n", sum);


    THREE:

    for (j = ARRSIZE - 1; j >= 0 && arr[j] == 0.0; --j)
        ;
    if (j < 0) {
        printf("\nВсе элементы в массиве нулевые\n");
        return 0;
    }
    for (i = 0; i < j; ++i) {
        while (arr[i] == 0 && i < j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j--] = tmp;
        }
    }

    printf("\nВсе нули в конце массива\n");
    for (i = 0; i < ARRSIZE; ++i)
        printf("ARR[%d] = %5.1f\n", i, arr[i]);

    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int a1[4] = {1, 5, 6, 7};
//	int a2[4] = {5, 7, 6, 2};
//
//	int a3[4];
//
//	for (int i = 0; i < 4; i++)
//	{
//		a3[i] = a1[i] + a2[i];
//	}
//
//	int a4[4];
//	for (int i = 0; i < 4; i++)
//	{
//		a4[i] = a1[i] - a2[i];
//	}
//
//	cout << "Сумма: ";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << a3[i] << " ";
//	}
//
//	cout << endl << "Разность: ";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << a4[i] << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	double s = 0, a = 1, x, eps = 1e-6;
//	int n = 1;
//	cout << "x: ";
//	cin >> x;
//	while (abs(a) > eps) {
//		s += a;
//		a *= x * x / (n * (n + 1));
//		n += 2;
//	}
//	cout << "ch(" << x << ") = " << s << endl;
//
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int a, b, c, n;
//
//	cout << "Введите n: ";
//	cin >> n;
//
//	for (c = 0; c <= n; c++)
//	{
//		for (b = 0; b <= c; b++)
//		{
//			for (int a = 0; a <= b; a++)
//			{
//				if (a*a+b*b == c*c)
//				{
//					cout << a << "^2 + " << b << "^2 = " << c << "^2" << endl;
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    int n = 0;
//    double e, f = 1., an, eps = 1.e-9;
//    cout << "0<e<1  e="; cin >> e;
//
//    do
//    {
//        n++;
//        f *= n;
//        an = 2. * n / f;
//    } while (an >= e - eps);
//
//    cout << "n=" << n << "\n";
//    return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int n = 0;
//	float s = 0;
//
//	cout << "Введите количество корней: ";
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		s = sqrt(2 + s);
//	}
//
//	cout << s << endl;
//
//	return 0;
//}

//int main() 
//{
//	setlocale(LC_ALL, "Russian");
//
//	int x, a, b, c, F = 0;
//
//	cout << "Введите x: ";
//	cin >> x;
//
//	cout << "Введите a: ";
//	cin >> a;
//
//	cout << "Введите b: ";
//	cin >> b;
//
//	cout << "Введите c: ";
//	cin >> c;
//
//	if (a < 2)
//	{
//		F = ((-a) * pow(x, 2)) - (sqrt(b));
//	}
//	else if (a > 5 && c == 0)
//	{
//		F = (x - a) / (c * x);
//	}
//	else
//	{
//		F = (-x) / b;
//	}
//
//	cout << F << endl;
//
//	return 0;
//}

//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	float x, y;
//
//	cout << "Введите значение кординаты x: ";
//	cin >> x;
//
//	cout << "Введите значение кординаты y: ";
//	cin >> y;
//
//	if (y > x * x && y < exp(-abs(x)))
//		cout << "Принадлежит";
//
//	return 0;
//}

//int main() {
//
//	setlocale(LC_ALL, "Russian");
//
//	float deposit_amount,
//		deposit_one,
//		deposit_two,
//		deposit_three;
//
//	cout << "Введите сумму вкладда: ";
//	cin >> deposit_amount;
//
//	deposit_one = (round((((deposit_amount * 1) / 100) / 12) * 100) / 100) * 3;
//	deposit_two = (round((((deposit_amount * 2) / 100) / 12) * 100) / 100) * 6;
//	deposit_three = (round((((deposit_amount * 3) / 100) / 12) * 100) / 100) * 12;
//
//	if (deposit_one > deposit_three) 
//	{
//		cout << "Первый вклад выгоднее для клиента";
//	}
//	else if (deposit_two > deposit_three)
//	{
//		cout << "Второй вклад выгоднее для клиента";
//	}
//	else
//	{
//		cout << "Третий вклад выгоднее для клиента";
//	}
//
//	return 0;
//}

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
