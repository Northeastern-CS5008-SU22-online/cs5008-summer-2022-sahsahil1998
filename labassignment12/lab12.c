//Sahil Sah
//sah.sa@northeastern.edu

#include<stdio.h>
#include<string.h>

int compression(char arr[], int n, char res[]){
    int i;
    int count=1;//counter
    int index=0;//to store the result
    
    
    
    //insert your code here
     for(i = 0; i < n; i++)

    {

        if(arr[i] == arr[i + 1])

        {

            count++;

        }

        else if(arr[i] != arr[i + 1])

        {

            if(count == 1)

            {

                res[index] = arr[i];

                index++;

            }

            else if(count > 1)

            {

                res[index] = arr[i];

                index++;

                res[index] = (count + '0');

                count = 1;

                index++;

            }

        }        

    }    

    count = strlen(res);

    printf("%s", res);

    return count;    

}
 
int main()
{
    char a[]="aaaaaaaaaaaaaabbbbcccd";
    char res[50];
    int r,n=strlen(a);//n is the size of input array
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
