 #include"student.h"
 extern stu *head;
 void delete_by_rollno()
 {
         int roll;
         printf("enter rollno\n");
         scanf("%d",&roll);
         stu *p=head,*prev;
         if(p==0)
         {
                 printf("no records available\n");
                 return;
         }
         while(p)
         {
                 if(p->rollno==roll)
                 {
                         if(p==head)
                                 head=p->next;
                         else
                                 prev->next=p->next;
                         free(p);
                         return;
                 }
                 prev=p;
                 p=p->next;
         }
         printf("roll no not found\n");
 }
 void delete_by_name()
 {
         char name[50];
         printf("enter a name\n");
         scanf("%s",name);
         stu *p=head,*prev;
         if(p==0)
         {
                 printf("no records available\n");
                 return;
         }
         while(p)
         {
                if(strcmp(p->name,name)==0)
                {
                         if(p==head)
                                head=p->next;
                         else
                                 prev->next=p->next;
                         free(p);
                         return;
                 }
                 prev=p;
                 p=p->next;
         }
         printf("name not found\n");
 }
 


