/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, OBJ_NAME_get. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern char *func_00BB6378(LHASH *lh, char *data);
extern LHASH *D_00C3DAC0;
extern int func_00BB7688();
char *func_00BB7948(char *name, int type) {
    OBJ_NAME on;
    OBJ_NAME *ret;
    int num = 0;
    int alias;
    if (name == 0)
        return (void *)0;
    if ((D_00C3DAC0 == 0) && (!func_00BB7688()))
        return (void *)0;
    alias = type & 0x8000;
    type &= ~0x8000;
    on.name = name;
    on.type = type;
    for (;;) {
        ret = (OBJ_NAME *)func_00BB6378(D_00C3DAC0, (char *)(&on));
        if (ret == 0)
            return (void *)0;
        if (ret->alias && (!alias)) {
            if ((++num) > 10)
                return (void *)0;
            on.name = ret->data;
        } else {
            return ret->data;
        }
    }
}
