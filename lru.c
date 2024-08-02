
//LRU PAGE REPLACEMENT

#include<stdio.h>

void main() {
    int frame;
    int string[10], n;
    int hit = 0, miss = 0;
    int found = 0;   
    printf("Enter the frame size: ");
    scanf("%d", &frame);
    int page[frame];
    int age[frame];   
    for (int i = 0; i < frame; i++) {
        page[i] = -1; 
        age[i] = -1;                                             
    }  
    printf("Enter the number of pages: ");
    scanf("%d", &n);  
    printf("Enter the string: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &string[i]);
    }  
    for (int i = 0; i < n; i++) {
        found = 0;
        for (int j = 0; j < frame; j++) {
            if (string[i] == page[j]) {
                hit++;
                found = 1;
                age[j] = i; // Update age to current time
                break;
            }
        }      
        if (found == 0) {
            int lru_index = 0;
            for (int j = 1; j < frame; j++) {
                if (age[j] < age[lru_index]) {
                    lru_index = j;
                }
            }        
            page[lru_index] = string[i];
            age[lru_index] = i; // Update age to current time
            miss++;
        }
    }
    printf("Miss = %d and Hit = %d\n", miss, hit);
    for (int i = 0; i < frame; i++) {
        if (page[i] != -1)
            printf("%d\t", page[i]);
        else
            printf("X\t"); // Empty frame
    }
    printf("\n");
}
