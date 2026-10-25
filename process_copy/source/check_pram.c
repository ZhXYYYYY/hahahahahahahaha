#include <copy.h>

int check_pram(int argc,const char * srcfile,int pronum)
{
	//判断参数数量
	if(argc < 3){
		printf("参数数量小于3\n");
		return -1;
	}

	//判断srcfile源文件是否存在
	if((access(srcfile , F_OK)) != 0){
		printf("srcfile源文件不存在\n");
		return -1;
	}

	//判断进程数量
	if(pronum < 1 || pronum >100){
		printf("进程数量不在1到100之间\n");
		return -1;
	}
	return 0;
}
