/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern s32 D_003EAA0C;
extern char D_008DF1B6[];
extern char D_008DF35E[];
extern char D_008DF368[];
extern char D_008DF506[];
extern char D_008DF510[];
extern char D_008DF6AE[];
extern char D_008DF6B8[];
extern char D_008DF860[];
extern char D_008DF9FE[];
extern char D_008DFA08[];

void func_008BC8A0(void) {
    if ((*(s16 *)D_008DF1B6) != 6) {
        (*(s32 *)D_008DF368) = 1;
        (*(s16 *)D_008DF35E) = 0;
    } else {
        (*(s32 *)D_008DF368) = 0;
    }
    if (D_003EAA0C != 2) {
        if ((*(s16 *)D_008DF1B6) != 6) {
            (*(s32 *)D_008DF510) = 1;
            (*(s32 *)D_008DFA08) = 1;
        } else {
            (*(s32 *)D_008DF510) = 0;
            (*(s32 *)D_008DFA08) = 0;
        }
    }
    if ((*(s16 *)D_008DF506) != 0) {
        (*(s32 *)D_008DF6B8) = 1;
        goto block_15;
    }
    (*(s32 *)D_008DF6B8) = 0;
    if ((*(s16 *)D_008DF9FE) == 2) {
        (*(s32 *)D_008DF6B8) = 1;
block_15:
        (*(s16 *)D_008DF6AE) = 0;
    }
    if ((*(s16 *)D_008DF506) == 1) {
        (*(s32 *)D_008DF860) = 0;
    } else {
        (*(s32 *)D_008DF860) = 1;
    }
    if ((*(s16 *)D_008DF506) == 1) {
        (*(s32 *)D_008DF860) = 0;
        return;
    }
    (*(s32 *)D_008DF860) = 1;
}
