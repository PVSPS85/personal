#include<stdio.h>

int strlength(char str[])
{
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

int strcompare(char str1[],char str2[]){
    int i =0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]!=str2[i])
            return 0;
        i++;
    }
    return(str1[i] == '\0' && str2[i] == '\0');

}

void strconcat(char str1[], char str2[] , char result[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++; 
   }
    while(str2[j]!='\0'){
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
   
}

int main()
{
    int choice;
    char str1[100],str2[100],result[200];

    printf("enter the choice you want 1 - compare , 2 - concenate , 3- lenght");
    scanf("%i",&choice);

    if(choice == 1){
        printf("enter string one ");
        scanf("%s",str1);
        printf("enter string two ");
        scanf("%s",str2);
        if(strcompare(str1,str2)){
            printf("thy are equal");
        }
        else{
            printf("they are not equal");
        }

    }
    else if(choice == 2){
        
        printf("enter the 1st string");
        scanf("%s",str1);
        printf("enter the 2nd string");
        scanf("%s",str2);
        strconcat(str1,str2,result);
        printf("the result is = %s\n",result);
    }
    else if(choice == 3)
    {
        printf("enter the strin : ");
        scanf("%s",str1);
        printf("lenght = %d \n",strlength(str1));

    }

    else
    
    {
        printf("invalid choice \n");
    }
    return 0;
}