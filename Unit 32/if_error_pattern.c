#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int gender;      // ����: ���� 1, ���� 2
    int age;         // ����
    int isOwner;     // ���� ���� ����: �ڰ� 1, ������ 0

    scanf("%d %d %d", &gender, &age, &isOwner);

    printf("�ȳ��ϼ���.\n");
    printf("���� ����.\n");

    if (gender == 2)                  // ���ڶ��
    {
        printf("�ȳ����輼��.\n");    // �ߺ� �ڵ�
        printf("���� �ݴ´�.\n");     // �ߺ� �ڵ�
        return 0;                     // ���α׷� ����
    }

    if (age < 30)                     // 30�� �̸��̶��
    {
        printf("�ȳ����輼��.\n");    // �ߺ� �ڵ�
        printf("���� �ݴ´�.\n");     // �ߺ� �ڵ�
        return 0;                     // ���α׷� ����
    }

    if (isOwner == 0)                 // ���������
    {
        printf("�ȳ����輼��.\n");    // �ߺ� �ڵ�
        printf("���� �ݴ´�.\n");     // �ߺ� �ڵ�
        return 0;                     // ���α׷� ����
    }

    return 0;    // ���α׷� ����
}
