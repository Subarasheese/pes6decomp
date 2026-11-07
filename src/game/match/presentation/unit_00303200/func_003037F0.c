/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, char *);
extern char func_00303890[];
typedef struct { char pad[0x1C]; s32 n; } T;

s32 func_003037F0(void *arg0) {
    s32 temp_v1;
    T *temp_a1;

    temp_a1 = M2C_FIELD(arg0, T **, 0x18);
    temp_v1 = temp_a1->n + 1;
    temp_a1->n = temp_v1;
    if (temp_v1 == 0x3C) {
        temp_a1->n = 0;
        func_00305E60(arg0, func_00303890);
        return 1;
    }
    return 0;
}
