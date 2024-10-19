// pract2_rubtsova.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    
    setlocale(LC_ALL, "Russian");

   // 20.1 одномерный массив

   /* srand(time(NULL));
    int ch=0;
    int nech=0;
    int res;
    int massiv[10];
    
    for (int i = 0; i < 10; i++)
    {
        massiv[i] = rand() % 100;
        std::cout << massiv[i] << " " << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            ch += massiv[i];
        }
        else {
            nech += massiv[i];
        }
    }
    std::cout << "Cумма элементов с четными индексами равна:" << ch << std::endl;
    std::cout << "Cумма элементов с нечетными индексами равна:" << nech << std::endl;
    std::cout << "Разница между между суммой элементов с четными и нечетными индексами равна:" << ch - nech;*/

    //20.2 двумерный массив

    srand(time(NULL));
    int sum=1;
    int massiv2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            massiv2[i][j] = rand() % 100;
            std::cout << massiv2[i][j] << "\t ";
            sum *= massiv2[i][j];
        }
        std::cout << std::endl; 
    }

    std::cout << "произведение всех элементов в каждой строке многомерного массива равна:" << sum << std::endl;



}
//20.3 структура

    struct Invoice 
    {

    char number[10];
    char description[10];
    double amount;
    };

    int main()
    {
        Invoice myInvoise;

    }


        /*std::cout << "введите кол-во счётов\n";
        std::cin >> myInvoise.amount;
        std::cout << "введите описание счёта\n";
            std::cin >> myInvoise.description;
            std::cout << "введите номер счёта\n";
            std::cin >> myInvoise.number;*/
        

   

//20.4

   /* class Dictionary
    {
    private:
        char words[10];
        int count;
    public:
        Dictionary() : count(0) {}
        void addWords(char dictionaryWords[10])
        {

        }

        void removeWord(char dictionaryWords[10])
        {

        }
    };

    int main()
    {
        Dictionary dictionary;
       
        char dictionaryWords[50];
        std::cout << "введите слово";
        


    }*/