/* compiler: ee-gcc-2.9-as210-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned char u8;
typedef struct { int a; int b; int c; u8 s0; u8 s1; u8 s2; u8 pad; void *buf; int *res; } Cmd;
extern Cmd D_00372B80;
extern volatile int D_00372AB8;
extern volatile int _sceCd_c_cb_sem;
extern volatile int sceCdCbfunc_num;
extern int D_00372A90;
extern volatile int _sceCd_ncmd_semid;
extern char D_00373B80[];
extern int D_00373C40;
extern char D_00373C50[];
int func_00113CE0(void);
int func_00113B88(int);
void func_001134D8(int a);
void func_00105380(int);
void printf(const char *, ...);
void sceSifWriteBackDCache(void *, int);
int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);

/* sceCdRead */
int func_001147B0(unsigned int lbn, unsigned int sectors, void *buf, u8 *mode)
{
    Cmd *cmd = &D_00372B80;
    int len;
    char *data;

    if (!(D_00372AB8 & 1)) {
        if (func_00113CE0() == 6) return 0;
    }
    if (!func_00113B88(4)) return 0;
    cmd->a = lbn;
    cmd->b = sectors;
    cmd->c = (int)buf;
    cmd->s0 = mode[0];
    cmd->s1 = mode[1];
    cmd->s2 = mode[2];
    cmd->buf = D_00373B80;
    cmd->res = &D_00373C40;
    switch (mode[2]) {
    case 0: len = sectors << 11; break;
    case 1: len = sectors * 0x918; break;
    case 2: len = sectors * 0x924; break;
    default: len = sectors << 11; break;
    }
    D_00373C40 = 0;
    if (!(D_00372AB8 & 2)) sceSifWriteBackDCache(buf, len);
    data = D_00373B80;
    sceSifWriteBackDCache(data, 0x90);
    sceSifWriteBackDCache(cmd, 0x18);
    sceSifWriteBackDCache(&D_00373C40, 4);
    if (D_00372A90 > 0) printf("call cdread cmd\n");
    sceCdCbfunc_num = 1;
    _sceCd_c_cb_sem = 1;
    if (sceSifCallRpc(D_00373C50, 1, 1, cmd, 0x18, 0, 0, (void *)func_001134D8, data) < 0) {
        sceCdCbfunc_num = 0;
        _sceCd_c_cb_sem = 0;
        func_00105380(_sceCd_ncmd_semid);
        return 0;
    }
    if (D_00372A90 > 0) printf("cdread end\n");
    return 1;
}
