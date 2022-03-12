#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include <winreg.h>
//#include <windows.h>

void Menu();
void welcome();

void win11re10Menu();
void win11re10();

void Rightclick();
void RightclickMenu();


int main()
{
	int choice = '\0';
	welcome();
	while (1)
	{
		Menu();
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 0:
			system("CLS");
			win11re10();
			break;
		case 1:
			system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61\n");		//打开卓越性能 
			system("powercfg.cpl");		//打开电源选项控制面板 
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:
			system("taskkill /f /im explorer.exe");
			system("start explorer");
			break;
		case 7:
			exit(0);
			break;
		default:
			exit(0);
			break;
		}
		system("CLS");
	}
	return 0;
}

void welcome()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t=============欢迎使用WindowsUltra===========\n");
	printf("\n\n\n");
	printf("\t\t\t=============制作者:   FSloper =============\n");
	printf("\n\n\n");
	printf("\t\t\t=============按回车键进入主菜单==============\n");
	while (getchar() == 0);		//Sleep(2000);如果要显示一下请使用Sleep加毫秒数 
	system("CLS");
}

void Menu()
{
	printf("													   \n");
	printf("=======================================================\n");
	printf("                                                       \n");
	printf("                   WindowsUltra_Bate1.0                \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                     系统功能菜单                       \n");
	printf("                ------------------------               \n");
	printf("                   0.win11真难用                   \n");
	printf("                ------------------------               \n");
	printf("                   1.打开卓越性能模式                   \n");
	printf("                ------------------------               \n");
	printf("                   2.			                       \n");
	printf("                ------------------------               \n");
	printf("                   3.			                       \n");
	printf("                ------------------------               \n");
	printf("                   4.			                       \n");
	printf("                ------------------------               \n");
	printf("                   5.我反悔了(打开日志)                 \n");
	printf("                ------------------------               \n");
	printf("                   6.重新启动资源管理器                  \n");
	printf("                ------------------------               \n");
	printf("                   7.退出程序或任意建                    \n");
	printf("=======================================================\n");
	printf("请输入菜单编号进行选择（0-7）：");
}

void win11re10()
{
	int choice = '\0';
	while (1)
	{
		win11re10Menu();
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 0:
			system("CLS");
			Rightclick();
			break;
		default:
			system("CLS");
			main();
			break;

		}
		system("CLS");
	}
}

void win11re10Menu()
{
	printf("													   \n");
	printf("=======================================================\n");
	printf("                                                       \n");
	printf("                  win11用户回归win10设置                 \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                         功能菜单                      \n");
	printf("                ------------------------               \n");
	printf("                   0.右键菜单样式设置                    \n");
	printf("                ------------------------               \n");
	printf("                   1.				                   \n");
	printf("                ------------------------               \n");
	printf("                   2.			                       \n");
	printf("                ------------------------               \n");
	printf("                   3.			                       \n");
	printf("                ------------------------               \n");
	printf("                   4.			                       \n");
	printf("                ------------------------               \n");
	printf("                   5.			                       \n");
	printf("                ------------------------               \n");
	printf("                   6.                                  \n");
	printf("                ------------------------               \n");
	printf("                   7.返回主页面                        \n");
	printf("=======================================================\n");
	printf("请输入菜单编号（0-7）：");
}

void Rightclick()
{
	int choice = '\0';
	while (1)
	{

		RightclickMenu();
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 0:
			system("reg add HKCU\\Software\\Classes\\CLSID{86ca1aa0-34aa-4e8b-a509-50c905bae2a2}\\InprocServer32 /f /ve");
			system("taskkill /f /im explorer.exe");
			system("start explorer");
			break;
		case 1:
			system("reg delete HKCU\\Software\\Classes\\CLSID{86ca1aa0-34aa-4e8b-a509-50c905bae2a2}\\InprocServer32 /va /f");
			system("taskkill /f /im explorer.exe");
			system("start explorer");
			break;
		case 2:
			system("CLS");
			win11re10();
			break;
		default:
			system("CLS");
			main();
			break;

		}
		system("CLS");
	}
}

void RightclickMenu()
{
	printf("													   \n");
	printf("=======================================================\n");
	printf("                                                       \n");
	printf("                   WindowsUltra_Bate1.0                \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                     右键功能菜单                       \n");
	printf("                ------------------------               \n");
	printf("                   0.win11变win10右键                   \n");
	printf("                ------------------------               \n");
	printf("                   1.变回win11                         \n");
	printf("                ------------------------               \n");
	printf("                   2.返回上一级                         \n");
	printf("                ------------------------               \n");
	printf("                   3.返回主菜单                         \n");
	printf("=======================================================\n");
	printf("请输入菜单编号进行选择（0-3）：");
}
