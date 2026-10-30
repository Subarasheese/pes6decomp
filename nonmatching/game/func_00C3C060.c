/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB975[];
extern char D_00CCB976[];
extern char D_00CCB977[];

u8 func_00C3C060(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        return (*(u8 *)D_00CCB975);
    case 1:
        return (*(u8 *)D_00CCB976);
    case 2:
        return (*(u8 *)D_00CCB977);
    default:
        return 0U;
    }
}
