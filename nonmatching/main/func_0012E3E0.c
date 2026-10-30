/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
extern char D_003FB680[];
extern char D_003FB6A0[];

u8 func_0012E3E0(u8 arg0, s8 arg1) {
    s32 var_v0;

    M2C_FIELD(((void *)D_003FB680), u8 *, 0) = arg0;
    M2C_FIELD(((void *)D_003FB680), s8 *, 1) = arg1;
    var_v0 = sceSifCallRpc(((void *)D_003FB6A0), 4, 0U, ((void *)D_003FB680), 0x20, ((void *)D_003FB680), 0x20, NULL, (void *) 0);
    if (var_v0 == 0) {
        var_v0 = (s32) M2C_FIELD(((void *)D_003FB680), u8 *, 0);
    }
    return (u8) var_v0;
}
