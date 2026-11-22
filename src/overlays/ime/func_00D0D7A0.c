/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern s32 func_003637D0(s32);
extern s32 func_00826B20(void);
extern void func_00D0C090(void);
extern s32 func_00D13BE0(void);
extern s32 func_00D153F0(void);
extern char D_00D376C8[];
extern char D_00D376E8[];
extern char D_00D37724[];
extern char D_00D3776E[];
extern char D_00D37776[];

s32 func_00D0D7A0(void) {
    s32 var_v1;

    if ((*(s8 *)D_00D3776E) == 1) {
        if ((*(s32 *)D_00D376E8) == 0) {
            var_v1 = 0;
        } else {
            var_v1 = (*(s32 *)D_00D37724);
        }
        if (var_v1 == 1) {
            func_00826B20();
            if ((*(s32 *)D_00D376E8) != 0) {
                (*(s32 *)D_00D37724) = 0;
            }
        }
        func_00D153F0();
        (*(s8 *)D_00D37776) = 0;
        func_00D0C090();
        func_00D13BE0();
        if ((*(s8 *)D_00D3776E) != 0) {
            func_003637D0((*(s32 *)D_00D376C8));
        }
        (*(s8 *)D_00D3776E) = 0;
    }
    return 1;
}
