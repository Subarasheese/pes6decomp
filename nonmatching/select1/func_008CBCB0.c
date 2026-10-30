/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B1170(void);
extern void func_001A72E0(void);
extern void func_001A9A10(void);
extern void func_001A66C0(void);
extern char Pes6MatchPlayers[];

void func_008CBCB0(s32 arg0) {
    s32 temp_s0;
    s32 var_a0;

    if (arg0 != 0xFF) {
        var_a0 = arg0 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = *M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s32 **, 4);
    func_001A66C0();
    func_001B1170();
    func_001A72E0();
    func_001A9A10();
}
