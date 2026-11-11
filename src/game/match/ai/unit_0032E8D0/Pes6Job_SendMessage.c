/* compiler: mwcc-3.0.1b210 */
extern int *Pes6Job_GetManager(void);
extern int func_00334470(int, int);
extern int func_00359E90(void);
extern int func_003327B0(int, int);
extern void func_00333420();
extern void Pes6Job_Create(int, void (*)(), int, void *);
extern int D_003E1818[];
extern int D_003E1820[];
extern char D_003E1D10[];
extern char D_003E9F1C;
extern int D_003E9F24;
extern int D_003E9F28;
extern int D_003E9F2C;
extern int D_005F0978[];
extern int D_005F097C[];

int Pes6Job_SendMessage(int id, int arg1, int mode) {
    int handle;
    int result;
    int i;
    int *p;

    if ((handle = func_00334470(*Pes6Job_GetManager(), id)) == 0) {
        return 0;
    }
    if (func_00359E90() != 0) {
        return 0;
    }
    if (mode != 2) {
        D_005F097C[0] = D_005F0978[0];
        i = 0;
        p = D_003E1818;
        do {
            if (id == *p) {
                return 0;
            }
            i++;
            p++;
        } while (i < 1);
        D_003E9F2C = 0;
        i = 0;
        p = D_003E1820;
        do {
            if (id == *p) {
                D_003E9F2C = 1;
                break;
            }
            i++;
            p++;
        } while (i < 4);
    }
    result = func_003327B0(handle, arg1);
    if (result != 0 && mode == 1) {
        if (D_003E9F2C == 0) {
            D_003E9F24 = 0;
        }
        D_003E9F28 = id;
    }
    if (result != 0) {
        D_003E9F1C = 1;
        Pes6Job_Create(0x43, func_00333420, 0x20, D_003E1D10);
    }
    return result;
}
