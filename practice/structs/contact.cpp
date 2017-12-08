#include <cstdio>

const int MaxStrSize = 256;

struct Contact {
    char name[MaxStrSize];
    char email[MaxStrSize];
};

void getContactInformation(Contact *c) {
    printf("Enter contact name: ");
    fgets(c->name, MaxStrSize, stdin);
    printf("Enter contact email: ");
    fgets(c->email, MaxStrSize, stdin);
}

int main() {
    Contact c;
    getContactInformation(&c);
    printf("%s: %s\n", c.name, c.email);

    return 0;
}
