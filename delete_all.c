#include"student.h"
 extern stu *head;
 void delete_all()
 {
         if(head==0)
         {
                 printf("no records found\n");
                 return;
         }
         stu *p=head;
         while(p)
         {
                 head=p->next;
                 free(p);
                 p=head;
         }
         printf("all students records has deleted\n");
 }

