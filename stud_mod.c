#include"student.h"
extern stu *head;
void modify_by_rollno()
{
        int roll,c=0;
        char name[50];
        float marks;
        stu *p=head;
        if(p==0)
        {
                printf("no records available\n");
                return ;
        }
        printf("enter rollno \n");
        scanf("%d",&roll);
        while(p)
        {
                if(p->rollno==roll)
                {
                        c++;
                        printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                        printf("enter name and marks\n");
                        scanf("%s%f",name,&marks);
                        strcpy(p->name,name);
                        p->percentage=marks;
                }
                p=p->next;
        }
        if(c==0)
                printf("roll no not found\n");
}
void modify_by_name()
{
        char name[50];
        int roll,c=0;
        printf("enter name\n");
        scanf("%s",name);
        stu *p=head;
        if(p==0)
        {
                printf("no records available\n");
                return ;
        }
        while(p)
        {
                if(strcmp(p->name,name)==0)
                {
                        c++;
                        printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                }
                p=p->next;
        }
        if(c==0)
                printf("no name found\n");
        p=head;
        char namee[50];
        float per;
        if(c>1)
        {
                printf("enter the rollno \n");
                scanf("%d",&roll);
                while(p)
                {
                        if(strcmp(p->name,name)==0)
                        {
                                if(p->rollno==roll)
                                {
                                        printf("enter name and percentage\n");
                                        scanf("%s%f",namee,&per);
                                        strcpy(p->name,namee);
                                        p->percentage=per;
                                }
                        }
                        p=p->next;
                }
        }
        else if(c==1)
        {
                printf("enter name and percentage\n");
                scanf("%s%f",namee,&per);
                while(p)
                {
                        if(strcmp(p->name,name)==0)
                        {
                                strcpy(p->name,namee);
                                p->percentage=per;
                        }
                        p=p->next;
                }
        }

}
void modify_by_percent()
{
        float percent;
        stu *p=head;
        int c=0;
        if(p==0)
        {
                printf("no records available\n");
                return ;
        }
k:      printf("enter percentage\n");
        scanf("%f",&percent);
        if(percent<=0 &&percent>=100)
        {
                printf("Percent is out of range Enter b/w 0.00 to 100.00\n");
                goto k;
        }
        while(p)
        {
                if(p->percentage==percent)
                {
                        c++;
                        printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                }
                p=p->next;
        }
        if(c==0)
                printf("no one have this percentage\n");
        int roll;
        char name[50];
        float per;
        p=head;
        if(c==1)
        {
                while(p)
                {
                        if(p->percentage==percent){
                                printf("enter name and percentage\n");
                                scanf("%s%f",name,&per);
                                strcpy(p->name,name);
                                p->percentage=per;
                        }
                        p=p->next;
                }

        }
        p=head;
        if(c>1)
        {
                printf("enter the rollno which data you need to modify\n");
                scanf("%d",&roll);
                c=0;
                while(p)
                {
                        if(p->percentage==percent)
                        {
                                if(roll==p->rollno)
                                {
                                        c++;
                                        printf("enter name and percentage\n");
                                        scanf("%s%f",name,&per);
                                        strcpy(p->name,name);
                                        p->percentage=per;
                                }
                        }
                        p=p->next;
                }
                if(c==0)
                        printf("rollno not found\n");
        }
}
