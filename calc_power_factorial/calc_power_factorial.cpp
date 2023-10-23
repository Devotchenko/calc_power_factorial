#include <iostream>


int main()
{
	setlocale(LC_ALL, "rus");
	
	char Operator;
	bool repeat = true;

	while (repeat) 
	{
	
	
	std::cout << "введите оператор вычисления 	(+ сложение x и y, - вычитание y из x, * умножение x на y,\n"; 
	std::cout << " / деление x на y, ^ возведение x в степень y, !факториал числа х):" << "\n";

	std::cin >> Operator;
	if (!std::cin) {
		std::cout << "неправильный ввод\n";
		return 1;
	}

	switch (Operator)
	{
	case '+':
	{
		int x = 0;
		int y = 0;
		int z = 0;
		std::cout << "введите первое число:\n";
		std::cin >> x;
		
		if (!std::cin) 
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		std::cout << "введите второе число:\n";
		std::cin >> y;
		if (!std::cin)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		z = x + y;
		std::cout << "сложение чисел  " << x << " и " << y << " дает ответ " << z << "\n";
		break;
	}
	
	case '-':
	{
		int x = 0;
		int y = 0;
		int z = 0;
		std::cout << "введите первое число:\n";
		std::cin >> x;

		if (!std::cin)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		std::cout << "введите второе число:\n";
		std::cin >> y;
		if (!std::cin)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		z = x - y;
		std::cout << "разница чисел  " << x << " и " << y << " дает ответ " << z << "\n";
		break;
	}
	case '*':
	{
		int x = 0;
		int y = 0;
		int z = 0;
		std::cout << "введите первое число:\n";
		std::cin >> x;

		if (!std::cin)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		std::cout << "введите второе число:\n";
		std::cin >> y;
		if (!std::cin)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}
		z = x * y;
		std::cout << "умножение   " << x << " на " << y << " дает ответ " << z << "\n";
		break;
	}
	case '!':
	{
		int x = 0;
		int i = 1;
		int fact = 1;
		std::cout << "введите число от 0 до 12:\n";
		std::cin >> x;
		

		if (!std::cin || x > 12)
		{
			std::cout << "неправильный ввод\n";
			return 1;
		}		
		while (i < x) 
		{
			fact *= ++i;
		}
		std::cout << " Факториал числа   " << x << " дает ответ " << fact << "\n";
		break;
	}
	
	case '^':
	{
		int x = 0;
		int y = 0;
		int result = 1;

		std::cout << "Введите число, которое нужно возвести в степень:\n";
		std::cin >> x;

		if (!std::cin)
		{
			std::cout << "Неправильный ввод\n";
			return 1;
		}

		std::cout << "Введите степень, в которую нужно возвести число:\n";
		std::cin >> y;

		if (!std::cin)
		{
			std::cout << "Неправильный ввод\n";
			return 1;
		}

		for (int i = 0; i < y; i++)
		{
			result *= x;
		}

		std::cout << x << " в степени " << y << " равно " << result << "\n";
		break;
	}
	case '/':
	{
		float x = 0.0;
		float y = 0.0;
		float z = 0.0;

		std::cout << "Введите делимое:\n";
		std::cin >> x;

		if (!std::cin)
		{
			std::cout << "Неправильный ввод\n";
			return 1;
		}

		std::cout << "Введите делитель:\n";
		std::cin >> y;

		if (!std::cin)
		{
			std::cout << "Неправильный ввод\n";
			return 1;
		}
		if (y == 0) {
			std::cout << "на ноль делить нельзя\n";
			return 2;
		}
		z = x / y;
		std::cout << "деление  " << x << " на " << y << " дает ответ " << z << "\n";
		break;
	}
	default:
		std::cout << Operator << " - некорректный ввод! ";
		std::cout << "Сделайте правильный выбор (+,-,*,/,^,!): ";
	}

	char answer;
	std::cout << "хотите провести еще одно вычисление? (y/n)\n";
	std::cin >> answer;
	if (answer == 'n') {
		std::cout << "спасибо за использование, до свидания\n";
		repeat = false;
	}
	}

	return 0;
}

