/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 flags, first, second, active;
} ModelFlags;
extern ModelFlags *D_00520220;
void func_001901C0(u8 first, u8 second) {
    if (D_00520220) {
        D_00520220->first = first;
        D_00520220->second = second;
    }
}
