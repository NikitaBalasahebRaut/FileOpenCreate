// Application to open the file or to create new file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char name[30] = {'\0'};
	int fd = 0;
	
	printf("Enter the file name \n");
	scanf("%s",name);
	
	fd = open(name,O_RDWR | O_CREAT,0777);
	
	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File successfully created with fd : %d",fd);
	}
	
	return 0;
}

/*

output

Enter the file name
marvellous.txt
File successfully created with fd : 3

*/