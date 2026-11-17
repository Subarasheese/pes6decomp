/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern s32 func_001D7BC0(s32);
extern s32 func_001D7980(s32);
extern s32 D_003EA860;
extern char D_00CCBFA0[];

s32 func_00C7CC60(s32 arg0) {
    s32 var_s1;
    s32 var_s2;
    s16 temp_s0;

    var_s2 = 0;
    if (D_003EA860 != 0) {
        temp_s0 = func_001D7BC0(func_002F9370(*(void **)D_00CCBFA0));
        var_s1 = 0;
        if ((func_001D7980(func_002F9370(*(void **)D_00CCBFA0)) & 0xFF) == 1) {
            var_s1 = 1;
        }
        if (temp_s0 == arg0 && var_s1 == 1) {
            var_s2 = 1;
        }
    }
    return var_s2;
}
