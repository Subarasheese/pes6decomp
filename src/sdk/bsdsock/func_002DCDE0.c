/* compiler: mwcc-3.0.1b210-O2 */
#include "pes6/ipv4.h"

extern int sprintf(char *dest, const char *format, ...);
extern char D_005E7FB0[];

char *func_002DCDE0(Pes6IPv4Address ip) {
    sprintf(D_005E7FB0, "%d.%d.%d.%d", (s32)(ip.address & 255),
            (s32)((ip.address >> 8) & 255), (s32)((ip.address >> 16) & 255),
            (s32)((ip.address >> 24) & 255));
    return D_005E7FB0;
}
