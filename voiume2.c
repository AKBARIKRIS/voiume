#include<stdio.h>

struct std{
	int roll;
	char name[100];
	int maths_marks;
	int phy_marks;
	int chem_marks;
	float pr;
	
};

main()

{
	struct std s[100];
	int i,n,sum=0;
	printf("How Many Student Data Entery = ");
	scanf("%d",&n);
	printf("\n-----Enter Student Data-----\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter Student Roll No. = ");
		scanf("%d",&s[i].roll);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Maths Mark = ");
		scanf("%d",&s[i].maths_marks);
		printf("Enter Phy Mark = ");
		scanf("%d",&s[i].phy_marks);
		printf("Enter Chem mark = ");
		scanf("%d",&s[i].chem_marks);
		sum += s[i].chem_marks + s[i].maths_marks + s[i].phy_marks ;
		
		s[i].pr = sum*100/300;
		
	}
	printf("\n-----Student Data With PR-----\n");
	for(i=0;i<n;i++)
	{
		printf("Student Roll No. = %d \n",s[i].roll);
		printf("Student Name = %s \n",s[i].name);
		printf("Maths Mark = %d \n",s[i].maths_marks);
		printf("Phy Mark = %d \n",s[i].phy_marks);
		printf("Chem Mark = %d \n",s[i].chem_marks);
		printf("Student PR = %.2f \n",s[i].pr);
	}
}
