#include"struct.h"
void DeleteOwner()
{		if(info==NULL)
		{		
			printf("\nNo Data Available\n");
		}
		else
		{	
			int fno,flag1=0;
			char dname[100], did[10000];
			struct Owner *temp ,*temp1,*temp2;
			temp=info;
			printf("\nEnter Flat number of owner \n");
			scanf("%d",&fno);
			while(temp!=NULL)
			{
				if(fno==temp->FN)
				{	
					temp2=temp->next;
					flag1=0;
					break;
				}	
				temp1=temp;
				temp=temp->next;
			}
			if(flag1==1)
			{
				temp1->next=temp2;
				temp->next=NULL;
				int dfn = temp->FN;
				strcpy(temp->name,dname);
				strcpy(temp->id,did);
				long long int dno = temp->no;
				int dpn = temp->PN;
				temp=NULL;
				free(temp);
				printf("\n||========================================================================================================================||\n");
				printf("\nThe Owner deleted from data\n");
				printf("%s\t%s\t%lld\t%d\t%d\n",dname,did,dno,dfn,dpn);
				printf("\n||========================================================================================================================||\n");
			}
		}
}
