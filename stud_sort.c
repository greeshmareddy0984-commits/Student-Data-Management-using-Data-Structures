 
 #include"student.h"
 extern stu *head;
 void sort_by_percentage()
 {
        if(head==0)
        {
                 printf("no records found\n");
                 return;
         }
         int c=0;
         stu *p=head;
         while(p)
        {
                 c++;
                 p=p->next;
         }
         p=head;
        int i,j;
        stu *p1=head,*p2,t;
        for(i=0;i<c;i++)
        {
                p2=p1->next;
                 for(j=0;j<c-1-i;j++)
                 {
                        if(p1->percentage>p2->percentage)
                         {
                                 t.rollno=p1->rollno;
                                 strcpy(t.name,p1->name);
                                 t.percentage=p1->percentage;
 
                                 p1->rollno=p2->rollno;
                                 strcpy(p1->name,p2->name);
                                 p1->percentage=p2->percentage;
 
 
                                 p2->rollno=t.rollno;
                                strcpy(p2->name,t.name);
                                 p2->percentage=t.percentage;
 
                         }
                         p2=p2->next;
                 }
                 p1=p1->next;
         }
 }
void sort_by_name()
 {
         if(head==0)
         {
                 printf("no records found\n");
                 return;
        }
         int c=0;
         stu *p=head;
         while(p)
         {
                 c++;
                 p=p->next;
         }
         p=head;
         int i,j;
         stu *p1=head,*p2,t;
         for(i=0;i<c;i++)
         {
                 p2=p1->next;
                 for(j=0;j<c-1-i;j++)
                 {
                         if(strcmp(p1->name,p2->name)>0)
                         {
                                 t.rollno=p1->rollno;
                                 strcpy(t.name,p1->name);
                                 t.percentage=p1->percentage;
 
                                 p1->rollno=p2->rollno;
                                 strcpy(p1->name,p2->name);
                                 p1->percentage=p2->percentage;
 
 
                                 p2->rollno=t.rollno;
                                 strcpy(p2->name,t.name);
                                 p2->percentage=t.percentage;
 
                         }
                         p2=p2->next;
                 }
                p1=p1->next;
        }
 }
 
 
 void sort_by_rollno()
  {
          if(head==0)
          {
                  printf("no records found\n");
                  return;
          }
          int c=0;
          stu *p=head;
          while(p)
         {
                 c++;
                 p=p->next;
         }
          p=head;
        int i,j;
          stu *p1=head,*p2,t;
          for(i=0;i<c;i++)
          {
                 p2=p1->next;
                  for(j=0;j<c-1-i;j++)
                  {
                          if(p1->rollno>p2->rollno)
                         {
                                 t.rollno=p1->rollno;
                                  strcpy(t.name,p1->name);
                                  t.percentage=p1->percentage;

                                  p1->rollno=p2->rollno;
                                  strcpy(p1->name,p2->name);
                                  p1->percentage=p2->percentage;
 
 
                                  p2->rollno=t.rollno;
                                  strcpy(p2->name,t.name);
                                  p2->percentage=t.percentage;
 
                          }
                                                                       }
                          p2=p2->next;
                }
                  p1=p1->next;
          }




