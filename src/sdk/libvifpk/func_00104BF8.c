/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libipu/libipu.c (sceIpuSync). See LICENSES/ico-MIT.txt. */

int func_00104BF8(int mode, unsigned short timeout) {
    int r = 0;
    switch (mode) {
    case 0:
        while ((*((volatile int *)0x10002010)) < 0) {
        }

        r = 0;
        break;

    case 1:
        r = ((unsigned)(*((volatile int *)0x10002010))) >> 31;
        break;
    }

    return r;
}
