
void AllocateFlat()
{	if(Tflat!=0)
	{	printf("||===============================================================================================================================================||\n");
		printf("\nDo you want to purchase Flat?,If yes then press '1' or no then press '0'\n");
		printf("\n\n\n\n\n\n");
		scanf("%d",&n);
		
		if(n==1)
		{	printf("\nKINDLY FILL BELOW PERSONAL INFORMATION OF YOUR'S : \n");
			printf("\n\n");
		 //inseritng data 
			while(n!=0)
			{	if(info==NULL)
				{	info=(struct Owner*)malloc(sizeof(struct Owner));
					printf("\nEnter name of Owner:\n");
					scanf("%s",&info->name);
				    printf("\nid of owner\n");
					scanf("%s",&info->id);
					printf("\nMobile number of Owner\n");
					scanf("%lld",&info->no);
					printf("||===============================================================================================================================================||\n");
					printf("\n\tSuccesfully ! '%d' Named flat allocated for You.\n",++fn);
					printf("\n||===============================================================================================================================================||\n");		
					info->FN=fn;//for alloaction of flat
					TPslot--;
					info->next=NULL;
				}
				else
				{
					struct Owner *temp ,*temp1;
				    temp=(struct Owner*)malloc(sizeof(struct Owner));
					printf("\nEnter name of Owner:\n");
					scanf("%s",&temp->name);
					printf("\nid of owner\n");
					scanf("%s",&temp->id);
					printf("\nMobile number of Owner\n");
					scanf("%lld",&temp->no);
					printf("||===============================================================================================================================================||\n");
					printf("\n\tSuccesfully ! '%d' Named flat allocated for You.\n",++fn);
					printf("\n||===============================================================================================================================================||\n");		
					temp->FN=fn;//for alloaction of flat no 
					TPslot--;
					temp->next=NULL;
					temp1=info;
					while((temp1->next)!= NULL)
					{	temp1=temp1->next;
					}
					temp1->next=temp;
				}
				n--;
 			}
								
		}
					
	}
	else
	{
		printf("||===============================================================================================================================================||\n");
		printf("\n\tCurrently! no Flat available in building\n");
		printf("\n||===============================================================================================================================================||\n");
	}

}
