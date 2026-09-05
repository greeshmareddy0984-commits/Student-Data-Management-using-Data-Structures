#include"student.h"
 stu *head=0;
 void add()
 {
 stu *new,*p=head;
 int t;
 new=malloc(sizeof(stu));
 static int i=1;
 l:printf("enter student name and percentage\n");
 scanf("%s%f",new->name,&new->percentage);
 if(new->percentage<=0 || new->percentage>=100)
 {
         printf("percentage is out of range\n");
         goto l;
 }
 new->rollno=i++;
 new->next=0;
 if(head==0)
         head=new;
 else
 {
         stu *last=head;
         while(last->next)
                 last=last->next;
         last->next=new;
 }
 }

