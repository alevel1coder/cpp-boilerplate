#include <cstdio>
#include "Config.h"

int main(int argc, char *argv[]) {
    // output program location and version
    printf("Running: %s\nVersion: %i.%i\n", argv[argc-argc],
            VERSION_MAJOR, VERSION_MINOR);
    // main print
    printf("Hello CMake \n");
        return 0;
}
