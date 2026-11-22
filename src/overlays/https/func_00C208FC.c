/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C57430[]; /* mrd_upnp_socket.c */
extern const char D_00C577C8[]; /* mrdUPnP_Inet_aton */
extern const char D_00C57460[]; /* Reports an unexpected return value. */
extern int func_00C13890(const char *format, ...);
extern const char *D_00C479D0;
int func_00C208FC(void) {
    func_00C13890(D_00C479D0, D_00C57430, 2039, D_00C577C8);
    func_00C13890(D_00C57460);
    return 0x1309;
}
