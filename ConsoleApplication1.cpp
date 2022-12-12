// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int R;
    std::cin>>R;
    //const int R = 6;
    vector<vector <int>>
        array(R, vector <int>(R));
    int num = 1;
   // int array[R][R] = { 0 };
    for (int s = 0; s <= R-2; s++)
    {
        for (int i = 0+s; i < R-s; i++) {
            array[s][i] = num;
            num++;
        }
        for (int i = s + 1; i < R - s; i++) {
            array[i][R-s-1] = num;
            num++;
        }
         for (int i = R - s-2 ; i + 1 > s; i--) {
            array[R - s - 1][i] = num;
            num++;
        }
        
        for (int i = R - s - 2; i > s; i--) {
            array[i][s] = num;
            num++;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < R; j++) {
            printf("%3d", array[i][j]);
        }
        cout << endl;
    }
    return 0;
}
