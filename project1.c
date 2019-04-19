#include<stdio.h>
#include<stdlib.h>
int main()
{
	double PAGE_FAULT_RATE;
	double pageFaultEmpty, pageFaultModified,memoryAccessTime,timeToReplace,accessTime;
	printf("\nEnter service Page Fault Empty or Not Modified: ");
	scanf("%lf",&pageFaultEmpty);
	printf("Enter Service Page Fault Modified Page: ");
	scanf("%lf",&pageFaultModified);
	printf("Enter Memory Access Time : ");
	scanf("%lf",&memoryAccessTime);
	printf("Enter Percentage of time the page to be replaced is modified : ");
	scanf("%lf",&timeToReplace);
	printf("Enter Effective Access time : ");
	scanf("%lf",&accessTime);
	double timeToReplacePercent = (timeToReplace/100);  
	printf("Calculating the Page Fault");
	double x=accessTime-memoryAccessTime;
	double assumeFault=((1-timeToReplacePercent)*pageFaultEmpty);
double serveingFault=	(timeToReplacePercent*pageFaultModified);
	double y= assumeFault+serveingFault;
	PAGE_FAULT_RATE=x/y;
	PAGE_FAULT_RATE=PAGE_FAULT_RATE/1000000;	//Conversion for nanoSeconds
	printf("Page Fault Rate is %lf",PAGE_FAULT_RATE);
	
	
}
