/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/sifcmd.c). */
/*
 * Unit: sdk/sce/sifcmd
 *
 * Functions:
 *   0x0027ac20 _set_sreg
 *   0x0027ac40 _change_addr
 *   0x0027ac50 sceSifGetSreg
 *   0x0027ac68 sceSifSetSreg
 *   0x0027ac88 sceSifGetDataTable
 *   0x0027ac98 sceSifInitCmd
 *   0x0027af18 sceSifExitCmd
 *   0x0027af50 sceSifSetCmdBuffer
 *   0x0027af68 sceSifSetSysCmdBuffer
 *   0x0027af80 sceSifAddCmdHandler
 *   0x0027afb0 sceSifRemoveCmdHandler
 *   0x0027afd8 _sceSifSendCmd
 *   0x0027b110 sceSifSendCmd
 *   0x0027b150 isceSifSendCmd
 *   0x0027b190 _sceSifCmdIntrHdlr
 *   0x0027b2b8 sceSifWriteBackDCache
 */

typedef struct SifCmdHeader {
    unsigned int psize : 8;
    unsigned int dsize : 24;
    unsigned int dest;
    int cid;
    unsigned int opt;
} SifCmdHeader;

typedef struct SifCmdSRegData {
    SifCmdHeader header;
    int index;
    unsigned int value;
} SifCmdSRegData;

typedef struct SifCmdChangeAddrData {
    SifCmdHeader header;
    void *newaddr;
} SifCmdChangeAddrData;

typedef struct sceSifDmaData {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;

typedef void (*SifCmdHandler)(void *packet, void *data);

typedef struct SifCmdHandlerData {
    SifCmdHandler func;
    void *data;
} SifCmdHandlerData;

typedef struct SifCmdData {
    void *pktbuf;
    void *cbuf;
    void *iopbuf;
    SifCmdHandlerData *sys_cmd_handlers;
    int nr_sys_handlers;
    SifCmdHandlerData *usr_cmd_handlers;
    int nr_usr_handlers;
    unsigned int *sregs;
} SifCmdData;

extern int D_00613374[];
extern unsigned char D_007036C0[];
extern unsigned char D_00703740[];
extern SifCmdChangeAddrData D_00703780;
extern int D_00703794[];
extern SifCmdData D_00703798;
extern SifCmdHandlerData D_007037C0[];
extern unsigned int D_003EC400[];

#define sif_cmd_initialized   D_00613374
#define sif_pktbuf            D_007036C0
#define sif_cbuf              D_00703740
#define sif_change_addr_pkt   D_00703780
#define sif_dmac_handler_id   D_00703794
#define sif_cmd_data          D_00703798
#define sif_sys_cmd_handlers  D_007037C0
#define sif_sregs             D_003EC400

#define UNCACHED(p) ((void *)((unsigned int)(p) | 0x20000000))

#define DMAC_SIF0_CHCR (*(volatile unsigned int *)0x1000C000)
#define DMAC_STAT      (*(volatile unsigned int *)0x1000E010)

#define SIF_CMD_CHANGE_SADDR 0x80000000
#define SIF_CMD_INIT_CMD     0x80000002
#define SIF_SYSREG_SUBADDR   0x80000000
#define SIF_SYSREG_MAINADDR  0x80000001
#define SIF_REG_SUBADDR      2
#define SIF_REG_SMFLAG       4
#define SIF_STAT_CMDINIT     0x20000

extern int DIntr(void);
extern int EIntr(void);
extern void FlushCache(int mode);
extern void sceSifSetDChain(void);
extern int AddDmacHandler(int channel, int (*handler)(int), int next);
extern int EnableDmac(int channel);
extern int DisableDmac(int channel);
extern int RemoveDmacHandler(int channel, int handler_id);
extern void sceSifWriteBackDCache(void *ptr, int size);
extern unsigned int sceSifSetDma(sceSifDmaData *sdd, int len);
extern unsigned int isceSifSetDma(sceSifDmaData *sdd, int len);
extern unsigned int sceSifGetReg(unsigned int reg);
extern int sceSifSetReg(unsigned int reg, unsigned int value);
extern int _sceSifCmdIntrHdlr(int channel);
extern unsigned int sceSifSendCmd(int cid, void *packet, int packet_size,
                                  void *src, void *dest, int size);void _set_sreg(SifCmdSRegData *packet, SifCmdData *cmd);
void _change_addr(SifCmdChangeAddrData *packet, SifCmdData *cmd);



unsigned int sceSifGetSreg(int index) {
    return sif_sregs[index];
}
unsigned int sceSifSetSreg(int index, unsigned int value);
SifCmdData *sceSifGetDataTable(void);
void sceSifInitCmd(void);
void sceSifExitCmd(void);
SifCmdHandlerData *sceSifSetCmdBuffer(SifCmdHandlerData *buffer, int count);
SifCmdHandlerData *sceSifSetSysCmdBuffer(SifCmdHandlerData *buffer, int count);
void sceSifAddCmdHandler(int cid, SifCmdHandler handler, void *data);
void sceSifRemoveCmdHandler(int cid);
unsigned int _sceSifSendCmd(int cid, int mode, void *packet, int packet_size,
                            void *src, void *dest, int size);
unsigned int sceSifSendCmd(int cid, void *packet, int packet_size, void *src,
                           void *dest, int size);
unsigned int isceSifSendCmd(int cid, void *packet, int packet_size, void *src,
                            void *dest, int size);
