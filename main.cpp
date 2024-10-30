#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  // here will be a code
  char num[100];
  int sysNow = 2;
  int sysAfter = 2;

  cout << "Перевести число: ";
  cin >> num;

  cout << "Из системы: ";
  cin >> sysNow;

  cout << "В систему: ";
  cin >> sysAfter;

  // here will be a conversion to new system
  cout << "Перевести число из " << sysNow << " системы счисления в " << sysAfter << " систему счисления."; 
  
  return 1;
}
