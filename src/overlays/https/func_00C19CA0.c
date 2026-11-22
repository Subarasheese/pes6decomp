/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C55C90[]; /* TCP */
extern const char D_00C55C98[]; /* UDP */
extern const char D_00C55CA0[]; /* mrd_upnp_xml.c */
extern const char D_00C55CB0[]; /* mrdUPnP_Proto2str */
extern const char D_00C55CC8[]; /* [0x%08x]\n */
extern int func_00C13890(const char *format, ...);
extern const char *D_00C479DC;
const char *func_00C19CA0(s16 protocol) {
    const char *name = D_00C55C90;
    if (protocol != 0x2202) {
        if (protocol == 0x2203) {
            name = D_00C55C98;
            return name;
        }
        func_00C13890(D_00C479DC, D_00C55CA0, 39, D_00C55CB0);
        func_00C13890(D_00C55CC8, protocol);
        for (;;) {
        }
    }
    return name;
}
