/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char * Pes6Heap_Alloc(s32, s32);

s32 func_001ED780(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v0;
    char *temp_s0;
    char *temp_v0;
    char *temp_v0_2;
    char *temp_v1;
    char *temp_v1_2;

    temp_s0 = Pes6Heap_Alloc(1, 0x40);
    if (arg0 < 2) {
        var_v0 = 2;
    } else {
        var_v0 = arg0;
    }
    M2C_FIELD(temp_s0, s32 *, 8) = var_v0;
    temp_v0 = Pes6Heap_Alloc(1, arg0 * 0x34);
    temp_a1 = arg0 * 0x10;
    M2C_FIELD(temp_s0, char **, 0x20) = temp_v0;
    temp_v1 = temp_v0 + temp_a1;
    temp_a0 = arg0 * 8;
    temp_v0_2 = temp_v1 + temp_a1;
    M2C_FIELD(temp_s0, char **, 0x24) = temp_v1;
    M2C_FIELD(temp_s0, char **, 0x28) = temp_v0_2;
    temp_v1_2 = temp_v0_2 + temp_a0;
    M2C_FIELD(temp_s0, char **, 0x2C) = temp_v1_2;
    M2C_FIELD(temp_s0, char **, 0x30) = (char *) (temp_v1_2 + temp_a0);
    return (s32) temp_s0;
}
