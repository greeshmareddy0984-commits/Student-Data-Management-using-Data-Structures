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
         int c=0,r=0; 
         if(p==0)
         {
                 printf("no records available\n");
                 return;
         }
         while(p)
         {
                if(strcmp(p->name,name)==0)
                {
                      printf("%d %s %f\n",p->rollno,p->name,p->marks);
                      c++;
                }
          p=p->next;
         }
         if(c==0)
         {
          printf("no name found\n");
          return;
         }
         p=head;
         printf("\nenter roll no to  delete your related searching name: \n);
          scanf("%d",&r);
         while(p)
          {
           if((p->rollno==r) && (strcmp(p->name,name))==0)
           {
                        if(p==head)
                                head=p->next;
                         else
                                 prev->next=p->next;
                         free(p);
                         printf("\n data deleted successfully.......\n");
                         return;
           }
                 prev=p;
                 p=p->next;
         }
         printf("rollno and name not found in the list.........\n");
 }
 


