/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
extern char *strcpy(char *, const char *);
extern s32 D_005BEDE0, D_005BEDE4, D_005BEDE8;
void func_00158BD8(char *path, s32 *value, s32 profile) {
    switch (profile) {
    case 1:
        *value = D_005BEDE0;
        strcpy(path, "mc0:/BWNETCNF/BWNETCNF");
        return;
    case 2:
        *value = D_005BEDE4;
        strcpy(path, "mc1:/BWNETCNF/BWNETCNF");
        return;
    case 3:
        *value = D_005BEDE8;
        strcpy(path, "pfs0:/etc/network/net.db");
        return;
    }
}
