/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
#include "pes6/https/client_state.h"
extern s32 func_00C08DF8(const char *left, const char *right);
HttpHeader *func_00C04570(HttpHeader *header, const char *name) {
    while (header && func_00C08DF8(header->name, name) != 0)
        header = header->next;
    return header;
}
