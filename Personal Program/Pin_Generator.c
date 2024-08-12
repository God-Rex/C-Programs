
#include <stdio.h>
#include <stdlib.h>

const unsigned int c = 1664525;
const unsigned int m = 2147483647;

unsigned int custom_rand(unsigned int seed, unsigned int pin) {
    return (pin * seed + c) % m;
}

int main() {
    int i,g,left;
    unsigned long long rand_seed;
    unsigned int pin, checkpin, detailInput, detailOutput;

    printf("Enter Your Mobile Number: ");
    if (scanf("%llu", &rand_seed) != 1) {
        printf("Invalid Mobile Number\n");
        return 1;
    }

    printf("Set PIN: ");
    if (scanf("%u", &pin) != 1) {
        printf("Invalid input for pin.\n");
        return 1;
    }
    detailInput = custom_rand(rand_seed, pin);

    printf("\nChecking PIN\n");
    for(left=3;left>=0;left--){
    printf("Enter PIN: ");
    if (scanf("%u", &checkpin) != 1) {
        printf("Invalid input for pin.\n");
        return 1;
    }
    detailOutput = custom_rand(rand_seed, checkpin);
    // printf("%u\n",custom_rand);

    if (detailInput == detailOutput) {
        printf("WELCOME\nYour Details:\nMobile Number: %llu\nYour PIN: %u", rand_seed, pin);
    } else {
        printf("SO SORRY\nInvalid User😓");
        printf("\n--Left onlt %d Attepms--\n",left);
        // exit(0);
    }
    }
    exit(0);
    return 0;
}
