#include <stdio.h>
#include <string.h>

char tester[] = "this is a test";

int main(int argc, const char * argv[]) {
    printf("%d\n", factorial(8));
    printd(12);
    reverse(0, tester);
    printf("\n");
    return 0;
}

// Print a reversed string recursively
void reverse(int s, char v[]){
    int i = 0 + s;
    if(i < strlen(v)) {
        reverse(i+1, v);
    }
    printf("%c",v[i]);
}
