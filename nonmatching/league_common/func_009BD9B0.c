/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern void func_001EF900(void *, s8);
extern void func_0017E120(int);
extern void *D_003EA9C4;
extern char Pes6MatchPlayers[];

void func_009BD9B0(s32 arg0) {
    s32 temp_s1;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    temp_s0 = D_003EA9C4;
    if (temp_s0 != NULL) {
        var_s2 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x548) > 0) {
            temp_s1 = arg0 & 0xFF;
            do {
                func_0017E120(temp_s1);
                func_001A58E0(*M2C_FIELD((((void *)Pes6MatchPlayers) + ((var_s2 & 0xFF) * 0x240)), void ***, 0x244), (s8) temp_s1);
                var_s2 = (var_s2 + 1) & 0xFF;
            } while (var_s2 < (s32) M2C_FIELD(temp_s0, u8 *, 0x548));
        }
        if ((arg0 & 0xFF) == 1) {
            var_s1 = 0;
            if ((s32) M2C_FIELD(temp_s0, u8 *, 0x548) > 0) {
                do {
                    func_001EF900(M2C_FIELD((temp_s0 + ((var_s1 & 0xFF) * 4)), void **, 0x558), 0);
                    var_s1 = (var_s1 + 1) & 0xFF;
                } while (var_s1 < (s32) M2C_FIELD(temp_s0, u8 *, 0x548));
            }
        }
    }
}
