#include<stdio.h>

int main(){
    //Int array 's' to store input colors. Count to check number of new horse-shoes to be bought.
    int s[4], count=0;
    scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);

    //To check if any 2 horseshoes are the same, in which case buy 1 new shoe.
    for(int i=0; i<3; i++){
        //On checking 1, if none of the other are the same, then we don't need to check the 1st one again when moving forward.
        for(int j=i+1; j<4; j++){
            if(s[i] == s[j]){
                count++;

                //If we buy a different colored horseshoe, we should change the value of the current shoe that we bought for.
                //Question was given that the colors are always positive, so making it negative would keep it unique.
                s[j] = -(count);
            }
        }
    }

    printf("%d", count);
    
}