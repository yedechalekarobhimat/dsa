// #include<iostream>
// #include<stdlib.h>
// #include<string.h>
// using namespace std;
// struct node
// {   char name[20];
//      node *next;
//      node *down;
//       int flag;
// };
// class Gll
// {   char ch[20];    int n,i;    
//      node *head=NULL,*temp=NULL,*t1=NULL,*t2=NULL;
//      public:
//      node *create();
//      void insertb();
//      void insertc();
//      void inserts();
//      void insertss();
//      void displayb();
    
// };
// node *Gll::create()
// {
//     node *p=new(struct node);
//     p->next=NULL;
//     p->down=NULL;
//     p->flag=0;
//     cout<<"\n enter the name";
//     cin>>p->name;
//     return p;
// }
// void Gll::insertb()
// {      
        
//          if(head==NULL)
//            {    t1=create();
//                 head=t1;
//            }
//            else
//            {
//               cout<<"\n book exist";
//            }   
// }     
// void Gll::insertc()
// {     
//       if(head==NULL)
//           { 
//                   cout<<"\n there is no book";   
//            }
//            else
//            {    cout<<"\n how many chapters you want to insert";
//                 cin>>n;
//                 for(i=0;i<n;i++)
//                 {
//                 t1=create();
//                 if(head->flag==0)
//                 {  head->down=t1;   head->flag=1;    }
//                 else
//                 {   temp=head;
//                      temp=temp->down;
//                     while(temp->next!=NULL)
//                          temp=temp->next;
//                      temp->next=t1;
//                 }
//                 }
//           }
                    
                              
// } 
// void Gll::inserts()
// {     
  
//          if(head==NULL)
//           { 
//                   cout<<"\n there is no book";   
//            }
//            else
//            {    cout<<"\n Enter the name of chapter on which  you want to enter the section";
//                  cin>>ch;
                
//                  temp=head;
//                if(temp->flag==0)
//                {   cout<<"\n their are no chapters on in book";
//                }
//                else
//                {    temp=temp->down;
//                 while(temp!=NULL)
//                  { 
//                       if(!strcmp(ch,temp->name))
//                       {   
//                                 cout<<"\n how many sections you want to enter";
//                                 cin>>n;
//                                 for(i=0;i<n;i++)
//                                 {
                                   
//                                            t1=create();
//                                                if(temp->flag==0)
//                                                {      temp->down=t1;
                                                     
//                                                         temp->flag=1;  cout<<"\n******";
//                                                         t2=temp->down;
                                                   
//                                                }
//                                               else
//                                                {           
//                                                               cout<<"\n#####";
//                                                                while(t2->next!=NULL)
//                                                                {     t2=t2->next;          }
//                                                                        t2->next=t1;                 
//                                                  }   
//                                  }                              
//                                    break;       
//                        }  
//                                temp=temp->next;
//                   }
//                 }    
//          }
// }
// void Gll::insertss()
// {     
  
//          if(head==NULL)
//           { 
//                   cout<<"\n there is no book";   
//            }
//            else
//            {    cout<<"\n Enter the name of chapter on which  you want to enter the section";
//                  cin>>ch;
                
//                  temp=head;
//                if(temp->flag==0)
//                {   cout<<"\n their are no chapters on in book";
//                }
//                else
//                {    temp=temp->down;
//                 while(temp!=NULL)
//                  { 
//                       if(!strcmp(ch,temp->name))
//                       {       
//                          cout<<"\n enter name of section in which you want to enter the sub section";
//                          cin>>ch;
                        
//                         if(temp->flag==0)
//                         {   cout<<"\n their are no sections ";   }
//                          else
//                          {       temp=temp->down;
//                                  while(temp!=NULL)
//                                  {
//                                      if(!strcmp(ch,temp->name))
//                                      {
//                                       cout<<"\n how many subsections you want to enter";
//                                         cin>>n;
//                     for(i=0;i<n;i++)
//                                    {
                                   
//                                            t1=create();
//                                                if(temp->flag==0)
//                                                {      temp->down=t1;
                                                     
//                                                         temp->flag=1;  cout<<"\n******";
//                                                         t2=temp->down;
                                                   
//                                                }
//                                               else
//                                                {           
//                                                               cout<<"\n#####";
//                                                                while(t2->next!=NULL)
//                                                                {     t2=t2->next;          }
//                                                                        t2->next=t1;                 
//                                                  }   
//                                         }                              
//                                          break;
//                                      }      temp=temp->next;
//                                    }
//                           }       
//                        }
                         
//                                temp=temp->next;
//                   }
//                 }    
//          }
// } 
// void Gll::displayb()
// {       
               
//                 if(head==NULL)
//                 {  cout<<"\n book not exist"; 
//                 }
//                 else
//                 {
//                  temp=head;
                 
//                     cout<<"\n NAME OF BOOK:  "<<temp->name;
//                          if(temp->flag==1)
//                          {
//                          temp=temp->down;
                        
//                            while(temp!=NULL)
//                            {     cout<<"\n\t\tNAME OF CHAPTER:  "<<temp->name;
//                                  t1=temp;
//                                  if(t1->flag==1)
//                                  {  t1=t1->down;
//                                     while(t1!=NULL)
//                                     {     cout<<"\n\t\t\t\tNAME OF SECTION:  "<<t1->name;
//                                           t2=t1;
//                                           if(t2->flag==1)
//                                           {  t2=t2->down;
//                                           while(t2!=NULL)
//                                           {     cout<<"\n\t\t\t\t\t\tNAME OF SUBSECTION:  "<<t2->name;     
//                                           t2=t2->next;
//                                           }
//                                           }     
//                                           t1=t1->next;
//                                     }
//                                  }   
//                                   temp=temp->next;
//                            }
                        
//                           }
//                 }         
                     
                  
                  
// }                  
// int main()
// {    Gll g;   int x;  
//        while(1)
//       {    cout<<"\n\n enter your choice";
//             cout<<"\n 1.insert book";
//             cout<<"\n 2.insert chapter";
//             cout<<"\n 3.insert section";
//             cout<<"\n 4.insert subsection";
//             cout<<"\n 5.display book";
//             cout<<"\n 6.exit";
//             cin>>x;
//            switch(x)
//            {   case 1:          g.insertb();
//                                          break;             
//                 case 2:          g.insertc();
//                                          break;      
//                 case 3:          g.inserts();
//                                          break;
//                 case 4:          g.insertss();
//                                          break;    
//                 case 5:          g.displayb();
//                                          break;      
//                 case 6:  exit(0);
//            }
//        }
//        return 0;
// }          


#include<iostream>
using namespace std;

struct node
{
 string name;
 node *B[5];
};

class book
{
 int c,s,sub;
public:
 
 node *temp = new node;
 
 void Getnewnode()
 {
  for(int i = 0 ; i<5 ; i++)
  {
   temp->B[i] = new node;
   temp->B[i]->name = "empty";
   for(int j=0; j<5; j++)
   {
    temp->B[i]->B[j] = new node;
    temp->B[i]->B[j]->name  = "empty"; 
    for(int k = 0 ; k<5; k ++)
    { 
     temp->B[i]->B[j]->B[k] = new node;
     temp->B[i]->B[j]->B[k]->name = "empty";
    }
   }
  }
 }
 void add_title()
 {
  cout<<": ENTER THE TITLE OF THE BOOK                   = ";
  cin>>temp->name;
  Getnewnode();
 }
 
 void add_chapter()
 {
  string cname;
  int cnum;
  cout<<": ENTER NUMBER OF CHAPTERS IN THE BOOK          = ";
  cin>>cnum;
  c = cnum;
  for(int i = 0 ; i < cnum ; i++)
  {
   cout<<endl<<"Chapter "<<i+1<<" = ";
   cin>>cname;
   temp->B[i]->name = cname;
  }
 }
 
 void add_section()
 {
  string sname;
  int snum;
  int chnum;
  cout<<": CHAPTER NUMBER WHERE YOU NEED TO ADD SECTIONS = ";
  cin>>chnum;
  cout<<": ENTER NUMBER OF SECTIONS                      = ";
  cin>>snum;
  s = snum;
  for(int i = 0 ; i < snum ; i++)
  {
   cout<<endl<<"Section "<<chnum<<"."<<i+1<<" = ";
   cin>>sname;
   temp->B[chnum-1]->B[i]->name = sname;
  }
 }
  
 void add_sub_section()
 {
  string subname;
  int subnum;
  int snum;
  int chnum;
  cout<<": CHAPTER NUMBER WHERE YOU NEED TO ADD SECTIONS     = ";
  cin>>chnum;
  cout<<": SECTION NUMBER WHERE YOU NEED TO ADD SUB-SECTIONS = ";
  cin>>snum;
  cout<<": ENTER NUMBER OF SUB-SECTIONS                      = ";
  cin>>subnum;
  sub = subnum;
  for(int i = 0 ; i < subnum ; i++)
  {
   cout<<endl<<"Sub-Section "<<chnum<<"."<<snum<<"."<<i+1<<" = ";
   cin>>subname;
   temp->B[chnum-1]->B[snum-1]->B[i]->name = subname;
  }
 }
 
 void display()
 {
  cout<<endl<<"======= INDEX ======="<<endl;
  cout<<endl<<":  TITLE   : "<<temp->name;
  cout<<endl<<": CHAPTERS : "<<endl;
  for(int i = 0 ; i < c ; i++)
  {
   if(temp->B[i]->name != "empty")
    cout<<endl<<": "<<i+1<<". "<<temp->B[i]->name;
   for(int j = i ; j < s ; j++)
   {
    if(temp->B[i]->B[j]->name != "empty")
     cout<<endl<<" : "<<i+1<<"."<<j+1<<" "<<temp->B[i]->B[j]->name;
    for(int k = 0 ; k < sub ; k++)
    {
     if(temp->B[i]->B[j]->B[k]->name != "empty")
      cout<<endl<<"  : "<<i+1<<"."<<j+1<<" "<<temp->B[i]->B[j]->B[k]->name;    
    }
   }
  }
  cout<<endl;
 }
};


int main()
{
 book s;
 s.add_title();
 s.add_chapter();
 s.add_section();
 s.add_sub_section();
 s.display();
 return 0;
}
   
  
 

