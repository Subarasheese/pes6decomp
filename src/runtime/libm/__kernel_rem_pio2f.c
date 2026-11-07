/* compiler: ee-gcc-2.96 */
/* C runtime code (newlib libm); source adapted from re4 (src/lib/fdlibm/kf_rem_pio2.c). */
typedef unsigned int __uint32_t;
typedef int __int32_t;
extern double sqrt (double);
extern double pow (double, double);
extern double log (double);
extern double log10 (double);
extern double atan2 (double, double);
extern double fmod (double, double);
extern int __ieee754_rem_pio2 (double, double *);
extern double atan (double);
extern double fabs (double);
extern double floor (double);
extern double scalbn (double, int);
extern double copysign (double, double);
extern double cos (double);
extern double tan (double);
extern double __kernel_sin (double, double, int);
extern double __kernel_cos (double, double);
extern double __kernel_tan (double, double, int);
extern int __kernel_rem_pio2 (double *, double *, int, int, int, const __int32_t *);
extern float sqrtf (float);
extern float powf (float, float);
extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern __int32_t __ieee754_rem_pio2f (float, float *);
extern float atanf (float);
extern float fabsf (float);
extern float func_0011D238 (float);
extern float func_0011D3A0 (float, int);
extern float copysignf (float, float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float __kernel_sinf (float, float, int);
extern float __kernel_cosf (float, float);
extern float __kernel_tanf (float, float, int);
extern int __kernel_rem_pio2f (float *, float *, int, int, int, const __int32_t *);
typedef union {
    double value;
    struct {
        __uint32_t msw;
        __uint32_t lsw;
    } parts;
} ieee_double_shape_type;
typedef union {
    float value;
    __uint32_t word;
} ieee_float_shape_type;
extern const int D_003C4F60[];   /* init_jk: {4, 7, 9} */
extern const float D_003C4F70[]; /* PIo2: pi/2 in 8-bit pieces */
#define zero ((float)0.0)
#define one ((float)1.0)
#define two8 ((float)2.5600000000e+02)
#define twon8 ((float)3.9062500000e-03)
        int __kernel_rem_pio2f(float *x, float *y, int e0, int nx, int prec, const __int32_t *ipio2)
{
        __int32_t jz,jx,jv,jp,jk,carry,n,iq[20],i,j,k,m,q0,ih;
        float z,fw,f[20],fq[20],q[20];
        jk = D_003C4F60[prec];
        jp = jk;
        jx = nx-1;
        jv = (e0-3)/8; if(jv<0) jv=0;
        q0 = e0-8*(jv+1);
        j = jv-jx; m = jx+jk;
        for(i=0;i<=m;i++,j++) f[i] = (j<0)? zero : (float) ipio2[j];
        for (i=0;i<=jk;i++) {
            for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j]; q[i] = fw;
        }
        jz = jk;
recompute:
        for(i=0,j=jz,z=q[jz];j>0;i++,j--) {
            fw = (float)((__int32_t)(twon8* z));
            iq[i] = (__int32_t)(z-two8*fw);
            z = q[j-1]+fw;
        }
        z = func_0011D3A0(z,(int)q0);
        z -= (float)8.0*func_0011D238(z*(float)0.125);
        n = (__int32_t) z;
        z -= (float)n;
        ih = 0;
        if(q0>0) {
            i = (iq[jz-1]>>(8-q0)); n += i;
            iq[jz-1] -= i<<(8-q0);
            ih = iq[jz-1]>>(7-q0);
        }
        else if(q0==0) ih = iq[jz-1]>>8;
        else if(z>=(float)0.5) ih=2;
        if(ih>0) {
            n += 1; carry = 0;
            for(i=0;i<jz ;i++) {
                j = iq[i];
                if(carry==0) {
                    if(j!=0) {
                        carry = 1; iq[i] = 0x100- j;
                    }
                } else iq[i] = 0xff - j;
            }
            if(q0>0) {
                switch(q0) {
                case 1:
                   iq[jz-1] &= 0x7f; break;
                case 2:
                   iq[jz-1] &= 0x3f; break;
                }
            }
            if(ih==2) {
                z = one - z;
                if(carry!=0) z -= func_0011D3A0(one,(int)q0);
            }
        }
        if(z==zero) {
            j = 0;
            for (i=jz-1;i>=jk;i--) j |= iq[i];
            if(j==0) {
                for(k=1;iq[jk-k]==0;k++);
                for(i=jz+1;i<=jz+k;i++) {
                    f[jx+i] = (float) ipio2[jv+i];
                    for(j=0,fw=0.0;j<=jx;j++) fw += x[j]*f[jx+i-j];
                    q[i] = fw;
                }
                jz += k;
                goto recompute;
            }
        }
        if(z==(float)0.0) {
            jz -= 1; q0 -= 8;
            while(iq[jz]==0) { jz--; q0-=8;}
        } else {
            z = func_0011D3A0(z,-(int)q0);
            if(z>=two8) {
                fw = (float)((__int32_t)(twon8*z));
                iq[jz] = (__int32_t)(z-two8*fw);
                jz += 1; q0 += 8;
                iq[jz] = (__int32_t) fw;
            } else iq[jz] = (__int32_t) z ;
        }
        fw = func_0011D3A0(one,(int)q0);
        for(i=jz;i>=0;i--) {
            q[i] = fw*(float)iq[i]; fw*=twon8;
        }
        for(i=jz;i>=0;i--) {
            for(fw=0.0,k=0;k<=jp&&k<=jz-i;k++) fw += D_003C4F70[k]*q[i+k];
            fq[jz-i] = fw;
        }
        switch(prec) {
            case 0:
                fw = 0.0;
                for (i=jz;i>=0;i--) fw += fq[i];
                y[0] = (ih==0)? fw: -fw;
                break;
            case 1:
            case 2:
                fw = 0.0;
                for (i=jz;i>=0;i--) fw += fq[i];
                y[0] = (ih==0)? fw: -fw;
                fw = fq[0]-fw;
                for (i=1;i<=jz;i++) fw += fq[i];
                y[1] = (ih==0)? fw: -fw;
                break;
            case 3:
                for (i=jz;i>0;i--) {
                    fw = fq[i-1]+fq[i];
                    fq[i] += fq[i-1]-fw;
                    fq[i-1] = fw;
                }
                for (i=jz;i>1;i--) {
                    fw = fq[i-1]+fq[i];
                    fq[i] += fq[i-1]-fw;
                    fq[i-1] = fw;
                }
                for (fw=0.0,i=jz;i>=2;i--) fw += fq[i];
                if(ih==0) {
                    y[0] = fq[0]; y[1] = fq[1]; y[2] = fw;
                } else {
                    y[0] = -fq[0]; y[1] = -fq[1]; y[2] = -fw;
                }
        }
        return n&7;
}
