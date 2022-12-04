#include<stdio.h>
#include<stdlib.h>	
#include <string.h>
#include <ctype.h>
#include<unistd.h>

#define Macro 50

int choice1(void);
void Add_Patient(int *,int,int );
void Delete_Patient(int *);
void Update_Patient(int *);
int Data_Information(void);
void Search_Patient(int *);
void All_Patient(int *);
int Patient_Detail(void);
int Exits_opt(void);
struct Person
{
     int id;
    char name[Macro];
    char CNIC[Macro];
    char PhoneNumber[Macro];
    char Disease[Macro];
    char isAdmitted[3];
};
struct Person p;
int count = 0;
int price = 3200;
int main()
{
    int **Patient,choice,slection,i;
	float price=3200;
    int x;
	int j;
	while(x!=5)
	{
		choice=choice1();
		switch(choice)
		{
			
			case 1:	
                slection = Data_Information();
				Add_Patient(Patient[slection-1],price,slection);
				slection = Patient_Detail();	
				count++;
				break;
			case 2:
				Delete_Patient(Patient[slection-1]);	
				slection = Patient_Detail();	
				
				break;
			case 3:
				Update_Patient(Patient[slection- 1]);
				slection = Patient_Detail();
				break;
			case 4:
				Search_Patient(Patient[slection-1]);
				
				break;
			case 5:
				All_Patient(Patient[slection-1]);
				break;
			case 6:
				Exits_opt();
				break;
			
			default: 
				printf("Choice not available\n");
				break;	
		}
	}

    return 0;
}

int choice1(void)
{
	int choice;
	printf("\n\n\t\t\tPlease wait...");
	sleep(3);
	printf("\n\n");
	printf("             1. Add Patient:                              \n");
	printf("             2. Delete Patient:                             \n");
	printf("             3. Update Patient:                                    \n");
    printf("             4. Search Patient:                                    \n");
    printf("             5. Display All Patients:                                    \n");
    printf("             6. Exit                                    \n");
	
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}

 void Add_Patient(int *array,int price,int slection)
{
	FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }

    printf("\nPatient ID: ");
	fflush(stdin);
	scanf(" %u",&p.id);

	printf("Patient's Name: ");
	fflush(stdin);
    fgets(p.name,Macro,stdin);

    printf("CNIC: ");
	fflush(stdin);
	fgets(p.CNIC,Macro,stdin);

    printf("Phone Number: ");
	fflush(stdin);
	fgets(p.PhoneNumber,Macro,stdin);

	printf("Disease: ");
	fflush(stdin);
	fgets(p.Disease,Macro,stdin);

	printf("isAdmitted: ");
	fflush(stdin);
	fgets(p.isAdmitted,Macro,stdin);
		
	printf("\n\t\t\tPlease wait...");
	sleep(3);    fclose(fp);
}

 void Delete_Patient(int *array)
{
      int PatientID,i,stop;
	   FILE *fp = NULL;
    fp = fopen("Patient_Record.txt","rb");
    if(fp == NULL)
    {
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
	  printf("Please enter ID number of Patient: ");  
	  fflush(stdin);
	  scanf("u",&PatientID);
	 
	  		if(PatientID  == p.id )
	  		{
					 stop=PatientID;
					
					 printf("%s your booking is %d Deleted Successfully\n\n",p.name,p.id);

	  		}
	  	else if (stop!=PatientID)
		{	
	  			printf("No Record Found!\n");
	  }
	  fclose(fp);
	  }


 