#include <iostream>
using std::cout;

#include <cstdlib>

void m_strcpy(char *s1,const char *s2);
void m_strcat(char *s1,const char *s2);
int m_strcmp(const char *s1,const char *s2);
long m_strlen(const char *s);

main(){
       //prova di void m_strcpy(char *s1,const char *s2);
       char s1[5];
       char s2[]="ciao";
       m_strcpy(s1,s2);
       cout<<"s1 = "<<s1<<"\n";
       
       //prova di void void m_strcat(char *s1,const char *s2);
       char s3[20]="primo";
       char s4[]=" secondo";
       m_strcat(s3,s4);
       cout<<"s3 = "<<s3<<"\n";
       
       //prova di int m_strcmp(const char *s1,const char *s2);
        char s5[]="ahff";
       char s6[]="ahf";
       cout<<"confronto = "<<m_strcmp(s5,s6)<<"\n";
              
       //prova di long m_strlen(const char *s);
       cout<<"lunghezza di s1 = "<<m_strlen(s1)<<"\n";
       
       system("pause");
       }

void m_strcpy(char *s1,const char *s2){
     while (*s1++=*s2++);
     }
     
void m_strcat(char *s1,const char *s2){
     s1+=m_strlen(s1);
     while (*s1++=*s2++);
     }

int m_strcmp(const char *s1,const char *s2){
    while((*s2!=0)&&(*s1!=0)&&(*s1++==*s2++));
    if(*s1>*s2)
      return 1;
    if(*s1<*s2)
      return -1;
    if(*s1==*s2) 
      return 0;
    
     }

long m_strlen(const char *s){
     int i;
     for(i=0;*s++!=0;i++);
     return i;
     }
