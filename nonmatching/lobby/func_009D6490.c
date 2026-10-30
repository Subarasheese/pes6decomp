/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009D3830(void);
M2C_UNK func_009D6230();                            /* extern */
extern char D_00A7DE90[];

void func_009D6490(void) {
    if ((*(s32 *)D_00A7DE90) != 0) {
        func_009D6230();
        func_009D3830();
    }
}
