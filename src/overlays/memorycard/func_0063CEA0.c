/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001CDAA0(void);
extern char D_003C54C0[];

u8 func_0063CEA0(void) {
    return *(((char *)D_003C54C0) + func_001CDAA0());
}
