#include<stdio.h>
 
int main(){
    int N;
    int map[6]={0};
    int valid=0, invalid=0;
    printf("Enter the number of votes: ");
    scanf("%d", &N);
    printf("Enter the votes (1-6): ");
    for(int i=0; i<N; i++){
        int vote;
        scanf("%d", &vote);
        if(vote >= 1 && vote <= 6){
            map[vote-1]++;
            valid++;
        } else {
            invalid++;
        }
    }
    printf("Valid votes: %d\n", valid);
    printf("Invalid votes: %d\n", invalid);
    printf("Vote distribution:\n");
    for(int i=0; i<6; i++){
        printf("Candidate %d: %d votes\n", i+1, map[i]);
    }
}