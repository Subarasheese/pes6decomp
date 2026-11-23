/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, OBJ_NAME_add. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern void func_00BC0A88(void *);
extern void *func_00BC0A38(size_t __size);
extern char *func_00BB61D0(LHASH *lh, char *data);
extern LHASH *D_00C3DAC0;
extern STACK *D_00C3DAD0;
extern int func_00BB7688();
int func_00BB7A20(char *name, int type, char *data) {
    void (*f)();
    OBJ_NAME *onp;
    OBJ_NAME *ret;
    int alias;
    if ((D_00C3DAC0 == 0) && (!func_00BB7688()))
        return 0;
    alias = type & 0x8000;
    type &= ~0x8000;
    onp = (OBJ_NAME *)func_00BC0A38(sizeof(OBJ_NAME));
    if (onp == 0) {
        return 0;
    }
    onp->name = name;
    onp->alias = alias;
    onp->type = type;
    onp->data = data;
    ret = (OBJ_NAME *)func_00BB61D0(D_00C3DAC0, (char *)onp);
    if (ret != 0) {
        if ((D_00C3DAD0 != 0) && (D_00C3DAD0->num > ret->type)) {
            f = (void (*)())D_00C3DAD0->data[ret->type];
            f(ret->name, ret->type, ret->data);
        }
        func_00BC0A88((char *)((char *)ret));
    } else {
        if (D_00C3DAC0->error) {
            return 0;
        }
    }
    return 1;
}
