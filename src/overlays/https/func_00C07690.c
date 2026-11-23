/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
extern void *func_00C0B6F8(u32 count, u32 size);
extern char *func_00C08B78(const char *s);
HttpAddress *func_00C07690(const HttpAddress *src) {
    HttpAddress *dst;
    if (!src)
        return 0;
    dst = func_00C0B6F8(1, sizeof(*dst));
    if (!dst)
        return 0;
    dst->component[0] = func_00C08B78(src->component[0]);
    if (!dst->component[0] && src->component[0])
        goto failed;
    dst->component[1] = func_00C08B78(src->component[1]);
    if (!dst->component[1] && src->component[1])
        goto failed;
    dst->component[2] = func_00C08B78(src->component[2]);
    if (!dst->component[2] && src->component[2])
        goto failed;
    dst->component[3] = func_00C08B78(src->component[3]);
    if (!dst->component[3] && src->component[3])
        goto failed;
    dst->number = src->number;
    dst->suffix[0] = func_00C08B78(src->suffix[0]);
    if (!dst->suffix[0] && src->suffix[0])
        goto failed;
    dst->suffix[1] = func_00C08B78(src->suffix[1]);
    if (!dst->suffix[1] && src->suffix[1])
        goto failed;
    return dst;
failed:
    func_00C07798(dst);
    return 0;
}