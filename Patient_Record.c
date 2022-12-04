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


 
void Update_Patient(int *array)
{
	FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
	int opt = 13;
	int update = 0;
	int patientId = 0;
	printf	("Enter the Patient ID No: ");
	scanf("%d",&patientId);

		if(patientId == p.id)
		{
			update = patientId;
			printf("\t				Make Changes:\n");
    printf("Patient Name: ");
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
    fgets(p.name,Macro,stdin);

	printf("isAdmitted: ");
	fflush(stdin);
    fgets(p.isAdmitted,Macro,stdin);

	
		}
			else if (update != patientId)
		{	
	  			printf("No Record Found!\n");
	  }
		fclose(fp);
	}

    
void Search_Patient(int *arrrays)
{
	FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
	int found = 0;
	int patientId = 0;
	printf	("Enter the Patient ID No: ");
	scanf("%d",&patientId);

	
		if(patientId == p.id)
		{
			found = patientId;
			printf("Patient Name: %s",p.name);
			printf("\nPatient CNIC: %s",p.CNIC);
			printf("\nPhone Number: %s",p.PhoneNumber);
			printf("\nDisease: %s",p.Disease);
			printf("\nisAdmitt: %s\n",p.isAdmitted);
			
		}
			else if (found != patientId)
		{	
	  			printf("No Record Found!\n");
	  }
	fclose(fp);
	}

void All_Patient(int *arrrays)
	{
		int found = 0;
    unsigned int countPatient = 1;

	FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }	 
	
    printf("\n\t\t\tPatient Count = %d\n\n",countPatient);
	 while (sizeof(p), 1, fp)
    {
		
			printf("Patient Name: %s",p.name);
			printf("\nPatient CNIC: %s",p.CNIC);
			printf("\nPhone Number: %s",p.PhoneNumber);
			printf("\nDisease: %s",p.Disease);
			printf("\nisAdmitt: %s\n",p.isAdmitted);

			found = 1;
			++countPatient;
			break;
	}
	 fclose(fp);
    if(!found)
    {
        printf("\n\t\t\tNo Record");
    }
}

    int Patient_Detail(void)
{
	
    FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }

		printf("\n\n");
        printf("\t-----------------DATA OF PATIENT----------------\n");
        printf("\t============================================================\n");
        printf(" Booking ID : %d \n",p.id);
        printf(" Customer Name  : %s\n",p.name);
        printf("\n                      			               Date      : 29-04-2022");
        printf("\n                                                       Time      : 08:00pm");
        printf("\n                                                       CNIC      : %s",p.CNIC);
		printf("                                                       Admitted  : %s",p.isAdmitted);
        printf("\n\t============================================================\n");
		fclose(fp);
}

   int Data_Information(void)
{
    FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
	
	printf("\t\t\tEnter the data of the Patient According this\n");
	printf("\t\t\t----------------------------\n");
	printf("\t\t\tID (XXX) \n");
	printf("\t\t\tName\n");
	printf("\t\t\tCNIC (XXXXX-XXXXXXX-X)\n");
	printf("\t\t\tPhone Number:\n");

    printf("\t\t\tDisease\n");
    printf("\t\t\tisAdmitted\n");
	return 0;
	fclose(fp);
}

int Exits_opt(void)
{
	
    FILE *fp = NULL;
    int status = 0;
    fp = fopen("Patient_Record.txt","ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
	int a = 1;
		printf("\t\tThanks You!\n");
		exit(1);

		fclose(fp);	
}