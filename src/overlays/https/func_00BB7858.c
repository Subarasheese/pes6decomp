/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, obj_name_cmp. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern int strcmp(const char *, const char *);
extern STACK *D_00C3DAC8;
int func_00BB7858(OBJ_NAME *a, OBJ_NAME *b) {
    int ret;
    int (*cmp)();
    ret = a->type - b->type;
    if (ret == 0) {
        if ((D_00C3DAC8 != 0) && (D_00C3DAC8->num > a->type)) {
            cmp = (int (*)())D_00C3DAC8->data[a->type];
            ret = cmp(a->name, b->name);
        } else
            ret = strcmp(a->name, b->name);
    }
    return ret;
}
