// stringf.cpp -- string formatting
#include <cstdio>

#define BLURB "Authentic imitation!"

int main() {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;
}
