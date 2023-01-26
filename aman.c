#include <stdio.h>    
void accending();  
void decending();
int main()    
{   
  int arr[5];  
  int i; 

  printf("Enter elements of the array :\n");

  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
        
    int temp = 0;  
    char choice;
    
    int length = 10;    
           
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }
    printf("\n");   
    printf("Enter your choice:");
    scanf("%c",&choice);
    if((choice == 'A') || (choice == 'a')){
        accending(arr);
    }
    else if ((choice == 'D')||(choice == 'd')){
        decending(arr);
    }
    
    return 0; 
    
}     

void accending(int a[]){
    // printf("accending");
    // printf("%d",&arr[5]);
    int temp=0;
    int length=5;
    //int length = sizeof(arr)/sizeof(arr[0]);  
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
          if(a[i] > a[j]) {    
              temp = a[i];    
              a[i] = a[j];    
              a[j] = temp;    
          }     
        }     
    } 
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", a[i]);    
    }     
}


void decending(int a[]){
    // printf("accending");
    // printf("%d",&arr[5]);
    int temp=0;
    int length=5;
    //int length = sizeof(arr)/sizeof(arr[0]);  
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
          if(a[i] < a[j]) {    
              temp = a[i];    
              a[i] = a[j];    
              a[j] = temp;    
          }     
        }     
    } 
    printf("Elements of array sorted in decending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", a[i]);    
    }     
}


