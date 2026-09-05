#include"student.h"
 extern stu *head;
 void reverse_data()
 {
         if(head==0)
         {
                 printf("no records available\n");
                 return;
         }
         int i,c=0;
         stu **p,*t=head;
         while(t)
         {
                 c++;
                 t=t->next;
         }
         t=head;
         if(c>1)
         {
                 p=malloc(sizeof(stu *)*c);
                 for(i=0;i<c;i++)
                 {
                        p[i]=t;
                         t=t->next;
                 }
                 for(i=c-1;i>0;i--)
                         p[i]->next=p[i-1];
                 p[0]->next=0;
                 head=p[c-1];
         }
 }

