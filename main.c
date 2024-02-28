#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"struct.h"
#include"insert.h"
#include"view.h"
#include"checkFlat.h"
#include"AllocateFlat.h"
#include"Tparking.h"
#include"AllocateParking.h"
#include"SearchOwner.h"
#include"DeleteOwner.h"
int i, Tflat,TPslot,tflat ,*ptr,*ptr1;
int n,flag=0,fn=0,pn=64,checkfn;//fn=flat no
char checkname[100];
int main()
{	int choice;
	do{
		printf("\n0:Total Number of flats\n");
		printf("\n1:Add Owner Info\n");
		printf("\n2:View All Owner\n");
		printf("\n3:Check Flat Avilable Or Not\n");
		printf("\n4:Allocate Flat\n");
		printf("\n5:Total Number of Parking Slot\n");
		printf("\n6:Allocate Parking\n");
		printf("\n7:Search Owner By their Flat number\n");
		printf("\n8:Delete Owner Data\n");
		printf("\n9:Update Owner Data\n");
		printf("\n10:Count Same name Owner\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 0:
				printf("\n||===============================================================================================================================================||\n");
				printf("\nTotal FLats in building\n");
				scanf("%d",&Tflat);
				ptr=(int*)malloc(sizeof(int)*(Tflat));//creating flats allocation
				tflat=Tflat;
				break;
			case 1:
				insert();
				break;
			case 2:
				view();
				break;
			case 3:
				checkFlat();
				break;
			case 4:
				AllocateFlat();			
				break;
			case 5:
				Tparking();
				break;
			case 6:
				AllocateParking();
				break;		
			case 7:
				SearchOwner();
				break; 
			case 8:
				DeleteOwner();
				break;
			default:
				printf("\nwrong choice");
		}
	}while(choice!=11);
	return 0;
}
