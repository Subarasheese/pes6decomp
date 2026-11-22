/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00915200(char *, char *);
extern s32 func_00996180(void);
s32 func_00C23600(char *);
extern char *Pes6BallOwnerRecord;
extern char Pes6MatchPlayers[];

void func_009155D0(void) {
    s32 var_a0;
    u8 temp_v1;
    char *temp_s0;

    if (func_00996180() != 0) {
        var_a0 = 1;
        if (M2C_FIELD(Pes6BallOwnerRecord, s32 *, 4) == 1) {
            temp_v1 = M2C_FIELD(Pes6BallOwnerRecord, u8 *, 8);
            if (temp_v1 != 0xFF) {
                var_a0 = (s32) temp_v1 % 23;
            }
            temp_s0 = ((char *)Pes6MatchPlayers) + (var_a0 * 0x240);
            if (func_00915200(temp_s0, Pes6BallOwnerRecord) != 0) {
                func_00C23600(temp_s0);
            }
        }
    }
}
