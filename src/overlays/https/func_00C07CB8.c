/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
s32 func_00C07CB8(HttpHeader *header) {
    HttpHeader *next;
    while (header) {
        next = header->next;
        if (header->name)
            func_00C0B7D0(header->name);
        if (header->value)
            func_00C0B7D0(header->value);
        func_00C0B7D0(header);
        header = next;
    }
    return 0;
}
