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

    if (gender == 2)
        goto EXIT;    // ������ �߻������Ƿ� EXIT�� �̵�

    if (age < 30)
        goto EXIT;    // ������ �߻������Ƿ� EXIT�� �̵�

    if (isOwner == 0)
        goto EXIT;    // ������ �߻������Ƿ� EXIT�� �̵�

EXIT:
    printf("�ȳ����輼��.\n");    // ���� ó�� �ڵ带
    printf("���� �ݴ´�.\n");     // �� ���� �����

    return 0;    // ���α׷� ����
}
