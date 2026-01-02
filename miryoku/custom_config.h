// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_KLUDGE_DOUBLETAPBOOT

#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define MIRYOKU_LAYER_EXTRA \
&ext_power EP_ON,          &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&ext_power EP_OFF,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&ext_power EP_TOG,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,                      U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define XXX &none
#define EPON &ext_power EP_ON
#define EPOFF &ext_power EP_OFF
#define EPTOG &ext_power EP_TOG

#define MIRYOKU_LAYERMAPPING_EXTRA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX K00,   K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX K10,   K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX K20,   K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
                K32  K33  K34       K35  K36  K37

#endif
