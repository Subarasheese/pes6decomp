/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern s32 func_001D7980(void *);
extern s32 D_003EA860;
extern void *D_00CCBFA0;
extern char D_00CCBFC4[];
extern char D_00CCBFC9[];
extern char D_00CCBFCC[];
extern char D_00CCBFD0[];

s32 func_00C7CB70(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    temp_s0 = (*(s32 *)D_00CCBFCC);
    var_s1 = 0;
    if ((func_001D7980(func_002F9370(D_00CCBFA0)) & 0xFF) == 1) {
        var_s1 = 1;
    }
    if ((temp_s0 == arg0) && (var_s1 == 1)) {
        if ((u32) (arg0 - 3) < 2U) {
            (*(s32 *)D_00CCBFD0) = 7;
        }
        if (D_003EA860 != 0) {
            (*(s32 *)D_00CCBFCC) = 7;
            (*(s32 *)D_00CCBFC4) = 0xB4;
            (*(u8 *)D_00CCBFC9) = ((*(u8 *)D_00CCBFC9) & ~1) | 1;
        }
        var_s2 = 1;
    }
    return var_s2;
}
