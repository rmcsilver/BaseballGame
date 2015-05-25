///////////////////////////////////////////////////////////////////////////////////////////////////////////
// 야구게임만들기 ver.0.03
// since. 20150525
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <time.h>
#include <Windows.h>
//#include <stdio.h>

void main()
{
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ver0.03
	//컴퓨터가 두자리 숫자를 선택하고 사용자가 맞추면 게임이 끝난다.
	//자릿수에 따라 판정을 한다.
	bool loop = true;
	int seed = time(NULL);
	int selectNumber = 0;
	int inputNumber1, inputNumber2 = 0;

	srand(seed);
	selectNumber = (rand() % 99);
	if (selectNumber < 10)	selectNumber = selectNumber + 10;

	while (loop)
	{
		std::cout << "숫자를 선택했습니다. 1~99까지의 숫자입니다. \n";
		std::cout << "두자리 숫자를 순차적으로 입력하고 맞춰보세요...\n";
		std::cin >> inputNumber1;
		std::cin >> inputNumber2;

		int number1 = selectNumber / 10;
		int number2 = selectNumber % 10;
		int result = 0;

		if (inputNumber1 == number1)		result = result + 10;
		else if (inputNumber1 == number2)	result = result + 90;

		if (inputNumber2 == number2)		result = result + 1;
		else if (inputNumber2 == number1)	result = result + 9;


		switch (result)
		{
		case 11:
		{
				   loop = false;
				   std::cout << "************************************************\n";
				   std::cout << "빙고!!\n";
				   std::cout << "선택한 번호는 " << selectNumber << "입니다.\n";
		}break;
		case 1:
		case 10:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1스트라이크!!\n";
				   std::cout << "분발해 주세요.\n";
		}break;
		case 19:
		case 91:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1스트라이크1볼!!\n";
				   std::cout << "분발해 주세요.\n";
		}break;
		case 9:
		case 90:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1볼!!\n";
				   std::cout << "분발해 주세요.\n";
		}break;
		case 99:
		{
				   std::cout << "************************************************\n";
				   std::cout << "2볼!!\n";
				   std::cout << "분발해 주세요.\n";
		}break;
		default:
		{
				   std::cout << "************************************************\n";
				   std::cout << "틀렸습니다. 다시 입력해 주세요.\n\n";
		}break;
		}
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ver0.02
	//컴퓨터가 한자리 숫자를 선택하고 사용자가 맞추면 게임이 끝난다.
	//bool loop = true;
	//int seed = time(NULL);
	//int selectNumber = 0;
	//int inputNumber = 0;
	//srand(seed);

	//selectNumber = (rand() % 9) + 1;

	//while (loop)
	//{
	//	std::cout << "숫자를 선택했습니다. 1~9까지의 숫자입니다. \n";
	//	std::cout << "맞춰보세요...";
	//	std::cin >> inputNumber;
	//	if (selectNumber == inputNumber)
	//	{
	//		loop = false;
	//		std::cout << "************************************************\n";
	//		std::cout << "빙고!!\n";
	//		std::cout << "선택한 번호는 " << selectNumber << "입니다.\n";
	//	}
	//	else
	//	{
	//		std::cout << "************************************************\n";
	//		std::cout << "틀렸습니다. 다시 입력해 주세요.\n\n";
	//	}
	//}

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ver0.01
	//컴퓨터가 한자리 숫자를 선택한다.
	//bool loop = true;
	//int seed = time(NULL);
	//int number = 0;
	//srand(seed);

	//while (loop)
	//{
	//	number = (rand() % 9 ) + 1;
	//	std::cout << "선택한 번호는 " << number << "입니다.\n" << "끝내시려면 숫자'0'을 눌러주세요.";
	//	std::cin >> loop;
	//}

	return;
}