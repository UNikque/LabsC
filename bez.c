#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
  int a[5]; // �������� ������ a �� 5 ���������
  int i;
  // ���� ��������� �������
  for (i = 0; i<5; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]); // &a[i] - ����� i-�� �������� �������
  }
  // ����� ��������� �������
  for (i = 0; i<5; i++)
    printf("%d ", a[i]); // ������ � ������� ������ ����������
  getchar(); getchar();
  return 0;
}
