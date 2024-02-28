
void view()
{	struct Owner *temp;
	temp=info;
	printf("\tName\t");
	printf("\tEmail-ID\t");
	printf("\t\tMobile number\t");
	printf("\tFlat-No\t");
	printf("\tParkingSlot\n");
	printf("||========================================================================================================================================================||\n");
	while(temp!=NULL)
	{	printf("\t%s\t",temp->name);
		printf("\t%s\t",temp->id);
		printf("\t%lld\t",temp->no);
		printf("\t%4d\t",temp->FN);//allocated flat no
		(pn>64)?printf("\t\t%c\n",temp->PN):printf("\tNot Parking Slot Allocated\n");
		printf("\n");
		temp=temp->next;
	}
	printf("\n");
}
