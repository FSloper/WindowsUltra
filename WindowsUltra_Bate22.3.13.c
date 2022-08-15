#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printf.c"
FILE *fp = NULL;
//请使用gb2312编码打开源码,否则乱码 
void welcome();

void controlpanel();

void Rightclick();

int main()
{
    int choice = '\0';
    welcome();
    while (1)
    {
        Menu();
        scanf("%d", &choice);
        fp = fopen("logs.txt", "a");
        fprintf(fp, "%d,", choice);
        switch (choice)
        {
        case 0:
            system("start powershell"); 
            break;
        case 1:
            system("start cmd");
            break;
        case 2:
			//system("powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61\n"); //打开卓越性能
            system("CLS");
			controlpanel();                                                   //控制面板
            break;
        case 3:
			system("Firewall.cpl");  
            break;
        case 4:
			system("appwiz.cpl");
            break;
        case 5:
            system("hdwwiz.cpl");
            break;
        case 6:
        	system("notepad.exe logs.txt");
            break;
		case 7:
            system("start powershell stop-process -name explorer -force");
            break;
		case 8:
            fputs("\t\t前面是你上次的操作历史,建议备份,防止有隐藏问题...(每次打开都会继续前面的换行写,并不是重复记录)\n", fp);
            exit(0);
            break;
        default:
            fputs("\t\t前面是你上次的操作历史,建议备份,防止有隐藏问题...(每次打开都会继续前面的换行写,并不是重复记录)\n", fp);
            exit(0);
            break;
        }
        system("CLS");
    }
    fclose(fp);
    return 0;
}

void controlpanel()
{
    int choice = '\0';
    while (1)
    { 
		system("CLS");
		controlpanelMenu();
        scanf("%d", &choice);
        fp = fopen("logs.txt", "a");
        fprintf(fp, "%d,", choice);
        switch (choice)
        {
        case 0:
        	system("optionalFeatures.exe");
            system("appwiz.cpl");
            break;
        case 1:
        	system("sysdm.cpl");
            break;
        case 2:
        	system("dxdiag");
            break;
        case 3:
        	system("powershell.exe del battery-report.html");
        	system("powershell.exe powercfg /batteryreport");
        	break;
        default:
            system("CLS");
            main();
            break;
        }
        system("CLS");
    }
}


void Rightclick()
{
    int choice = '\0';
    while (1)
    {
        RightclickMenu();
        scanf("%d", &choice);
        fp = fopen("logs.txt", "a");
        fprintf(fp, "%d,", choice);
        switch (choice)
        {
        case 0:
            //system("reg add HKCU\\Software\\Classes\\CLSID{86ca1aa0-34aa-4e8b-a509-50c905bae2a2}\\InprocServer32 /f /ve");
            //system("start powershell stop-process -name explorer -force");
            break;
        case 1:
            //system("reg delete HKCU\\Software\\Classes\\CLSID{86ca1aa0-34aa-4e8b-a509-50c905bae2a2}\\InprocServer32 /va /f");
            //system("start powershell stop-process -name explorer -force");
            break;
        case 2:
            system("CLS");
            //win11re10();
            break;
        default:
            system("CLS");
            //main();
            break;
        }
        system("CLS");
    }
}



//
