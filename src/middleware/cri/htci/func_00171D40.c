/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/runtime_framed_calls_0040.c (func_0040CAA0). See THIRD_PARTY.md. */
#include "types.h"
extern char *func_001C7F58(char *, const char *);
typedef struct {
    s8 first;
    s8 second;
} PathPrefix;
extern PathPrefix D_00387818;
extern PathPrefix D_003CACA0;

void func_00171D40(s8 *path) {
    if (path == 0) {
        D_00387818.first = 0;
    } else {
        if (((*path) != '/') && ((*path) != '\\'))
            D_00387818 = D_003CACA0;
        else
            D_00387818.first = 0;
        func_001C7F58((char *)(&D_00387818), (const char *)path);
    }
}
