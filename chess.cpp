#include <iostream>

using namespace std;

int Kon (char a, int b)
{
  char a1; // переменная для поля-буквы
  int b1; // переменная для указания строки возможного хода (число)
  int n = 1; //переменная для движения по строкам поля
  while (n <= 8)
  {
    a1 = a;
    b1 = n;
    if ((b - n) == 2)
    {
      if (a >= 'b') //условие, которое даст нам не выйти с доски при дальнейшем вычитании
      {
        a1 = a - 1;
        cout << a1 << b1 << endl;
        }
      if (a <= 'g')
      {
        a1 = a + 1;
        cout << a1 << b1 << endl;
        }
      }

    if ((b - n) == -2)
    {
      if (a >= 'b')
      {
        a1 = a - 1;
        cout << a1 << b1 << endl;
        }

      if (a <= 'g')
      {
        a1 = a + 1;
        cout << a1 << b1 << endl;
        }

      }

    if ((b - n) == 1)
    {
      if (a >= 'c')
      {
        a1 = a - 2;
        cout << a1 << b1 << endl;
        }
      if (a <= 'f')
      {
        a1 = a + 2;
        cout << a1 << b1 << endl;
        }
      }

    if ((b - n) == -1)
    {
      if (a >= 'c')
      {
        a1 = a - 2;
        cout << a1 << b1 << endl;
        }
      if (a <= 'f')
      {
        {
          a1 = a + 2;
          cout << a1 << b1 << endl;
          }
        }

      }

    n++;
    }

  return a;
  }

int main()
{
  char a;
  int b;
  cout << "Введите расположение фигуры: ";
  cin >> a;
  cin >> b;
  cout << endl;
  cout << "Возможные ходы коня: ";
  cout << endl;
  Kon (a, b);

  return 0;
  }
