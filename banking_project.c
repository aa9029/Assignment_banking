#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct user
{
    char phone[50];
    char acc[50];
    char password[50];
    float balance[50];
};
int main()
{
    struct user usr;
    FILE*fp;
    char filename[50],phone[50],pword[50];
    int opt, res;
    printf("What do you want to do");
    printf("\n\n1.Register an account:\t");
    printf("\n2.Login to an account:\t");
    printf("\n\nYour choice:\t");
    scanf("%d",&opt);
    if(opt==1)
    {
        printf("Enter your account number:\t");
        scanf("%s",usr.acc);
        printf("\nEnter your phone number:\t");
        scanf("%s",usr.phone);
        printf("\nEnter yout new password:\t");
        scanf("%s",usr.password);
        usr.balance==0;
        strcpy(filename,usr.phone);
        fp==fopen(strcat(filename,".dat"),"w");
        fwrite(&usr,sizeof(struct user),1,fp);
        if(fwrite!=0){
            printf("\n\nAccount successfully registered");
        }
        else{
        printf("\n\nSomething went wrong please try again");
            
        }
          fclose(fp);
    }

if(opt==2)
{
   printf("\nPhone munber:\t");
   scanf("%s",phone);
   printf("\nPassword:\t");
   scanf("%s",pword);
   strcpy(filename,phone);
   fp=fopen(strcat(filename,".dat"),"r");
   fread(&usr,sizeof(struct user),1,fp);
   fclose(fp);
    if(!strcmp(pword,usr.password)==0){
      printf("\nPassword matched");
  }
  else{
      printf("\nInvalid password");
  }
}
return 0;
}

