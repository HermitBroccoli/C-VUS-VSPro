// 12414.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");



	return 0;
}

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    const int N = 10;
//    int matrix[N][N];
//    int n;
//
//    do
//    {
//        cout << "Введите размер матрицы (не больше 10): ";
//        cin >> n;
//
//    } while (n > 10);
//
//    srand(time(NULL));
//
//    for (int i = 0; i < n; ++i)
//        for (int j = 0; j < n; ++j)
//            matrix[i][j] = rand() % 89 + 10; // заполняем числами от 10 до 99
//
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//            cout << matrix[i][j] << ' ';
//        cout << endl;
//    }
//
//    for (int i = 0, k = n - 1; i < n; ++i, --k)
//        for (int j = 0, l = n - 1; l > i; ++j, --l)
//        {
//            int buf = matrix[j][i];
//            matrix[j][i] = matrix[k][l];
//            matrix[k][l] = buf;
//        }
//
//    cout << endl;
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//            cout << matrix[i][j] << ' ';
//        cout << endl;
//    }
//    return 0;
//}

//int Random(int min, int max) {
//	return min + rand() % (max - min);
//}

//int main()
//{
//
//	setlocale(LC_ALL, "Russian");
//
//	const int m = 9, n = 6;
//	int matrix[n][m], matrix2[n][m], mm = m, nn = n;
//	int k = 0;
//
//
//	cout << "Введите номер столбца который нужно удалить: ";
//	cin >> k;
//
//	while (k > 0 && k > m)
//	{
//		cout << "Введите номер столбца который нужно удалить: ";
//		cin >> k;
//	}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			matrix[i][j] = Random(1, 10);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (j != k)
//			{
//				matrix2[i][(j < k ? j : (j - 1))] = matrix[i][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << endl << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m - 1; j++)
//		{
//			cout << matrix2[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//
//	const int n = 3;
//	int matrix[n][n];
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			matrix[i][j] = Random(1, 10);
//			cout << matrix[i][j] << " ";
//		}
//
//		cout << endl;
//	}
//
//	cout << endl << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i < j || i == j) {
//				cout << 1 << " ";
//			}
//			else
//			{
//				cout << matrix[i][j] << ' ';
//			}
//		}
//
//		cout << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	const int col = 10, row = 10;
//
//	setlocale(LC_ALL, "Russian");
//
//	int arr[10][10] = {
//		{1, -15, 5, 9, 2, 11, 9, 66, 111, 6},
//		{2, -25, -6, 21, 12, 1, 4, 44, 6, 3}
//	};
//
//	for (int i = 0; i < 10; i++)
//	{
//			
//		double sum = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			sum += arr[j][i];
//		}
//
//		double srz = sum / col;
//
//		double kol = 0;
//		for (int k = 0; k < 10; k++)
//		{
//			if (arr[k][i] > srz)
//			{
//				kol++;
//			}
//		}
//
//		cout << "Столбец " << i+1 << ": среднее арифметическое значение: " << srz <<"; количество элементов: " << kol << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;
//	float a[10] = {
//		1, 5, 8, 7, 2.25, 0.36, 0.650, -0.002, 0.36, 8.25
//	};
//	int t;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (i % 2 != 0 && j % 2 != 0)
//			{
//				if (a[i] < a[j])
//				{
//					t = a[i];
//					a[i] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << ' ';
//	}
//
//	return 0;
//}

//int main()
//{
//	float p[10] = {
//		1, 5, -6, 7, 2.25, 0.36, 0.650, -0.002, 0.36, 8.25
//	}, a = 5, b = 7;
//	int n = 10;
//	for (int i = 0; i < n; i++)
//	{
//		if ((p[i]>=a)&&(p[i]<=b))
//		{
//			cout << p[i] << ' ';
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if ((p[i] < a)||(p[i]<=b))
//		{
//			cout << p[i] << ' ';
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//    const int n = 10;
//    double arr[n];
//    int max = 0, ind = 0, sum = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "arr[" << i << "]= ";
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (abs(arr[i]) > max)
//        {
//            max = abs(arr[i]);
//            ind = i;
//        }
//    }
//
//    cout << "\nНомер максимального по модулю элемента массива: " << ind;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > 0)
//        {
//            ind = i;
//            break;
//        }
//    }
//
//    for (int i = ind + 1; i < n; i++)
//    {
//        sum += arr[i];
//    }
//
//    cout << "\nСумма элементов после положительного: " << sum;
//
//	return 0;
//}

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
