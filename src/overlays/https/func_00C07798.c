/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
s32 func_00C07798(HttpAddress *address) {
    if (!address)
        return 0;
    if (address->component[0])
        func_00C0B7D0(address->component[0]);
    if (address->component[1])
        func_00C0B7D0(address->component[1]);
    if (address->component[2])
        func_00C0B7D0(address->component[2]);
    if (address->component[3])
        func_00C0B7D0(address->component[3]);
    if (address->suffix[0])
        func_00C0B7D0(address->suffix[0]);
    if (address->suffix[1])
        func_00C0B7D0(address->suffix[1]);
    func_00C0B7D0(address);
    return 0;
}
