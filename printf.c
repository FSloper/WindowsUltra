#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//请使用gb2312编码打开源码,否则乱码 
void Menu();
void welcome();

void controlpanelMenu();
void battery();
void Rightclick();

void welcome()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t=============欢迎使用WindowsUltra===========\n");
	printf("\n\n\n");
	printf("\t\t\t=============制作者:   FSloper =============\n");
	printf("\n\n\n");
	printf("\t\t\t=============按回车键进入主菜单==============\n");
	printf("\n\n\n");
	printf("\t\t\t======请使用GB2312编码打开源码,否则乱码======\n");
	getchar(); // Sleep(2000);如果要显示一下请使用Sleep加毫秒数
	system("CLS");
}

void battery()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t=============请返回本程序存放目录查找battery-report.html===========\n");
	printf("\n\n\n");
	printf("\t\t\t=============请返回本程序存放目录查找battery-report.html=============\n");
	printf("\n\n\n");
	printf("\t\t\t=============按回车键进入主菜单==============\n");
	getchar(); // Sleep(2000);如果要显示一下请使用Sleep加毫秒数
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
	printf("                     系统功能菜单                      \n");
	printf("                ------------------------               \n");
	printf("                   0.打开power shell                   \n");
	printf("                ------------------------               \n");
	printf("                   1.打开cmd命令提示符                 \n");
	printf("                ------------------------               \n");
	printf("                   2.电脑运行状态			           \n");
	printf("                ------------------------               \n");
	printf("                   3.Windows防火墙		               \n");
	printf("                ------------------------               \n");
	printf("                   4.软件卸载			               \n");
	printf("                ------------------------               \n");
	printf("                   5.打开设备管理器                    \n");
	printf("                ------------------------               \n");
	printf("                   6.我反悔了(打开日志)                \n");
	printf("                ------------------------               \n");
	printf("                   7.重新启动资源管理器(需重新点回本程序)\n");
	printf("                ------------------------               \n");
	printf("                   8.任意建退出程序                    \n");
	printf("=======================================================\n");
	printf("请输入菜单编号进行选择（0-7）：");
}
void controlpanelMenu()
{
	printf("													   \n");
	printf("=======================================================\n");
	printf("                                                       \n");
	printf("                       电脑运行状态                    \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                         功能菜单                      \n");
	printf("                ------------------------               \n");
	printf("                   0.启用或关闭windows功能             \n");
	printf("                ------------------------               \n");
	printf("                   1.系统属性				           \n");
	printf("                ------------------------               \n");
	printf("                   2.查看系统配置(请耐心等待)          \n");
	printf("                ------------------------               \n");
	printf("                   3.查看笔记本电脑电池信息            \n");
	printf("      ==闪烁后返回软件目录查看battery-report.html文件==\n");
	printf("                ------------------------               \n");
	//printf("                   4.			                       \n");
	//printf("                ------------------------             \n");
	//printf("                   5.			                       \n");
	//printf("                ------------------------             \n");
	//printf("                   6.                                \n");
	printf("                ------------------------               \n");
	printf("                   7.返回主页面                        \n");
	printf("=======================================================\n");
	printf("请输入菜单编号（0-7）：");
}
void RightclickMenu()
{
	printf("													   \n");
	printf("=======================================================\n");
	printf("                                                       \n");
	printf("                   WindowsUltra_Bate1.0                \n");
	printf("                                                       \n");
	printf("=======================================================\n");
	printf("                     右键功能菜单                      \n");
	printf("                ------------------------               \n");
	printf("                   0.win11变win10右键                  \n");
	printf("                ------------------------               \n");
	printf("                   1.变回win11                         \n");
	printf("                ------------------------               \n");
	printf("                   2.返回上一级                        \n");
	printf("                ------------------------               \n");
	printf("                   3.返回主菜单                        \n");
	printf("=======================================================\n");
	printf("请输入菜单编号进行选择（0-3）：");
}
