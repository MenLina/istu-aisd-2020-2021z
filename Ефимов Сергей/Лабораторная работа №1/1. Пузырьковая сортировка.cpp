//������ ������
#include<iostream>
#define SIZE 5 //������������� ������ �������. � ���� 5, ����� �� ���������� ������� ��� ������ ������

using namespace std;

//�������, ������� ������� ������
void print(int array[], int size)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << "  ";
    }
}

//������� ����������� ����������.
void bubble(int array[], int size)
{
    for (int i = SIZE; i > 0; i--)
    {
        for (int left = 0, right = 1; right < i; left++, right++)
        {
            if (array[left] > array[right])
            {
                int temp = array[left];
                array[left] = array[right];
                array[right] = temp;
            }
            print(array, size); cout << "  " << endl;
        }
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int array[SIZE] = { 10, 8, 6, 4, 2};

    cout << "�������� ������� �� ����������: " << endl;;
    print(array, SIZE);

    cout << endl << "-------------------------------------" << endl;
    cout << "������� ����������: " << endl;
    print(array, SIZE);
    cout << endl;
    bubble(array, SIZE);

    cout << "����� ����������: " << endl;

    print(array, SIZE);
    cout << endl;
    return 0;
}