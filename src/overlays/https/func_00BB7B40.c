/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, OBJ_NAME_remove. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern void func_00BC0A88(void *);
extern char *func_00BB62C0(LHASH *lh, char *data);
extern LHASH *D_00C3DAC0;
extern STACK *D_00C3DAD0;
int func_00BB7B40(char *name, int type) {
    OBJ_NAME on;
    OBJ_NAME *ret;
    void (*f)();
    if (D_00C3DAC0 == 0)
        return 0;
    type &= ~0x8000;
    on.name = name;
    on.type = type;
    ret = (OBJ_NAME *)func_00BB62C0(D_00C3DAC0, (char *)(&on));
    if (ret != 0) {
        if ((D_00C3DAD0 != 0) && (D_00C3DAD0->num > type)) {
            f = (void (*)())D_00C3DAD0->data[type];
            f(ret->name, ret->type, ret->data);
        }
        func_00BC0A88((char *)((char *)ret));
        return 1;
    } else
        return 0;
}
