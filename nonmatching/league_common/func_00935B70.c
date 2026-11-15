/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern char Pes6MatchContext_Stadium[];

void func_00935B70(void) {
    s32 var_s0;

    var_s0 = 0;
    if (((func_00226710() & 0xFF) == 0x1A) || ((func_00226710() & 0xFF) == 0x1B)) {
        var_s0 = 1;
    }
    if ((func_00226710() & 0xFF) == 0x3A) {
        var_s0 = 1;
    }
    if ((var_s0 != 0) && (((*(u8 *)Pes6MatchContext_Stadium) == 1) || ((*(u8 *)Pes6MatchContext_Stadium) == 0xB) || ((*(u8 *)Pes6MatchContext_Stadium) == 0xC) || ((*(u8 *)Pes6MatchContext_Stadium) == 0xD) || ((*(u8 *)Pes6MatchContext_Stadium) == 6) || ((*(u8 *)Pes6MatchContext_Stadium) == 0x11))) {
        (*(u8 *)Pes6MatchContext_Stadium) = 0x1E;
    }
}
