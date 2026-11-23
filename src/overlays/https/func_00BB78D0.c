/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL_0_9_1c, crypto/objects/o_names.c, obj_name_hash. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"

extern unsigned long func_00BB6818(char *c);
extern STACK *D_00C3DACC;
unsigned long func_00BB78D0(OBJ_NAME *a) {
    unsigned long ret;
    unsigned long (*hash)();
    if ((D_00C3DACC != 0) && (D_00C3DACC->num > a->type)) {
        hash = (unsigned long (*)())D_00C3DACC->data[a->type];
        ret = hash(a->name);
    } else {
        ret = func_00BB6818(a->name);
    }
    ret ^= a->type;
    return ret;
}
