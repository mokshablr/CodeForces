#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    char temp;
    scanf("%d", &t);



    for(int i=0; i<t; i++){
        int n,m;
        scanf("%d %d", &n, &m);
        scanf("%c", &temp);

        char * carpet[n];
        for (int j = 0; j < n; j++)
            carpet[j] = (char*)malloc((m+1) * sizeof(char));


        for(int j =0; j<n; j++){
            for(int k=0; k<m; k++){
                scanf("%c", &carpet[j][k]);
            }
            //for '\n'
            scanf("%c", &temp);
        }

        int found=0;
        for(int j =0; j<m; j++){
            for(int k=0; k<n; k++){
                if (found == 0){   
                    if(carpet[k][j] == 'v'){
                        found++;
                        break;
                    }
                }
                else if (found == 1){   
                    if(carpet[k][j] == 'i'){
                        found++;
                        break;
                    }
                }
                else if (found == 2){   
                    if(carpet[k][j] == 'k'){
                        found++;
                        break;
                    }
                }
                else if (found == 3){   
                    if(carpet[k][j] == 'a'){
                        found++;
                        printf("YES\n");
                        break;
                    }
                }
            }
            if(found == 4){
                break;
            }
        }
        if(found != 4)  printf("NO\n");
    }
}