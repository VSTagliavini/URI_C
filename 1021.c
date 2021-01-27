#include <stdio.h>

int main (){
    int m[100][100];
    int i, j, n, aux=0;

    while(aux==0){
        
        scanf("%d", &n);
        
        if(n==0)
            break;
        
        for(i = 0 ; i < n ; i++){            
            for(j = 0 ; j < n ; j++){
                        
                if(j+i<n){
                    if(i>=j)
                        m[i][j]=j+1;
                    else
                        m[i][j]=i+1;
                }                     
                else if(j+i==n){
                    if(i>=j)
                        m[i][j]=j;
                    else
                        m[i][j]=i;
                }
                else if(j+i>n){
                    if(i>j)
                        m[i][j]=n-i;
                    else    
                        m[i][j]=n-j;
                }                    
            }
        }
                            
        for(i = 0 ; i < n ; i++){            
            for(j = 0 ; j < n ; j++){
                    
                printf("%3d", m[i][j]);
                
                if(j < n-1)
                    printf(" ");
            }
            printf("\n");    
        }
    printf("\n");    
    }
}