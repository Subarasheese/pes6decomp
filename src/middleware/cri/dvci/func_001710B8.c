/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/dvci.c (dvCiOptFn1).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef char Sint8;
typedef signed int Sint32;
typedef char Char8;
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef struct {
    u_int lsn;
    u_int size;
    char name[16];
    u_char date[8];
    u_int flag;
} sceCdlFILE;
typedef void *SRD;
typedef struct {
    Sint8 used;
    Sint8 unk1;
    Sint8 stat;
    Sint8 unk3;
    Sint32 unk4;
    Sint32 unk8;
    Sint32 unkC;
    Sint32 unk10;
    Sint32 unk14;
    void *unk18;
    SRD srd;
    sceCdlFILE unk20;
    sceCdRMode cdrmode;
} DVG_CI_OBJ;
typedef DVG_CI_OBJ *DVG_CI;
extern Sint32 func_00171018(DVG_CI handl);
extern Sint32 func_00171038(DVG_CI handl);
extern Sint32 func_00171068(const Char8 *fname);
extern Sint32 func_00171088(const Char8 *fname);

Sint32 func_001710B8(DVG_CI handl, Sint32 arg1) {
    Sint32 result = 0;
    if (!handl) {
        return 0;
    }
    switch (arg1) {
    case 0xC8:
        result = func_00171018(handl);
        break;

    case 0xC9:
        result = func_00171038(handl);
        break;

    case 0xCA:
        result = func_00171068(handl);
        break;

    case 0xCB:
        result = func_00171088(handl);
        break;

    case 0xCC:
        result = func_00171068(handl);
        break;

    case 0xCD:
        result = func_00171088(handl);
        break;

    case 0x12B:
        result = 1;
        break;
    }

    return result;
}
