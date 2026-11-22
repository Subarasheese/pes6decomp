/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libkernl/tty.c (sceTtyHandler). See LICENSES/ico-MIT.txt. */
extern void func_0019DC50(char *fmt, ...);
extern int func_001A6A78(int s, void *buf, unsigned short len);
extern int func_001A6AB0(int s, void *buf, unsigned short len);
typedef struct {
    int size;
    int count;
    char *rp;
    char *wp;
    char buf[256];
} TtyQueue;
typedef struct {
    volatile int s;
    volatile int wlen;
    volatile int rlen;
    volatile int busy;
    char *wbuf;
    char *rbuf;
    TtyQueue *q;
} TtyRec;
extern void func_0019C428(TtyQueue *q);

void func_0019C4A8(int event, int param, void *opt) {
    TtyRec *tty = opt;
    int n;
    int i;
    char *hdr;
    switch (event) {
    case 1:

    case 2:
        if (param != 0) {
            if (320 < ((unsigned int)(tty->rlen + param))) {
                func_0019DC50("TTY: packet size larger than expect\n");
            }
            i = func_001A6A78(tty->s, tty->rbuf + tty->rlen, (unsigned short)param);
            if (i < 0) {
                func_0019DC50("TTY: receive error");
            }
            tty->rlen = tty->rlen + i;
            return;
        }
        hdr = tty->rbuf;
        for (i = 12; i < (*((unsigned short *)hdr)); i++) {
            *tty->q->wp = tty->rbuf[i];
            func_0019C428(tty->q);
        }

        tty->rlen = 0;
        return;

    case 3:
        n = func_001A6AB0(tty->s, tty->wbuf, (unsigned short)tty->wlen);
        if (n < 0) {
            func_0019DC50("TTY: send err %d\n", n);
            break;
        }
        tty->wbuf = tty->wbuf + n;
        tty->wlen = tty->wlen - n;
        return;

    case 4:
        if (tty->wlen != 0) {
            func_0019DC50("TTY: err ti->wlen=%08x\n", tty->wlen);
        }
        break;

    default:
        return;
    }

    tty->busy = 0;
}
