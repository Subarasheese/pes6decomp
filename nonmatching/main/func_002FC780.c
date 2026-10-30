/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F290(void *);                          /* extern */
s32 func_00BF6260();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCDE1[];

s32 func_002FC780(void) {
    s32 var_a0;
    s32 var_v0;
    void *temp_s0;

    if (func_00BF6260() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6260() % 23;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (func_0098F290(temp_s0) == 0) {
        if (M2C_FIELD(temp_s0, u8 *, 0x12) != 1) {
            var_v0 = 0x26;
        } else {
            var_v0 = 0x23;
        }
    } else if (M2C_FIELD(temp_s0, u8 *, 0x12) != 1) {
        var_v0 = 0x27;
    } else {
        var_v0 = 0x24;
    }
    if ((*(u8 *)D_00CBCDE1) == 3) {
        if (M2C_FIELD(temp_s0, u8 *, 0x12) != 1) {
            return 0x28;
        }
        var_v0 = 0x25;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
