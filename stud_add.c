#include"student.h"
 stu *head=0;
 void add()
 {
 stu *new,*last=head,*temp;
 int t,r;
 new=malloc(sizeof(stu));
 l:printf("enter student name and percentage\n");
 scanf("%s%f",new->name,&new->percentage);
 if(new->percentage<=0 || new->percentage>=100)
 {
         printf("percentage is out of range\n");
         goto l;
 }
  r=1;
  do{
   t=0;
   for(temp=head;temp!=0;temp=temp->next)
    {
     if(temp->rollno==r)
     {
      r++;
      t=1;
      break;
  }while(t);
 new->rollno=r++;
 new->next=0;
 if(head==0)
         head=new;
 else
 {
  last=head;
         while(last->next)
                 last=last->next;
         last->next=new;
 }
 }

