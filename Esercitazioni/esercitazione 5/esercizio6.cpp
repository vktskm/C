#include <iostream>
using std::cout;

//#include <cstdlib>



char* p_strncpy(char *s1,const char *s2,int n);
char* p_strncat(char *s1,const char *s2,int n);
int p_strncmp(const char *s1,const char *s2,int n);

main(){
       char s1[]="mondo";
       char s2[]="moando";
       cout<<strncmp(s1,s2,16);
       system("pause");
       }

char* p_strncpy(char *s1,const char *s2,int n){
     int i=0;
     while(i!=(n)) 
       *(s1+i)=*(s2+(i++));
     *(s1+i)=0;//chiudo la stringa  
     return s1;
     }
     
char* p_strncat(char *s1,const char *s2,int n){
     int l=strlen(s1),i=0;
     while(i!=n) 
        s1[l++]=s2[i++];
     *(s1+l)=0;//chiudo la stringa  
     return s1;
     }

int p_strncmp(const char *s1,const char *s2,int n){
    int i=0;
    while((i<n)&&(s2[i]!=0)&&(s1[i]!=0)&&(s1[i]==s2[i++]));
    if(i==n)i--;
    if(s1[i]>s2[i])
      return -1;
    if(s1[i]<s2[i])
      return 1;
    if(s1[i]==s2[i])
      return 0;
     }
