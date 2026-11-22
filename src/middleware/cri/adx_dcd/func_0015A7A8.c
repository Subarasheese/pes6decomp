/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxdcd.c (ADX_DecodeInfoAinf). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
extern int func_0015A2D0(unsigned char *hdr, int size, unsigned char *ver, unsigned char *flag);

int func_0015A7A8(unsigned char *hdr, int size, int *ainfsiz, char *ainf, short *volume,
                  short *pan) {
    const unsigned short *words = (const unsigned short *)hdr;
    unsigned char ver;
    unsigned char flag;
    int ret;
    int need;
    int pos;
    short nloop;
    int magic;
    *ainfsiz = 0;
    ret = func_0015A2D0(hdr, size, &ver, &flag);
    if (ret != 0) {
        return ret;
    }
    need = 60;
    if (ver == 4) {
        need = 72;
    }
    if (size < need) {
        return -1;
    }
    if (((unsigned short)((words[0] >> 8) | ((words[0] << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((short)(((words[1] << 8) & 0xFF00) | hdr[3])) < (need - 4)) {
        return -1;
    }
    pos = 20;
    if (ver == 4) {
        pos = 32;
    }
    pos += 2;
    nloop = (((*((short *)(hdr + pos))) >> 8) & 0xFF) | (((*((short *)(hdr + pos))) << 8) & 0xFF00);
    pos += 2;
    if (nloop != 0) {
        pos += 20;
    }
    magic = (((hdr[pos] << 24) | (hdr[pos + 1] << 16)) | (hdr[pos + 2] << 8)) | hdr[pos + 3];
    pos += 4;
    if (magic != 0x41494E46) {
        return -2;
    }
    *ainfsiz =
        ((((unsigned int)(*((int *)(hdr + pos)))) >> 24) | ((*((int *)(hdr + pos))) << 24)) |
        ((((*((int *)(hdr + pos))) << 8) & 0xFF0000) | (((*((int *)(hdr + pos))) >> 8) & 0xFF00));
    pos += 4;
    memcpy(ainf, hdr + pos, 16);
    pos += 16;
    *volume =
        (((*((short *)(hdr + pos))) >> 8) & 0xFF) | (((*((short *)(hdr + pos))) << 8) & 0xFF00);
    pos += 4;
    pan[0] =
        (((*((short *)(hdr + pos))) >> 8) & 0xFF) | (((*((short *)(hdr + pos))) << 8) & 0xFF00);
    pos += 2;
    pan[1] =
        (((*((short *)(hdr + pos))) >> 8) & 0xFF) | (((*((short *)(hdr + pos))) << 8) & 0xFF00);
    return 0;
}
