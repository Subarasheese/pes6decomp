/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_009C3A40(s8 *);
extern s32 func_00B297D0(void);
extern void func_00B9CC30(s8 *, s8 *);

extern char Pes6MatchPlayers[];
extern u8 D_00591C09[];

void func_009B9EF0(s32 arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v1;

    temp_s1 = func_009C3A40((s8 *)arg0) & 0xFF;
    var_a1 = 1;
    if (D_00591C09[0] == 5) {
        var_a1 = func_00B297D0();
    }
    if ((temp_s1 != 0) && (var_a1 != 0)) {
        temp_v1 = temp_s1 & 0xFF;
        if (temp_v1 != 0xFF) {
            var_v1 = temp_v1 % 23;
        } else {
            var_v1 = 1;
        }
        func_00B9CC30((s8 *)arg0, ((s8 *)Pes6MatchPlayers) + (var_v1 * 0x240));
    }
}
