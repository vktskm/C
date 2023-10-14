#include <iostream>
using std::cout;

#include <cstdlib>

void m_strcpy(char s1[],const char s2[]);
void m_strcat(char s1[],const char s2[]);
int m_strcmp(const char s1[],const char s2[]);
long m_strlen(const char s[]);

main(){
       //prova di void m_strcpy(char s1[],const char s2[]);
       char s1[5];
       char s2[]="ciao";
       m_strcpy(s1,s2);
       cout<<"s1 = "<<s1<<"\n";
       
       //prova di void m_strcat(char s1[],const char s2[]);
       char s3[20]="primo";
       char s4[]=" secondo";
       m_strcat(s3,s4);
       cout<<"s3 = "<<s3<<"\n";
       
       //prova diint m_strcmp(const char s1[],const char s2[]){
       char s5[]="ahf";
       char s6[]="ahff";
       cout<<"confronto = "<<m_strcmp(s5,s6)<<"\n";
              
       //prova di long m_strlen(const char s[]);
       cout<<"lunghezza di s1 = "<<m_strlen(s1)<<"\n";
       
       system("pause");
       }

void m_strcpy(char s1[],const char s2[]){
     int i=0;
     while (s1[i]=s2[i++]);
     }
     
void m_strcat(char s1[],const char s2[]){
     int l=m_strlen(s1),i=0;
     while (s1[l++]=s2[i++]);
     }

int m_strcmp(const char s1[],const char s2[]){
    int i=0;
    while((s2[i]!=0)&&(s1[i]!=0)&&(s1[i]==s2[i++]));
    if(s1[i]>s2[i])
      return 1;
    if(s1[i]<s2[i])
      return -1;
    if(s1[i]==s2[i])
      return 0;
    
     }

long m_strlen(const char s[]){
     int i;
     for(i=0;s[i]!=0;i++);
     return i;
     }
