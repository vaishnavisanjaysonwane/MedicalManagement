void SearchOwner()
{	struct Owner *temp;
	temp=info;
	if(info==NULL)
	{	printf("\n||=====================================================================================================================================||\n");
		printf("\t\t\nNo information Available\n");
		printf("\n||=====================================================================================================================================||\n");
	}
	else
	{
		printf("\n||=======================================================================================================================================||\n");
		printf("\nEnter Flat number\n");
		scanf("%d",&checkfn);
		while(temp!=NULL)
		{
			if(temp->FN==checkfn)
			{
				printf("\nOwner information\n");
				printf("||================================================================================================================================||\n\n");
				printf("\t%s\t",temp->name);
				printf("%s\t",temp->id);
				printf("%lld\t",temp->no);
				printf("%d\t",temp->FN);
				printf("%c\n",temp->PN);
				printf("\n||===============================================================================================================================||\n");
				break;
			}
			temp=temp->next;
		}
	}
	
}