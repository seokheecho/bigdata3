/* ������ �������� - �Լ��� �̿��Ͽ� ���ڿ� �ٷ��
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main09(void) {
	char str[] = "Hello, world!";

	// strlen(�迭�ּ�) : ���ڿ��� ���̸� �����Ѵ�.
	printf("%s(%d)\n", str, strlen(str)); // ���ڿ��� ����.
	printf("%s(%d)\n", str, sizeof(str)); // �迭 ��ü�� ũ��. *sizeof�� ��ɾ��̴�. �Լ��� �ƴϴ�!

	// strcpy(target, source) : ��Ʈ�� ��ü ����. �ҽ��� �ִ� ���ڿ��� Ÿ�� �޸𸮿� �����Ѵ�.
	char str2[strlen(str) + 1]; // ������ ���ڿ��� ������ �迭�� ũ��� �׻� "���ڿ� ���� + 1" �̾�� �Ѵ�.
				  // �� �ּ��� �����ؿ��� ���ڿ� ���� ����Ұ� Ŀ�� �Ѵ�.
	strcpy(str2, str);
	printf("%s(%d;%d)\n", str2, strlen(str2), sizeof(str2));

	// strcat(target, source) : source ���ڿ��� target ���ڿ� ���� ���δ�.
	// => ���� target ���ڿ��� �����ϴ� �޸𸮴� source�� ������ �� ���� ��ŭ ���� ������ �־�� �Ѵ�.
	char str3[50];
	char str4[] = "Hello, ";
	char str5[] = "world!";

	str3[0] = 0; // �迭�� ���� ��ġ�� 0�� �־� �迭�� ���ڿ��� ��� ���� ������ ǥ���Ѵ�.
	strcat(str3, str4); // str4�� str3 �迭�� ���δ�.
	printf("%s(%d/%d)\n", str3, strlen(str3), sizeof(str3));

	strcat(str3, str5); // str5�� str3 ���ڿ� ���� ���δ�.
	                    // �� str3 �迭���� 0�� ��� �ִ� ���� ã�Ƽ� �� ����� ���ڿ��� ���δ�.
	printf("%s(%d/%d)\n", str3, strlen(str3), sizeof(str3));

	// strcmp(str1, str2) : �� ���� ���ڿ��� ���Ͽ� �� ����� �����Ѵ�.
	// => ������ 0, str1�� str2 ���� ������ ���� ���ڿ��̸� ���� ���� ���ڿ��̸� ���
	char str11[] = "aaa";
	char str12[] = "aaaa";
	char str13[] = "aab";
	char str14[] = "aaa";

	printf("%d, %d, %d, %d\n",
			strcmp(str11, str14), // = 0
			strcmp(str11, str12), // < 0
			strcmp(str11, str13), // < 0
			strcmp(str13, str11)  // > 0
			);

	// memset(�޸�, ��, ����) : ������ �޸𸮸� ������ �ʱ�ȭ��Ų��.
	// => ���� �迭�� �ʱ�ȭ��ų �� ���� ����Ѵ�.
	char str20[10]; // �迭�� ���� �� �ʱ�ȭ��Ű�� �ʰ� ����ϸ� ������ ���� ������ ��츦 �� �� �ִ�.
	                // ���� ������ �迭�� ��� ���� 0���� �ʱ�ȭ��Ų �� ����϶�!
	for (int i = 0; i < sizeof(str20); i++) {
		printf("%d ", str20[i]);
	}
	printf("\n");

	// => �迭�� �ʱ�ȭ��Ű��!
	memset(str20, 0, sizeof(str20));
	for (int i = 0; i < sizeof(str20); i++) {
		printf("%d ", str20[i]);
	}

	return EXIT_SUCCESS;
}



