/* compiler: ee-gcc-2.9-as210-G0 */
/* Komasia/sly2-decomp, src/lib/_sequenceHeader.c (_sequenceHeader). See THIRD_PARTY.md. */

typedef struct {
    int type;
    int pad[7];
} CB;
typedef struct {
    char p0[0xE8];
    int xE8;
    char pEC[0x134 - 0xEC];
    int hsize;
    int vsize;
    char p13C[0x144 - 0x13C];
    int bit_rate;
    int vbv_size;
    char p14C[0x828 - 0x14C];
    int x828;
    unsigned int cmd;
    char p830[0x850 - 0x830];
    int load_intra;
    int load_nonintra;
    char p858[0x868 - 0x858];
    void *mp;
} D;
#define R(a) (*(volatile unsigned int *)(a))
extern unsigned char D_00901740[];
extern unsigned char D_00901780[];
unsigned int func_008F86F8(D *d, int n);
void func_00900500(D *d, const char *msg);
int func_008FBDB0(void *mp, CB *cb);
void func_008FAA38(D *d);
int DIntr(void);
int EIntr(void);
void func_008FA868(D *d);
void func_008F9C68(void *mp);
static inline void _loadQM(D *d, unsigned char *qm, unsigned int cmd) {
    CB cb;
    int e;

    cb.type = 2;
    func_008FBDB0(d->mp, &cb);
    func_008FAA38(d);
    R(0x10002000) = 0;
    func_008FAA38(d);
    e = DIntr();
    R(0x1000B410) = (unsigned int)qm & 0x0FFFFFFF;
    R(0x1000B420) = 4;
    R(0x1000B400) = 0x101;
    if (e)
        EIntr();
    R(0x10002000) = cmd;
    d->cmd = cmd & 0xF0000000;
    d->x828 = 1;
    func_008FAA38(d);
    cb.type = 3;
    func_008FBDB0(d->mp, &cb);
}
void func_008F9F80(D *d) {
    unsigned int v;
    int vs;

    d->xE8 = 0;
    v = func_008F86F8(d, 32);
    vs = (v >> 8) & 0xFFF;
    d->hsize = v >> 20;
    d->vsize = vs;
    if (vs > 2800)
        func_00900500(d, "vertical size > 2800");
    v = func_008F86F8(d, 30);
    d->bit_rate = v >> 12;
    d->vbv_size = (v >> 1) & 0x3FF;
    if ((d->load_intra = func_008F86F8(d, 1))) {
        func_008FAA38(d);
        R(0x10002000) = 0x50000000;
        d->cmd = 0x50000000;
        d->x828 = 1;
        func_008FAA38(d);
    } else {
        _loadQM(d, D_00901740, 0x50000000);
    }
    if ((d->load_nonintra = func_008F86F8(d, 1))) {
        func_008FAA38(d);
        R(0x10002000) = 0x58000000;
        d->cmd = 0x50000000;
        d->x828 = 1;
        func_008FAA38(d);
    } else {
        _loadQM(d, D_00901780, 0x58000000);
    }
    func_008FA868(d);
    func_008F9C68(d->mp);
}
