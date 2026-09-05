 #include"student.h"
 extern stu *head;
 void display()
 {
         stu *p=head;
         if(p==0)
         {
                 printf("no student records available\n");
                 return;
         }
         while(p)
         {
                 printf("%d %s %f\n",p->rollno,p->name,p->percentage);
                 p=p->next;
         }
 }
                                                                                                    
                              
