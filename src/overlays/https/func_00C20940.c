/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C57430[]; /* mrd_upnp_socket.c */
extern const char D_00C577E0[]; /* mrdUPnP_Inet_ntoa */
extern const char D_00C577F8[]; /* %d.%d.%d.%d */
extern int func_00C13024(int lock, const char *file, int line, const char *function);
extern int func_00C131E8(int lock, const char *file, int line, const char *function);
extern int func_00C13954(char *out, int capacity, const char *format, ...);
extern s32 D_00C47E2C;
extern char D_00CE93C8[16][20];
char *func_00C20940(u32 ip) {
    s32 next;
    func_00C13024(0x1916, D_00C57430, 2053, D_00C577E0);
    next = D_00C47E2C + 1;
    D_00C47E2C = next >= 16 ? 0 : next;
    func_00C131E8(0x1916, D_00C57430, 2058, D_00C577E0);
    func_00C13954(D_00CE93C8[D_00C47E2C], 20, D_00C577F8, ip & 255, (ip & 0xff00) >> 8,
                  (ip >> 16) & 255, ip >> 24);
    return D_00CE93C8[D_00C47E2C];
}
