#include<stdlib.h>
#include<stdio.h>

int ft_len(char const *s)
{
    int len;
    
    len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return (len);
}

char **ft_strsplit(char const *s, char c)
{
    int i;
    int next;
    int j;
    char **split[100][100];

   // split = (char *) malloc (sizeof(char) * ft_len(s));
   i = 0;
   j = 0;
   next = 0;
    while(s[i] != '\0')
    {

        if(s[i] != c)
        {
            split[j][next] = s[i];
          //  printf("j:%d,%c",j, split[j][next]);
            next++;
        }
        else
        {

            if(next != 0)
                j++;
             next = 0;
        }
           
        i++;
    }
    return (split);    
}

int main(void)
{
    char **ftlen = ft_strsplit("***abc***def*gh*i*", '*');
    // for(int i =0;i < 4; i++)
    // {
    //     printf("%s", *ftlen[i]);
    // }
    
    return 0; 
}

