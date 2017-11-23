#include <cstdio>
#include <cstring>

// question 1
struct BuildingInfo {
    char BldgName[16];
    int BldgNumber;
};

int main() {
    // question 2
    BuildingInfo Bldg;

    // question 3
    strncpy(Bldg.BldgName, "Physics", 16);
    Bldg.BldgNumber = 315;

    printf("BuildingName = %s\nBuildingNumber = %d\n",
	   Bldg.BldgName, Bldg.BldgNumber);

    return 0;
}
