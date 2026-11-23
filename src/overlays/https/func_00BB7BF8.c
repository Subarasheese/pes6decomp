/* compiler: ee-gcc-2.9-as210-G0 */
/* OpenSSL 0.9.1c, crypto/objects/o_names.c, names_lh_free. See THIRD_PARTY.md. */
#include "pes6/https/object_names.h"
extern int D_00CC9628;
extern int func_00BB7B40(const char *, int);
void func_00BB7BF8(OBJ_NAME *entry) {
    if (D_00CC9628 < 0 || D_00CC9628 == entry->type)
        func_00BB7B40(entry->name, entry->type);
}
