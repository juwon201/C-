//#include <iostream>
//
//using namespace std;
//void main()
//{
//	int number;
//	int count;
//	cin >> number >> count;
//
//	cout << "new : " << number << " " << count << endl;
//}

//#include <iostream>
//
//using namespace std;
//void main()
//{
//	int* buff;
//	buff = new int[2];
//	
//	cin >> buff[0] >> buff[1];
//
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//	delete buff;
//}

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//void main()
//{
//	int* buff;
//	buff = new int[2];
//
//	cin >> buff[0] >> buff[1];
//
//	ofstream fout("file.txt");
//	fout << buff[0] << " " << buff[1] << endl;
//	fout.close();
//
//	ifstream fin;
//	fin.open("file.txt");
//	fin >> buff[2] >> buff[3];
//	cout << "new : " << buff[2] << " " << buff[3] << endl;
//	fin.close();
//
//	delete buff;
//}

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void main()
{
	const int max = 101;
	
	cout << "인원 수 : ";
	int number;
	cin >> number;

	int* buff;
	buff = new int[number];

	srand(time(NULL));
	for (int i = 0; i < number; i++)
		buff[i] = rand() % max;

	cout << "성적 : ";
	for (int i = 0; i < number; i++)
	{
		cout << buff[i] << " ";
	}
	cout << endl;

	int time = 0;
	int people = 1;
	for (int i = 0; i < number; i++)
	{
		if (buff[i] > time)
		{
			time = buff[i];
			people = 1;
		}
		else if (buff[i] == time)
			people++;
	}

	cout << "최다점수 : " << time << ", 최고점 맞은 인원 수 : " << people << endl;

	delete buff;
}        

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void main()
//{
//	string s = "example string";
//	char search = 'x';
//	int at = s.find(search, 0);
//	cout << s << endl;
//	cout << "'x' is at" << at << " " << endl;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void main()
//{
//	vector<int> v;
//	v.push_back(10)
//}