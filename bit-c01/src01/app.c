/* �����ϰ� ����
=> ������
   app.c (�ҽ�)
   --�����Ϸ�--> app.obj(����)
               --��Ŀ--> app.obj + *.obj + *.lib + loader = app.exe
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Hello, World!");
	return EXIT_SUCCESS;
}
