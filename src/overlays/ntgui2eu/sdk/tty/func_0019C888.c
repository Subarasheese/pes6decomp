/* compiler: ee-gcc-2.9 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/tty.c). */

#define UNCACHED_SEGMENT 0x20000000
#define UNCACHED(p) ((void *)((unsigned int)(p) | UNCACHED_SEGMENT))

#define PROTO_ETTY 0x210

#define DECI2_READ 1
#define DECI2_READDONE 2
#define DECI2_WRITE 3
#define DECI2_WRITEDONE 4

#define TTY_BUFSZ 0x100

typedef struct {
    int size;
    volatile int count;
    unsigned char *rp;
    unsigned char *wp;
    unsigned char buf[TTY_BUFSZ];
} Queue;

typedef struct {
    unsigned short len;
    unsigned short rsvd;
    unsigned short proto;
    char src;
    char dest;
    int id;
} TtyHdr;

typedef struct {
    TtyHdr hdr;
    unsigned char data[TTY_BUFSZ];
} TtyPacket;

typedef struct {
    volatile int socket;
    volatile int wlen;
    volatile int rlen;
    volatile int writing;
    unsigned char *wbuf;
    unsigned char *rbuf;
    Queue *queue;
} TtyInfo;

typedef void (*Deci2Handler)(int event, int param, void *opt);

extern Queue D_00703280;
extern TtyInfo D_01201490;
extern unsigned char D_012014C0[0x140];
extern unsigned char D_01201600[0x140];

#define tty_queue D_00703280
#define tty_info D_01201490
#define tty_wbuf D_012014C0
#define tty_rbuf D_01201600

extern int func_001A6958(unsigned short protocol, void *opt, Deci2Handler handler);
extern int sceDeci2ReqSend(int socket, char dest);
extern int sceDeci2Poll(int socket);
extern int sceDeci2ExRecv(int socket, void *buf, unsigned short len);
extern int sceDeci2ExSend(int socket, void *buf, unsigned short len);
extern int DIntr(void);
extern int EIntr(void);
extern void func_0019B3A0(int mode);
extern int kprintf(const char *fmt, ...);
Queue *func_0019C400(int size);
void QueuePeekWriteDone(Queue *q);
void QueuePeekReadDone(Queue *q);
void D_0019C4A8(int event, int param, TtyInfo *ti);
int sceTtyWrite(const char *buf, int len);
int sceTtyRead(char *buf, int len);

int func_0019C888(void) {
    TtyHdr *hdr;

    func_0019B3A0(0);
    tty_info.socket = func_001A6958(PROTO_ETTY, &tty_info, (Deci2Handler)D_0019C4A8);
    if (tty_info.socket < 0) {
        return 0;
    }
    tty_info.writing = 0;
    tty_info.wlen = 0;
    tty_info.rlen = 0;
    tty_info.rbuf = UNCACHED(tty_rbuf);
    hdr = UNCACHED(tty_wbuf);
    tty_info.wbuf = (unsigned char *)hdr;
    hdr->proto = PROTO_ETTY;
    hdr->src = 'E';
    hdr->dest = 'H';
    hdr->rsvd = 0;
    hdr->id = 0;
    tty_info.queue = func_0019C400(TTY_BUFSZ);
    return 1;
}
