// This font was found at http://nothings.org/stb/font/
// According to their homepage, this source is public
// domain.

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF

typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;
#endif

#define STB_FONT_consolas_16_usascii_BITMAP_WIDTH         128
#define STB_FONT_consolas_16_usascii_BITMAP_HEIGHT         82
#define STB_FONT_consolas_16_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_16_usascii_FIRST_CHAR            32
#define STB_FONT_consolas_16_usascii_NUM_CHARS             95

#define STB_FONT_consolas_16_usascii_LINE_SPACING          11

static unsigned int stb__consolas_16_usascii_pixels[]={
    0x1300c4d3,0x114c0100,0x2aa63555,0x804c0002,0x4c400029,0x40000000,
    0x44f30000,0x405d83fe,0x26fd84f8,0xdd92eef9,0xdffc881f,0xb903e880,
    0xfd88be00,0x502dc5ff,0xd13e801f,0xfc8fc4df,0x1ea1e61d,0x4f880fe2,
    0x81e607d4,0xd71f40f9,0xffd88bd0,0x91aa00ff,0xf893e61d,0xe801f501,
    0x264ba993,0x1e65f931,0x00fd40fc,0x81e616e0,0x3a1320f9,0x3db03ee1,
    0x23e8015b,0x363dc2f8,0xe801f504,0x3a6b6793,0x41e6f900,0x75cbb02f,
    0x42dc3eee,0x443e6079,0x4791110f,0x03f3f83f,0x21ea0f98,0x203e61f9,
    0x776cc0fa,0xd1f9d53f,0x3cc7d405,0x44f702e8,0x2644e999,0x21f303cc,
    0x979fd95a,0x2bb607e6,0x2e26400f,0x1f42f886,0x39f307d4,0x645cc7f3,
    0x079b6405,0x01f301b9,0x982e893a,0x5e43e607,0x2e957b69,0x07ffb107,
    0x21ee0fc4,0x4c3541f8,0x20fa2f47,0x3bfd00f9,0x83fd81e6,0x3f69d02f,
    0x7cc0f304,0x27a995b0,0xfa80d94b,0xa86b80ef,0x1f80f987,0x7d0be3cc,
    0xe83735d0,0x0dc83cc3,0x49d02f88,0x207982e9,0x27b3d0f9,0x80d73b8f,
    0x2e85e8cb,0x83642f88,0x3f13cc5c,0x756dc3e8,0xf30b61fb,0x0fcc0ba0,
    0x4c2e44e8,0x4f43e607,0x263b79bd,0x2ecf200f,0x8afd81ea,0x01f102fb,
    0x98fe63f8,0x807b3c8f,0x2e05f079,0x0b713a07,0xe87cc0f3,0x46cedeb9,
    0x66cdc42f,0x201ec2fc,0x6c02effc,0x9ed83aa3,0x64fa3ee9,0x261f45d5,
    0x13a05f07,0x4c2dc4e8,0x96c3e607,0x2740a88a,0x0b7fff62,0x1f3001f1,
    0x0fdcf500,0x27b3dfd1,0x897fa25b,0x2f83cc5f,0x0fe00fb8,0x4c0f30d7,
    0x2600b70f,0x3201f02f,0x32fba005,0x1008ba02,0xf3010000,0x2f981f70,
    0xf883f70c,0x1f303cc1,0x500833e2,0x3206881f,0x33b22001,0x0000ea01,
    0x22798000,0xf83d83ff,0xdd903fff,0xec9777cc,0x3bfa60fe,0x000f203e,
    0x00000000,0x79800000,0x0cc0100c,0x84ccc080,0x13101998,0x7ffffc00,
    0x00005fff,0x00000000,0x00000300,0x00000000,0x99999980,0x00000099,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,
    0xaac80801,0xefeb84fe,0x260400ee,0x4002d40e,0x883deed9,0x0b76a009,
    0x04d81310,0xb907ffea,0xf701e600,0xfa9eed83,0x3f227ea2,0x87ffae01,
    0x09b2ec4f,0x3f99cf98,0x217fff62,0x902fbbfa,0x026c9fdf,0x802e41f8,
    0x20fd4079,0x4d9720ed,0x11fa817c,0xd8be27c8,0x8fa2f404,0xc89f30ec,
    0x43ae13a5,0x2009b2f9,0x2a02e41f,0x03eeefee,0x326b89b0,0x26403e66,
    0xb1ee5f10,0x9f42f809,0x2e3dc2f8,0x87f05f16,0x9fd59b5d,0x44b907e0,
    0x27ee623d,0x3ddd5099,0xf53644d8,0x1f409f9d,0x3626d760,0x3e22efbc,
    0x987a9f41,0x13f7e21f,0xbfec43e2,0x82fa9eed,0x5e8ae41f,0x26620f30,
    0x97a26c1f,0xe980aabd,0xa85eeefe,0x77ec1f9f,0x98be0fb9,0x5f10f73f,
    0x228a7f44,0x7ade98f9,0x7c2e41db,0x02f46e41,0xd83f00f3,0x3a1fc88d,
    0x54409aae,0xf02aadea,0x3f8db0dd,0x4ffa63b6,0xf11f887b,0x4cd73f99,
    0x36f53fbf,0x20fc35c4,0x3cc05eec,0x3ff60fc0,0x777dc1ef,0x007d04ff,
    0xe89b05f9,0x3a7bfa24,0x21f30f53,0x8977b67b,0x26dea1ef,0xb907e1ae,
    0x07cc01f9,0x409b07e0,0xe83dc2f8,0x9b06c803,0x4fa084e8,0xf73642f8,
    0x0fa17f44,0x0bb1369b,0x1db5c83f,0x40446740,0xf1026c1f,0x07d06c87,
    0x89b02fa8,0xfb1f404e,0x7cc5f715,0x5c4fea8b,0xbb1fb89f,0x4cc47ee1,
    0x74b909bf,0x9ffb500e,0x426fe662,0x77fe404d,0x207d01ef,0x13602ffb,
    0x643e809d,0xffa82eff,0x7dc2fbcf,0x3ffae1ef,0x3ffff21e,0x2f44b94f,
    0x3ffff200,0x3100114f,0x103e8013,0x4e89b003,0x00080440,0x00000400,
    0x00000000,0x00000000,0x00000000,0x31000000,0x18803333,0x10303530,
    0x40155303,0x266621a9,0x44351009,0x40261100,0x33333108,0x99999833,
    0x80333109,0x7fd409a9,0xffc887ff,0x3fbfa21f,0x7b83f10e,0x03ffbfa2,
    0x2edffff5,0x7cc6ffff,0x20b95fff,0x4fe0db2e,0xfffffffa,0x3fffffe0,
    0x07ffff96,0x547ffdf7,0xb01de806,0x1f89fc4d,0x041db3dc,0x90182fea,
    0x23067ccd,0x3ea5d05b,0x7cc07cc0,0x325f3000,0x4083f915,0xd701aa7c,
    0x89f44d80,0x07f3dc1f,0x9b2004f8,0x7c1ae05d,0x06c87f11,0x97a001f3,
    0x300be25c,0x4027aa1f,0xfa8198bd,0x3f10fc8b,0x40bf67b8,0x9b2000f9,
    0x2c5aa02f,0x0fa2ec3f,0x7dc007cc,0x01fa9720,0xdfff52e4,0xefefef85,
    0x107ffd40,0x3627b83f,0x953d43ef,0x7cdb2079,0x8fddaa01,0x7cc3ea0f,
    0x8801f300,0x7ee7642f,0x01dfd503,0x44f87f26,0x3efb625e,0x7b83f10e,
    0xf50efc98,0x6c836d4c,0xebcc05f3,0x3e20f8ce,0x07cc0d72,0x2fb217a0,
    0x36a6205e,0x3f8fe00f,0x7c4bb3dc,0x07b83f14,0x207cd3e2,0x3e2d906b,
    0x27e3e604,0x7d5d879f,0xf7007cc0,0x0fe2b901,0x47f02740,0x87f35c4e,
    0x0bb0be6c,0xb89f15d8,0x0374bb06,0x1efa99f1,0x9803e7ea,0x205f100f,
    0x7401ee5c,0x5076cc13,0xee8fe63f,0x4f6c9f31,0x13512fb8,0x67dc5f53,
    0x73556c89,0x4df7cc7f,0x7647be29,0x406ef886,0x33db00f9,0xf8972333,
    0x21f93043,0xb80cfffc,0x7ec43fff,0x7fec44ff,0x3fffe23f,0xfffea83e,
    0x307fff54,0x3fc7dffd,0x0ff60df3,0xff101f30,0x172fffff,0xdfffd8f9,
    0x00800441,0x0c008008,0x00000100,0x00000000,0x00220000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x804c0000,0x10333108,0x40983103,0x83102608,0x01102201,0x26620262,
    0x22060999,0x26666661,0x13333310,0x82666662,0x03f20199,0x3fff65f1,
    0xdb0fe24f,0x45aa0ff8,0xf89fe25f,0x17cc9b01,0xffc84fd8,0x83f13fff,
    0xfffff17b,0x3fffeadf,0xfffff52f,0x3bfffe25,0x9b627c42,0x5c9f514d,
    0xff83f30f,0x87fcdaa3,0x407e27ea,0x2209d14d,0x03e607df,0x407b83f1,
    0x3d40f54d,0x3ee23f10,0x1f987dc2,0x5e8db136,0x54f9f09d,0x2f67bd36,
    0xa6c07e27,0x3e7aa05d,0xf881f301,0x1f303dc1,0x207a81ea,0x7436c1f8,
    0x6c4d8bb5,0x407efcc6,0x26d53f9f,0x0f8f8eae,0x333603f1,0x2753600e,
    0x0fc40f98,0x2a4d81ee,0xf881ea07,0x5fd43d41,0x7f526c0f,0x27e05f90,
    0x7daad56b,0x3f10f8cd,0x8803fb60,0x3e60d91f,0x77777c40,0x541f307e,
    0xf50eeeef,0x3e21dddd,0x7ec07cc1,0x3ffefd84,0x27e0bfd0,0x2d56aaf8,
    0xf10f89fc,0x813b7603,0x2607e67a,0x5567c40f,0xa8bb07da,0x3ea2aaaf,
    0x07e21999,0x01f501f5,0x320135bb,0x91f82faf,0x1cdaed5d,0x6c07e23f,
    0x5db02f9c,0x1f309f55,0x43dc1f88,0x503d41f9,0x360fc40f,0x9b01f307,
    0x1f92f980,0x2dbf11f8,0x3e23f05b,0x07ee9b01,0xddddddf1,0x1f881f30,
    0x542ec3dc,0xf881ea07,0x7cc17e21,0x2f404d80,0x321f89f1,0x47e0b76f,
    0xb0999af8,0x0f5076c9,0x3ee623f3,0xb83f1099,0x3d40fcc7,0x13333f50,
    0x3bf26be2,0x9b01f300,0x3ee0fdc0,0x96f987e1,0x7fc4be0b,0x449b5fff,
    0x9fc1765e,0x13fffffc,0x2ec7b83f,0x3fea07a8,0xfff12fff,0x0000017d,
    0x00000000,0x00000000,0x00000000,0x88130000,0x054c0099,0x4c400a98,
    0x4103f700,0x0a200281,0x2a0bbfaa,0xfec85ffd,0xd983f71d,0x3ff622ef,
    0x3fa6042e,0x277ffec3,0x98ffbba2,0x3603fffe,0xa87fb04f,0x0de88f16,
    0x3ee2f440,0x3e62fb9a,0x5774299a,0x4c7fb1b9,0x731fb9af,0x3ee3f933,
    0xd87f9fb1,0x25d87ea4,0x7e4751f9,0x104eea80,0x21a6b505,0x9f300ed8,
    0x2a6c87f0,0x201f500f,0x17626c28,0x261f53f8,0x7c4d87f0,0x04e83f13,
    0xdaf883f1,0x9dd91004,0x3f9039fb,0x0f882fb8,0x39fd13d4,0x6fc005c8,
    0x2a26eccc,0x01f53fcc,0x3ea4d87f,0x05c83f11,0x9b5d81f3,0x2b76a200,
    0x5f700add,0x07cc07f2,0x97f6a1ea,0x66fc005c,0x59f33ccc,0x7c1227d5,
    0x17f77ec3,0x82f4c37a,0x4d87d45d,0x325b0510,0x4437a204,0x42f880de,
    0x4cbe606c,0x0bd0600f,0x200fa26c,0x6556ec3f,0x3bff622f,0x740fc84e,
    0x1fe41362,0xf981e4ba,0xc80ed884,0x84c5f51e,0x2b7e1fa8,0x5c7f9098,
    0x57a110bf,0x3f803fd8,0xb01b626c,0x7dc1fb87,0x40adeaaa,0xddfd74f9,
    0x03fb8ddf,0x3f220fe4,0x7ffdc2ff,0x7ff5cc3f,0xffb85f91,0x7fff32ff,
    0xd87f007b,0x1f3036c4,0x775c0fe4,0x441effee,0xf33f313f,0x800f4435,
    0x1100206b,0x08802000,0x26620010,0x33bb09cf,0x654c45f7,0x266bee3f,
    0x2e136009,0x01f3c46e,0x00000000,0x00000000,0xafffffe4,0x642dfffd,
    0x7ff41def,0x13606fff,0x3c5e60b2,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x001e43c8,0xca93226c,0x2b20ced8,
    0x2f262efb,0x2003faaf,0x3a65b03b,0xddd72d40,0x202983dd,0x99982081,
    0x36040999,0x03cc2744,0xa87ea5f5,0x364e9bee,0xd30fb9de,0x10d5bd7b,
    0x8be0b70f,0x3312ec3f,0x2fd81f93,0xeafc2fc8,0x9fffffd5,0xe89b2ec4,
    0x7e407984,0x717d43f9,0x4cfe36cd,0x0f89f98f,0x6a85da55,0x6c83e2b3,
    0x17cc07e2,0x2ba227d4,0x004ea746,0x4e89b4c8,0x5fe80798,0x9b0c47a8,
    0x5e6f34e8,0xddbb10f8,0x57e5e619,0x6b8fc479,0x3e209d10,0x3a3d96c2,
    0x2eeee9b4,0x226c02bb,0xdfddd34e,0x09fb01dd,0x744d80f5,0x7c5e6f34,
    0x8833f620,0x86adce8f,0x17607d4d,0x89a62f5c,0x64ae570f,0x403ccccc,
    0x5453a25d,0xb82abfca,0x03d42faf,0x5e69d136,0x3aa1f179,0x2fe1eae9,
    0xfa85bf8e,0x80fb80f9,0x5c1c82c8,0xf5000003,0xf309fb13,0x0fb97cc0,
    0xe89b01ea,0x7c5e6f34,0x3a05a210,0x3e09db3e,0x99bf985e,0xd7000009,
    0x22885c1b,0xfb14eeed,0x0f309b7f,0x54dd13e2,0x53a26c07,0x03e2f379,
    0x5c7f2091,0xb05f903f,0x009fffff,0x1db7f300,0x54ffa1f1,0x40041aaa,
    0x00000048,0x00000000,0x00000000,0x27fe4b50,0x000005fb,0x00000000,
    0x00000000,0x00000000,0x000040c4,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__consolas_16_usascii_x[95]={ 0,3,2,0,0,0,0,3,2,2,1,0,1,2,
3,0,0,1,1,1,0,1,0,0,0,0,3,1,1,1,1,2,0,0,1,0,0,1,1,0,0,1,1,1,
1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,2,1,2,0,0,0,1,1,1,0,0,0,0,1,1,
1,1,1,0,1,0,1,0,1,1,0,1,0,0,0,0,1,1,3,1,0, };
static signed short stb__consolas_16_usascii_y[95]={ 11,-1,-1,0,-1,-1,0,-1,-1,-1,-1,2,8,6,
8,-1,0,0,0,0,0,0,0,0,0,0,3,3,2,4,2,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,13,-1,3,-1,3,-1,3,-1,3,-1,-1,
-1,-1,-1,3,3,3,3,3,3,3,0,3,3,3,3,3,3,-1,-2,-1,5, };
static unsigned short stb__consolas_16_usascii_w[95]={ 0,3,5,9,8,9,9,3,5,5,7,9,5,5,
3,8,9,7,7,7,9,7,8,8,8,8,3,5,7,7,7,6,9,9,7,8,9,7,7,8,8,7,6,8,
7,9,8,9,7,9,8,8,9,8,9,9,9,9,8,5,7,5,8,9,6,7,7,7,8,8,9,9,7,7,
6,8,7,9,7,9,7,8,8,7,8,7,9,9,9,9,7,7,3,7,9, };
static unsigned short stb__consolas_16_usascii_h[95]={ 0,13,5,11,14,13,12,5,16,16,8,9,6,2,
4,14,12,11,11,12,11,12,12,11,12,11,9,11,10,5,10,13,16,11,11,12,11,11,11,12,11,11,12,11,
11,11,11,12,11,14,11,12,11,12,11,11,11,11,11,16,14,16,6,2,5,9,13,9,13,9,12,12,12,12,
16,12,12,8,8,9,12,12,8,9,12,9,8,8,8,12,8,16,17,16,4, };
static unsigned short stb__consolas_16_usascii_s[95]={ 98,98,107,50,62,111,108,123,56,13,56,
9,92,121,117,71,118,1,26,1,34,9,17,92,26,17,102,44,68,113,60,
121,46,65,9,69,117,109,101,53,83,75,62,56,48,38,29,98,11,80,117,
44,98,35,88,78,19,1,108,34,90,40,98,62,121,115,1,94,102,106,61,
51,81,35,19,17,9,46,38,76,43,89,29,86,26,1,74,64,19,71,84,
26,1,5,107, };
static unsigned short stb__consolas_16_usascii_t[95]={ 15,1,70,58,1,1,19,58,1,1,70,
70,70,76,76,1,19,58,58,33,58,32,32,46,32,58,58,58,58,70,58,
1,1,46,58,32,46,46,46,32,46,46,32,46,46,46,46,19,46,1,32,
32,32,32,32,32,46,46,32,1,1,1,70,16,70,58,19,58,1,58,19,
19,19,19,1,19,19,70,70,58,19,19,70,58,19,70,70,70,70,19,70,
1,1,1,76, };
static unsigned short stb__consolas_16_usascii_a[95]={ 141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_16_usascii_BITMAP_HEIGHT or STB_FONT_consolas_16_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_16_usascii(stb_fontchar font[STB_FONT_consolas_16_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_16_usascii_BITMAP_HEIGHT][STB_FONT_consolas_16_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_16_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_16_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_16_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_16_usascii_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_consolas_16_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_16_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_16_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_16_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_16_usascii_s[i] + stb__consolas_16_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_16_usascii_t[i] + stb__consolas_16_usascii_h[i]) * recip_height;
            font[i].x0 = stb__consolas_16_usascii_x[i];
            font[i].y0 = stb__consolas_16_usascii_y[i];
            font[i].x1 = stb__consolas_16_usascii_x[i] + stb__consolas_16_usascii_w[i];
            font[i].y1 = stb__consolas_16_usascii_y[i] + stb__consolas_16_usascii_h[i];
            font[i].advance_int = (stb__consolas_16_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_16_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_16_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_16_usascii_s[i] + stb__consolas_16_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_16_usascii_t[i] + stb__consolas_16_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_16_usascii_x[i] - 0.5f;
            font[i].y0f = stb__consolas_16_usascii_y[i] - 0.5f;
            font[i].x1f = stb__consolas_16_usascii_x[i] + stb__consolas_16_usascii_w[i] + 0.5f;
            font[i].y1f = stb__consolas_16_usascii_y[i] + stb__consolas_16_usascii_h[i] + 0.5f;
            font[i].advance = stb__consolas_16_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_16_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_16_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_16_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_16_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_16_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_16_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_16_usascii_LINE_SPACING

#endif
