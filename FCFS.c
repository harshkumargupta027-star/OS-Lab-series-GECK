#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of process :");
    scanf("%d",&n);

    int i,at[10],bt[10];
    int ct[10],tat[10],wt[10];
   
    for(i=0;i<n;i++){
        printf("enter the arrival time and burst time %d :",i+1);
        scanf("%d %d",&at[i],&bt[i]);
    }
    

    
    // int at[10],bt[10];
    int input =2;
    ct[0]=at[0]+bt[0]+input;
    for(int i=1;i<n;i++){
        if(at[i]>ct[i-1]){
            ct[i]=at[i]+bt[i]+input;

        }
        else{
            // int =2;
            ct[i]=ct[i-1]+bt[i] +input;
        }

    }
    int totalTAT=0;
    int totalWT=0;
    for(i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        totalTAT+=tat[i];
        totalWT+=wt[i];
    }
    printf("\nprocess\tat\tbt\tinput\tct\ttat\twt\n");
    for(int i=0;i<n;i++){
        int input=2;

    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i+1,at[i],bt[i],input,ct[i],tat[i],wt[i]);
    }


    printf("\nAverage totalTAT:%d\n",totalTAT/n);
    printf("Average WT: %d",totalWT/n);
    return 0;
}