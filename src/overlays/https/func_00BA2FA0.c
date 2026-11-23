/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
extern long func_00BA2FC0(void *, s32, long, char *);
long func_00BA2FA0(void *bio, s32 command, long arg, s32 value) {
    return func_00BA2FC0(bio, command, arg, (char *)&value);
}
