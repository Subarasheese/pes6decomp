/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002C84D0(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C86A0(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C8870(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C89A0(void *, s8 *, void *, M2C_UNK); /* extern */
M2C_UNK func_002C8BA0(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C8CD0(void *, s8 *, void *, M2C_UNK); /* extern */
M2C_UNK func_002C8FD0(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C9100(void *, s8 *, void *);        /* extern */
M2C_UNK func_002C92D0(s8 *, void *);                /* extern */

void func_002C8380(void *arg0, void *arg1) {
    s8 sp3F;

    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A) = 1;
    sp3F = 1;
    func_002C92D0(&sp3F, arg1);
    if (M2C_FIELD(arg1, s8 *, 0xB) > 0) {
        func_002C9100(arg0, &sp3F, arg1);
    }
    if (M2C_FIELD(arg1, s8 *, 0xC) > 0) {
        func_002C8FD0(arg0, &sp3F, arg1);
    }
    if (M2C_FIELD(arg1, s8 *, 0xD) > 0) {
        func_002C8CD0(arg0, &sp3F, arg1, 0);
    }
    if (M2C_FIELD(arg1, s8 *, 0xE) > 0) {
        func_002C8BA0(arg0, &sp3F, arg1);
    }
    if (M2C_FIELD(arg1, s8 *, 0xF) > 0) {
        func_002C89A0(arg0, &sp3F, arg1, 0);
    }
    if (M2C_FIELD(arg1, s8 *, 0x10) > 0) {
        func_002C8870(arg0, &sp3F, arg1);
    }
    if (M2C_FIELD(arg1, s8 *, 0x11) > 0) {
        func_002C86A0(arg0, &sp3F, arg1);
    }
    func_002C84D0(arg0, &sp3F, arg1);
}
