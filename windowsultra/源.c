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
			system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61\n");		//��׿Խ���� 
			system("powercfg.cpl");		//�򿪵�Դѡ�������� 
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
	printf("\t\t\t=============��ӭʹ��WindowsUltra===========\n");
	printf("\n\n\n");
	printf("\t\t\t=============������:   FSloper =============\n");
	printf("\n\n\n");
	printf("\t\t\t=============���س����������˵�==============\n");
	while (getchar() == 0);		//Sleep(2000);���Ҫ��ʾһ����ʹ��Sleep�Ӻ����� 
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
	printf("                     ϵͳ���ܲ˵�                       \n");
	printf("                ------------------------               \n");
	printf("                   0.win11������                   \n");
	printf("                ------------------------               \n");
	printf("                   1.��׿Խ����ģʽ                   \n");
	printf("                ------------------------               \n");
	printf("                   2.			                       \n");
	printf("                ------------------------               \n");
	printf("                   3.			                       \n");
	printf("                ------------------------               \n");
	printf("                   4.			                       \n");
	printf("                ------------------------               \n");
	printf("                   5.�ҷ�����(����־)                 \n");
	printf("                ------------------------               \n");
	printf("                   6.����������Դ������                  \n");
	printf("                ------------------------               \n");
	printf("                   7.�˳���������⽨                    \n");
	printf("=======================================================\n");
	printf("������˵���Ž���ѡ��0-7����");
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
	printf("                  win11�û��ع�win10����                 \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                         ���ܲ˵�                      \n");
	printf("                ------------------------               \n");
	printf("                   0.�Ҽ��˵���ʽ����                    \n");
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
	printf("                   7.������ҳ��                        \n");
	printf("=======================================================\n");
	printf("������˵���ţ�0-7����");
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
	printf("                     �Ҽ����ܲ˵�                       \n");
	printf("                ------------------------               \n");
	printf("                   0.win11��win10�Ҽ�                   \n");
	printf("                ------------------------               \n");
	printf("                   1.���win11                         \n");
	printf("                ------------------------               \n");
	printf("                   2.������һ��                         \n");
	printf("                ------------------------               \n");
	printf("                   3.�������˵�                         \n");
	printf("=======================================================\n");
	printf("������˵���Ž���ѡ��0-3����");
}
