///////////////////////////////////////////////////////////////////////////////////////////////////////////
// �߱����Ӹ���� ver.0.03
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
	//��ǻ�Ͱ� ���ڸ� ���ڸ� �����ϰ� ����ڰ� ���߸� ������ ������.
	//�ڸ����� ���� ������ �Ѵ�.
	bool loop = true;
	int seed = time(NULL);
	int selectNumber = 0;
	int inputNumber1, inputNumber2 = 0;

	srand(seed);
	selectNumber = (rand() % 99);
	if (selectNumber < 10)	selectNumber = selectNumber + 10;

	while (loop)
	{
		std::cout << "���ڸ� �����߽��ϴ�. 1~99������ �����Դϴ�. \n";
		std::cout << "���ڸ� ���ڸ� ���������� �Է��ϰ� ���纸����...\n";
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
				   std::cout << "����!!\n";
				   std::cout << "������ ��ȣ�� " << selectNumber << "�Դϴ�.\n";
		}break;
		case 1:
		case 10:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1��Ʈ����ũ!!\n";
				   std::cout << "�й��� �ּ���.\n";
		}break;
		case 19:
		case 91:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1��Ʈ����ũ1��!!\n";
				   std::cout << "�й��� �ּ���.\n";
		}break;
		case 9:
		case 90:
		{
				   std::cout << "************************************************\n";
				   std::cout << "1��!!\n";
				   std::cout << "�й��� �ּ���.\n";
		}break;
		case 99:
		{
				   std::cout << "************************************************\n";
				   std::cout << "2��!!\n";
				   std::cout << "�й��� �ּ���.\n";
		}break;
		default:
		{
				   std::cout << "************************************************\n";
				   std::cout << "Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���.\n\n";
		}break;
		}
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ver0.02
	//��ǻ�Ͱ� ���ڸ� ���ڸ� �����ϰ� ����ڰ� ���߸� ������ ������.
	//bool loop = true;
	//int seed = time(NULL);
	//int selectNumber = 0;
	//int inputNumber = 0;
	//srand(seed);

	//selectNumber = (rand() % 9) + 1;

	//while (loop)
	//{
	//	std::cout << "���ڸ� �����߽��ϴ�. 1~9������ �����Դϴ�. \n";
	//	std::cout << "���纸����...";
	//	std::cin >> inputNumber;
	//	if (selectNumber == inputNumber)
	//	{
	//		loop = false;
	//		std::cout << "************************************************\n";
	//		std::cout << "����!!\n";
	//		std::cout << "������ ��ȣ�� " << selectNumber << "�Դϴ�.\n";
	//	}
	//	else
	//	{
	//		std::cout << "************************************************\n";
	//		std::cout << "Ʋ�Ƚ��ϴ�. �ٽ� �Է��� �ּ���.\n\n";
	//	}
	//}

	////////////////////////////////////////////////////////////////////////////////////////////////////////
	//ver0.01
	//��ǻ�Ͱ� ���ڸ� ���ڸ� �����Ѵ�.
	//bool loop = true;
	//int seed = time(NULL);
	//int number = 0;
	//srand(seed);

	//while (loop)
	//{
	//	number = (rand() % 9 ) + 1;
	//	std::cout << "������ ��ȣ�� " << number << "�Դϴ�.\n" << "�����÷��� ����'0'�� �����ּ���.";
	//	std::cin >> loop;
	//}

	return;
}