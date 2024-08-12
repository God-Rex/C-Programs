#include <stdio.h>
#include<stdlib.h>

const unsigned int c = 1664525;
const unsigned int m = 2147483647;

unsigned int custom_rand(unsigned int seed, unsigned int pin) {
    return (pin * seed + c) % m;
}


int main() {
    int i;
    unsigned long long rand_seed;
    unsigned int pin, checkpin, detailInput, detailOutput;

    printf("Enter Your Mobile Number: ");
    if (scanf("%llu", &rand_seed) != 1) {
        printf("Invalid Mobile Number\n");
        return 1;
    }
    printf("%llu\n",rand_seed);
    printf("Set PIN: ");
    if (scanf("%u", &pin) != 1) {
        printf("Invalid input for pin.\n");
        return 1;
    }
    detailInput = custom_rand(rand_seed, pin);
    
    printf("\nChecking PIN\n");
    printf("Enter PIN: ");
    if (scanf("%u", &checkpin) != 1) {
        printf("Invalid input for pin.\n");
        return 1;
    }
    detailOutput = custom_rand(rand_seed, checkpin);
    if(detailInput == detailOutput)
    {
        printf("WELCOME\nYour Details:\nMobile Number: %llu\nYour PIN: %u",rand_seed,pin);
    }
    else
    {
        printf("SO SORRY\nInvalid User");
        exit(0);
    }

    return 0;
}
