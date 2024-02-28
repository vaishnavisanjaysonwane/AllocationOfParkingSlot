void insert()
{	printf("||====================================================================================================================================================||\n");
	if(Tflat!=0)
	{	if(info==NULL)
		{	info=(struct Owner*)malloc(sizeof(struct Owner));
			printf("\nEnter Your Name:\n");
			scanf("%s",&info->name);
			printf("\nEnter Your Email-id\n");
			scanf("%s",&info->id);
			printf("\nEnter Your Mobile Number\n");
			scanf("%lld",&info->no);
			printf("||===============================================================================================================================================||\n");
			printf("\n\tSuccesfully ! '%d' Named flat allocated for You.\n",++fn);
			printf("\n||===============================================================================================================================================||\n");		
			info->FN=fn;//for alloaction of flat and display
			TPslot--;
			info->next=NULL;
		}
		else
		{
			struct Owner *temp ,*temp1;
			temp=(struct Owner*)malloc(sizeof(struct Owner));
			printf("\nEnter Your Name:\n");
			scanf("%s",&temp->name);
			printf("\nEnter Your Email-id\n");
			scanf("%s",&temp->id);
			printf("\nEnter Your Mobile Number\n");
			scanf("%lld",&temp->no);
			printf("||===============================================================================================================================================||\n");
			printf("\n\tSuccesfully ! '%d' Named flat allocated for You.\n",++fn);
			printf("\n||===============================================================================================================================================||\n");		
			temp->FN=fn;//for allocation of flat no to cunstomer 
			TPslot--;
			temp->next=NULL;
			temp1=info;
			while((temp1->next)!= NULL)
			{	temp1=temp1->next;
			}
			temp1->next=temp;
		}
		
		Tflat--;
		
 	 }
 	else
 	{	
		printf("\n\tCurrently! no Flat available in building\n");
		printf("\n||=================================================================================================================================================||\n");
	}
}
