/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern char Pes6MatchPlayers[];

void func_00B64860(u8 arg0) {
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    var_s0 = 0;
    do {
        temp_v1 = ((void *)Pes6MatchPlayers) + (((var_s0 & 0xFF) + 1) * 0x240);
        if (temp_v1 != NULL) {
            M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u8 *, 0x2C) = arg0;
            temp_v0 = M2C_FIELD(temp_v1, void **, 4);
            func_001A58E0(M2C_FIELD(temp_v0, void **, 0), (s8) M2C_FIELD(temp_v0, u8 *, 0x2C));
        }
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 0xB);
}
