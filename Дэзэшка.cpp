#include <iostream>
#include <vector>

using namespace std;

auto FillZeroes(int width, int height)
{
    vector<vector<int>> VECTAAA;


    for (int i = 0; i < height; i++)
    {
        vector<int> v_vectore;
        for (int y = 0; y < width; y++)
        {
            v_vectore.push_back(0);
        }
        VECTAAA.push_back(v_vectore);
    }


    return VECTAAA;
}


auto FillCin(int width, int height)
{
    vector<vector<int>> VECTAAA;


    for (int i = 0; i < height; i++)
    {
        vector<int> v_vectore;
        for (int y = 0; y < width; y++)
        {
            int user;
            cin >> user;
            v_vectore.push_back(user);
        }
       VECTAAA.push_back(v_vectore);
    }


    return VECTAAA;
}


int Sum(vector<vector<int>> VECTAAA, int width, int height)
{
    int count = 0;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            count += VECTAAA[i][y];
        }
    }


    return count;
}


int Min(vector<vector<int>> VECTAAA, int width, int height)
{
    int count = 999999999999;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            if (VECTAAA[i][y] < count)
                count = VECTAAA[i][y];
        }
    }


    return count;
}


int Max(vector<vector<int>> VECTAAA, int width, int height)
{
    int count = 0;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            if (VECTAAA[i][y] > count)
                count = VECTAAA[i][y];
        }
    }


    return count;
}


int Below(vector<vector<int>> VECTAAA, int width, int height)
{
    int count = 0, sum = 0, ans;


    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            count++;
            sum += VECTAAA[i][y];
        }
    }


    ans = sum / count;
    return ans;
}


void ShowElements(vector<vector<int>> VECTAAA, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int y = 0; y < width; y++)
        {
            cout << VECTAAA[i][y] << " ";
        }
        cout << "\n";
    }
}


int main()
{
  


    //Задание 1. Нули и нули
    vector<vector<int>> VECTAAA;
    VECTAAA = FillZeroes(10, 5);



    //Задание 2. Рукастый пользователь вводит числа
    vector<vector<int>> VictorBravo;
    VECTAAA = FillCin(5, 6);



    //Задание 3. По чём сумма векторов?
    int summ = Sum(VictorBravo, 2, 4);



    //Задание 4. Мало векторов, мало мало векторов
    int min = Min(VictorBravo, 1, 5);



    //Задание 5. Макси векторов, макси макси векторов
    int max = Max(VictorBravo, 6, 7);



    //Задание 6. Средне векторов, средне средне векторов
    int below = Below(VictorBravo, 9, 10);

}















































































//Кто прочитал, тот самый лучший человек и того будет преследовать удача с счастьем