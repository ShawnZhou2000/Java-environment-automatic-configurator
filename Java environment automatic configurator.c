#include <stdio.h>
#include <string.h>
#include <windows.h>
#define maxlength 256
char installPath[maxlength];
char command1[maxlength];
char command2[maxlength];
int main() {
	printf("请输入jdk安装路径:");
	gets(installPath);
	strcpy(command1, "setx \"Path\" \"");
	strcat(command1, installPath);
	strcat(command1, "\\bin;%Path%\" /m");
	strcpy(command2, "setx \"JAVA_HOME\" \"");
	strcat(command2, installPath);
	strcat(command2, "\" /m");
	
	system(command1);
	system(command2);
	
	system("pause");

	return 0;
}
