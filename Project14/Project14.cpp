#include <iostream>

using namespace std;

int main()
{
	cout << "==========================================";
	srand(time(NULL));
	cout << "==========================================";
	cout << "\n\n";
	cout << "Tap - 1";
	cout << "\n\n\n\n";

	int min_number_1 = -10;
	int max_number_1 = 20;
	const int num_1 = 5;
	int number_m[num_1] = {};
	int number_n[num_1] = {};
	int number_c[num_1] = {};
	bool chek;

	for (int q = 0; q < num_1; q++)
	{
		number_m[q] = rand() % (max_number_1 - min_number_1 + 1) + min_number_1;
	}
	for (int w = 0; w < num_1; w++)
	{
		number_n[w] = rand() % (max_number_1 - min_number_1 + 1) + min_number_1;
	}
	cout << "M - : ";
	for (int q = 0; q < num_1; q++)
	{
		cout << number_m[q] << ",";
	}
	cout << "\n";
	cout << "N - : ";
	for (int w = 0; w < num_1; w++)
	{
		cout << number_n[w] << ",";
	}
	cout << "\n";
	cout << "C -  : ";
	for (int i = 0; i < num_1; ++i) 
	{
		chek = false;
		for (int j = 0; j < i; ++j)
		{
			if (number_m[j] == number_m[i]) 
			{
				chek = true;
				break;
			}
		}
		if (chek) continue;
		for (int j = 0; j < num_1; ++j) 
		{
			if (number_m[i] == number_n[j]) 
			{
				cout << number_m[i] << " ";
				break;
			}
		}
	}
	cout << "\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==========================================";
	cout << "\n\n";
	cout << "Tap - 2";
	cout << "\n\n\n\n";

	int min_number_2 = -5;
	int max_number_2 = 20;
	const int num_2 = 8;
	bool chek_2;
	int number_2_a[num_2] = {};
	int number_2_b[num_2] = {};
	int number_2_c[num_2] = {};

	for (int e = 0; e < num_2; e++)
	{
		number_2_a[e] = rand() % (max_number_2 - min_number_2 + 1) + min_number_1;
	}
	for (int r = 0; r < num_2; r++)
	{
		number_2_b[r] = rand() % (max_number_2 - min_number_2 + 1) + min_number_1;
	}
	cout << "M - :";
	for (int e = 0; e < num_2; e++)
	{
		cout << number_2_a[e] << ",";
	}
	cout << "\n";
	cout << "N - :";
	for (int r = 0; r < num_2; r++)
	{
		cout << number_2_b[r] << ",";
	}
	int c_size = 0;
	for (int i = 0; i < num_2; ++i) 
	{
		chek_2 = false;
		for (int j = 0; j < num_2; ++j) 
		{
			if (number_2_a[i] == number_2_b[j]) 
			{
				chek_2 = true;
				break;
			}
		}
		if (!chek_2) 
		{
			bool already_exists = false;
			for (int k = 0; k < c_size; ++k)
			{
				if (number_2_c[k] == number_2_a[i]) 
				{
					already_exists = true;
					break;
				}
			}
			if (!already_exists) {
				number_2_c[c_size++] = number_2_a[i];
			}
		}
	}
	cout << "\n";
	cout << "C - :";
	for (int i = 0; i < c_size; ++i) {
			cout << number_2_c[i] << " ";
		}
	cout << endl;
	cout << "\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==========================================";
	cout << "\n\n";
	cout << "Tap - 3";
	cout << "\n\n\n\n";

	int min_number_3 = -10;
	int max_number_3 = 20;
	const int num_3 = 10;
	int number_3_m[num_3] = {};
	int number_3_c = {};

	for (int t = 0; t < num_3; t++)
	{
		number_3_m[t] = rand() % (max_number_3 - min_number_3 + 1) + min_number_3;
	}
	cout << "M - :";
	for (int t = 0; t < num_3; t++)
	{
		cout << number_3_m[t] << ",";
	}
	int p_N = 0;
	int n_N = 0;
	cout << "\n";
	for (int t = 0; t < num_3; ++t) {
		if (number_3_m[t] > 0) {
			++n_N;
			if (n_N > p_N) {
				p_N = n_N;
			}
		}
	}
	cout << "\n\n";
	system("pause");
	cout << "Answer : " << p_N;
	cout << "\n\n\n";
	cout << "==========================================";
	cout << "\n\n";
	cout << "Tap - 4";
	cout << "\n\n\n\n";

	int min_number_4 = -20;
	int max_number_4 = 20;
	const int num_4 = 10;
	int number_4[num_4] = {};
	int neg_num = 0;
	int pos_num = 0;

	for (int p = 0; p < num_4; p++)
	{
	    number_4[p] = rand() % (max_number_4 - min_number_4 + 1) + min_number_4;
	}

	cout << "Number : ";

	for (int p = 0; p < num_4; p++)
	{
		cout << number_4[p] << ",";
	}
	cout << "\n";
	for (int p = 0; p < num_4; ++p) 
	{
		if (number_4[p] >= 0) {
			pos_num++;
		}
		else {
			neg_num++;
		}
	}
	cout << "Answer : ";
	for (int p = 0; p < num_4; ++p) 
	{
		if (number_4[p] >= 0) {
			std::cout << number_4[p] << ",";
		}
	}
	for (int p = 0; p < num_4; ++p) {
		if (number_4[p] < 0) {
			std::cout << number_4[p] << ",";
		}
	}
	cout << endl;
	cout << "\n\n";
	system("pause");
	cout << "\n\n\n";
	cout << "==========================================";
	cout << "\n\n";
	cout << "Tap - 5";
	cout << "\n\n\n\n";

	int min_number_5 = -20;
	int max_number_5 = 20;
	const int num_5 = 10;
	int number_5[num_5] = {};

	for (int f = 0; f < num_5; f++)
	{
		number_5[f] = rand() % (max_number_5 - min_number_5 + 1) + min_number_5;
	}
	cout << "Number : ";
	for (int f = 0; f < num_5; f++)
	{
		cout << number_5[f] << ",";
	}
	for (int f = 0; f < num_5; ++f) {
		if (number_5[f] < 0) {
			number_5[f] = -number_5[f];
		}
	}
	cout << "\n";
	cout << "Answer : ";
	for (int f = 0; f < num_5; ++f) {
		cout << number_5[f] << ",";
	}
	cout << endl;
	cout << "\n\n\n";
	cout << "==========================================";
}
