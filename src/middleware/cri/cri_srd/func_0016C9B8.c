/* compiler: ee-gcc-2.96-G0-g */
/* crowded-street/3s-decomp src/anniversary/cri/libadxe/cri_srd.c (srd_wait_hst). See THIRD_PARTY.md. */

typedef unsigned char u_char;
typedef char Sint8;
typedef signed int Sint32;
typedef signed long Sint64;
extern void func_00108048(const char *fmt, ...);
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef struct {
    Sint8 unk0;
    Sint8 unk1;
    Sint8 stat;
    Sint8 unk3;
    Sint32 unk4;
    Sint32 unk8;
    Sint32 unkC;
    void *unk10;
    sceCdRMode unk14;
    void *unk18;
    Sint32 unk1C;
    Sint32 unk20;
    Sint32 unk24;
    Sint64 unk28;
    Sint32 fd;
    Sint32 unk34;
} SRD_OBJ;
typedef SRD_OBJ *SRD;
extern void func_0016C960();
extern void func_0016D5C0(Sint32 arg0);
extern Sint32 func_0016D858(Sint32 fd, Sint32 req, void *arg2);

void func_0016C9B8(SRD srd) {
    Sint32 sp = 1;
    Sint32 stat;
    Sint32 i;
    i = 0;
    while (1) {
        if (sp != 1) {
            break;
        }
        func_0016D5C0(0x1100);
        stat = func_0016D858(srd->fd, 1, &sp);
        func_0016D5C0(0x1101);
        if (stat < 0) {
            srd->stat = 9;
            srd->unk34 = stat;
            return;
        }
        func_0016C960();
        i++;
        if (i > 0x9000) {
            func_00108048("SRD: srd_wait_hst timeout.\r\n");
            break;
        }
    }
}
