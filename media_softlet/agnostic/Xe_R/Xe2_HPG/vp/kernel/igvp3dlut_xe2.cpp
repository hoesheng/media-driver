/*
 * Copyright (c) 2024, Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

////////////////////////////////////////////////////////////////////////////////
// !!! WARNING - AUTO GENERATED FILE. DO NOT EDIT DIRECTLY. !!!
// Generated by KernelBinToSource.exe tool
////////////////////////////////////////////////////////////////////////////////

#if !defined(MEDIA_BIN_DLL)
#include "vp_platform_interface.h"
#include "vp_render_common.h"
#endif
#include "igvp3dlut_xe2.h"

#if defined(MEDIA_BIN_SUPPORT) && !defined(MEDIA_BIN_DLL)

unsigned int IGVP3DLUT_GENERATION_XE2_SIZE = 0;
unsigned int *IGVP3DLUT_GENERATION_XE2 = nullptr;
static bool getIGVP3DLUT_XE2 = LoadMediaBin(IGVP3DLUT_GENERATION_XE2_NAME, &IGVP3DLUT_GENERATION_XE2_SIZE, &IGVP3DLUT_GENERATION_XE2);

#endif  // defined(MEDIA_BIN_SUPPORT) && !defined(MEDIA_BIN_DLL)

#if !defined(MEDIA_BIN_DLL)
void AddVpNativeKernelEntryToList3dlutXe2(vp::VpPlatformInterface &vpPlatformInterface)
{
    vp::KRN_ARG FILLLUTTABLE_CURBE[] =
    {
        {LUT_FILLLUTTABLE_IOLUTINDEX, 0, 0, 8, vp::ARG_KIND_SURFACE, false, vp::AddressingModeStateless},
        {LUT_FILLLUTTABLE_ICOEFINDEX, 8, 0, 8, vp::ARG_KIND_SURFACE, false, vp::AddressingModeStateless},
        {LUT_FILLLUTTABLE_LUTSIZE, 16, 0, 4, vp::ARG_KIND_GENERAL, false},
        {LUT_FILLLUTTABLE_MULSIZE, 20, 0, 4, vp::ARG_KIND_GENERAL, false},
        {LUT_FILLLUTTABLE_PRIVATE_BASE_STATELESS, 24, 0, 8, vp::ARG_KIND_GENERAL, false},
        {LUT_FILLLUTTABLE_GLOBAL_ID_OFFSET, 0, 0, 12, vp::ARG_KIND_INLINE, false},
        {LUT_FILLLUTTABLE_LOCAL_SIZE, 12, 0, 12, vp::ARG_KIND_INLINE, false},
    };

    vp::KRN_EXECUTE_ENV FILLLUTTABLE_PARAM =
    {
        0,      //barrier_count
        true,   //disable_mid_thread_preemption
        128,    //grf_count
        false,  //has_global_atomics
        true,   //has_no_stateless_write
        32,     //inline_data_payload_size
        192,    //offset_to_skip_per_thread_data_load
        32,     //simd_size
        true,   //subgroup_independent_forward_progress
        8,      //eu_thread_count
        false,  //has_fence_for_image_access
        false,  //has_sample
        true,   //has_4gb_buffers
        { 0, 1, 2 },    //work_group_walk_order_dimensions
        0       //private_size
    };

    vp::KRN_BTI* FILLLUTTABLE_BTI = nullptr;

    vpPlatformInterface.InitVpDelayedNativeAdvKernel((uint32_t *)((uint8_t *)IGVP3DLUT_GENERATION_XE2 + 0), 6848, FILLLUTTABLE_CURBE, 7, 32, FILLLUTTABLE_PARAM, FILLLUTTABLE_BTI, 0, "fillLutTable_3dlut");

}
#endif

#if !defined(MEDIA_BIN_SUPPORT) || defined(MEDIA_BIN_DLL)
DEFINE_SHARED_ARRAY_SIZE_UINT32(IGVP3DLUT_GENERATION_XE2_SIZE, 6848);
extern const unsigned int IGVP3DLUT_GENERATION_XE2[] =
{
    0x80100061, 0x7f054220, 0x00000000, 0x00000000, 0x80000065, 0x7f258220, 0x02000004, 0xffffffc0, 
    0x80000065, 0x7f058110, 0x01000024, 0x00ff00ff, 0x80001a40, 0x7f258220, 0x02007f24, 0x00000020, 
    0x80001940, 0x7f258220, 0x02007f24, 0x00000000, 0x8000195b, 0x7f048220, 0x01017f24, 0x00c07f04, 
    0x800c0061, 0x04050220, 0x00100104, 0x00000000, 0x80012031, 0x01140000, 0xfa007f8f, 0xf6780003, 
    0x8000c131, 0x030c0800, 0xfa007f8f, 0xf6740003, 0x00000001, 0x00014200, 0x20000000, 0x00000003, 
    0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 
    0x80000065, 0x7f058220, 0x02000004, 0xffffffc0, 0x80001940, 0x7f058220, 0x02007f04, 0x00000000, 
    0x80032231, 0x050c0000, 0xfa007f8f, 0xf6700003, 0x00000001, 0x00014200, 0x20000000, 0x00000004, 
    0x2c240061, 0x00100043, 0x80000966, 0x80018220, 0x02008000, 0x400004c0, 0x00172061, 0x44050160, 
    0x00100104, 0x00000000, 0x00952270, 0x00010660, 0x56104404, 0x00000544, 0x1494002e, 0x0000c000, 
    0x000018d0, 0x000018d0, 0x80000041, 0x20010660, 0x01004314, 0x00000544, 0xac840053, 0x05814301, 
    0x68840040, 0xfff40548, 0xac841a40, 0x43f00102, 0x80541a70, 0x00010660, 0x16004314, 0x00004804, 
    0x80001a41, 0x20010660, 0x01000204, 0x00000554, 0xac848153, 0x05b00203, 0xaca01940, 0x44000346, 
    0x84400020, 0x00004000, 0x00000000, 0x00000210, 0x80140070, 0x00018660, 0x15004804, 0x00000000, 
    0x84000020, 0x00004000, 0x00000000, 0x000001b0, 0x6884006c, 0x01f04801, 0x80001952, 0x02048660, 
    0x06050104, 0xffff0544, 0xac841967, 0x01100203, 0x80000967, 0x80018220, 0x01008000, 0x00300030, 
    0x80000961, 0x070502a0, 0x00000304, 0x00000000, 0x78840061, 0xb4c0000f, 0x80001238, 0x0e050aa0, 
    0x10000704, 0x00000000, 0x80000061, 0x0a0542a0, 0x00000000, 0x00010000, 0x22f0095b, 0x0f0e0e10, 
    0x80000061, 0x08050a20, 0x00000704, 0x00000000, 0x80001261, 0x0b050a20, 0x00000a04, 0x00000000, 
    0x20841141, 0x10100a11, 0x80001a40, 0x09050660, 0x06000304, 0x02000804, 0x80001a40, 0x0c05a660, 
    0x06000b04, 0x00010000, 0x80001161, 0x12050a20, 0x00001104, 0x00000000, 0x80001b61, 0x071502a0, 
    0x00000904, 0x00000000, 0x80001a61, 0x0a1502a0, 0x00000c04, 0x00000000, 0x80001961, 0x140502a0, 
    0x00001204, 0x00000000, 0x8004115b, 0x150402a8, 0x028a0a04, 0x14040704, 0x20841140, 0x15401516, 
    0x20841141, 0x16101017, 0x80000967, 0x80018220, 0x01008000, 0x00300030, 0x80000961, 0x18050a20, 
    0x00001704, 0x00000000, 0xac841940, 0x12101819, 0x80001941, 0x20010660, 0x01001904, 0x00000304, 
    0xac840053, 0x0310191a, 0x80001940, 0x1b05a660, 0x06001a04, 0x00010000, 0x80801970, 0x1c050220, 
    0x42001b04, 0x00000304, 0x80001952, 0x1d040660, 0x06261904, 0x1c040104, 0xac841967, 0x01121d48, 
    0x80000020, 0x00004000, 0x00000000, 0x00000018, 0xf4840061, 0xfff20048, 0x80001941, 0x20010660, 
    0x01004314, 0x00004814, 0xac840053, 0x48414301, 0x80001961, 0x482506a0, 0x00000104, 0x00000000, 
    0x80000020, 0x00004000, 0x00000000, 0x00000020, 0x80000061, 0x48254aa0, 0x00000000, 0x477fff00, 
    0x80d40070, 0x00010660, 0x16004364, 0x00004804, 0x80001141, 0x48358aa0, 0x0a004824, 0x37800080, 
    0x84c00020, 0x00004000, 0x00000000, 0x00000220, 0x80940070, 0x00018660, 0x15004804, 0x00000000, 
    0x84800020, 0x00004000, 0x00000000, 0x000001b0, 0x6884006c, 0x01f04801, 0x80001952, 0x02048660, 
    0x06050104, 0xffff0544, 0xac841967, 0x01100203, 0x80000967, 0x80018220, 0x01008000, 0x00300030, 
    0x80000961, 0x070502a0, 0x00000304, 0x00000000, 0x78840061, 0xb4c0000f, 0x80001238, 0x0e050aa0, 
    0x10000704, 0x00000000, 0x80000061, 0x0a0542a0, 0x00000000, 0x00010000, 0x22f0095b, 0x0f0e0e10, 
    0x80000061, 0x08050a20, 0x00000704, 0x00000000, 0x80001261, 0x0b050a20, 0x00000a04, 0x00000000, 
    0x20841141, 0x10100a11, 0x80001a40, 0x09050660, 0x06000304, 0x02000804, 0x80001a40, 0x0c05a660, 
    0x06000b04, 0x00010000, 0x80001161, 0x12050a20, 0x00001104, 0x00000000, 0x80001b61, 0x071502a0, 
    0x00000904, 0x00000000, 0x80001a61, 0x0a1502a0, 0x00000c04, 0x00000000, 0x80001961, 0x140502a0, 
    0x00001204, 0x00000000, 0x8004115b, 0x150402a8, 0x028a0a04, 0x14040704, 0x20841140, 0x15401516, 
    0x20841141, 0x16101017, 0x80000967, 0x80018220, 0x01008000, 0x00300030, 0x80000961, 0x18050a20, 
    0x00001704, 0x00000000, 0xac841940, 0x12101819, 0x80001941, 0x20010660, 0x01001904, 0x00000304, 
    0xac840053, 0x0310191a, 0x80001940, 0x1b05a660, 0x06001a04, 0x00010000, 0x80401970, 0x1c050220, 
    0x42001b04, 0x00000304, 0x80001952, 0x1d040660, 0x06261904, 0x1c040104, 0xac841967, 0x011a1d48, 
    0x80000020, 0x00004000, 0x00000000, 0x00000018, 0xf4840061, 0xfffa0048, 0x80001941, 0x20010660, 
    0x01004364, 0x00004844, 0xac840053, 0x488c4301, 0x80000061, 0x48650660, 0x00004844, 0x00000000, 
    0x80001a61, 0x485506a0, 0x00000104, 0x00000000, 0x80000020, 0x00004000, 0x00000000, 0x00000200, 
    0x80540070, 0x00018660, 0x15004804, 0x00000000, 0x84400020, 0x00004000, 0x00000000, 0x000001b0, 
    0x6884116c, 0x01f04801, 0x80001952, 0x02048660, 0x06050104, 0xffff0544, 0xac841967, 0x01100203, 
    0x80000967, 0x80018220, 0x01008000, 0x00300030, 0x80000961, 0x070502a0, 0x00000304, 0x00000000, 
    0x78840061, 0xb4c0000f, 0x80001238, 0x0e050aa0, 0x10000704, 0x00000000, 0x80000061, 0x0a0542a0, 
    0x00000000, 0x00010000, 0x22f0095b, 0x0f0e0e10, 0x80000061, 0x08050a20, 0x00000704, 0x00000000, 
    0x80001261, 0x0b050a20, 0x00000a04, 0x00000000, 0x20841141, 0x10100a11, 0x80001a40, 0x09050660, 
    0x06000304, 0x02000804, 0x80001a40, 0x0c05a660, 0x06000b04, 0x00010000, 0x80001161, 0x12050a20, 
    0x00001104, 0x00000000, 0x80001b61, 0x071502a0, 0x00000904, 0x00000000, 0x80001a61, 0x0a1502a0, 
    0x00000c04, 0x00000000, 0x80001961, 0x140502a0, 0x00001204, 0x00000000, 0x8004115b, 0x150402a8, 
    0x028a0a04, 0x14040704, 0x20841140, 0x15401516, 0x20841141, 0x16101017, 0x80000967, 0x80018220, 
    0x01008000, 0x00300030, 0x80000961, 0x18050a20, 0x00001704, 0x00000000, 0xac841940, 0x12101819, 
    0x80001941, 0x20010660, 0x01001904, 0x00000304, 0xac840053, 0x0310191a, 0x80001940, 0x1b05a660, 
    0x06001a04, 0x00010000, 0xe8c41970, 0x03101b1c, 0x80001952, 0x1d040660, 0x06261904, 0x1c040104, 
    0x80001967, 0x48750660, 0x06001d04, 0x00000104, 0x80000020, 0x00004000, 0x00000000, 0x00000020, 
    0x80000061, 0x48754560, 0x00000000, 0xffffffff, 0x80001961, 0x48650660, 0x00004874, 0x00000000, 
    0x80000061, 0x48554aa0, 0x00000000, 0x477fff00, 0x80101941, 0x20010660, 0x01004864, 0x00204404, 
    0xac800053, 0x440c4802, 0x82100041, 0x20010660, 0x01004864, 0x00204504, 0xac880053, 0x450c4803, 
    0x00141961, 0x060506a0, 0x00100204, 0x00000000, 0x00141141, 0x08058aa0, 0x0a100604, 0x37800080, 
    0x00141138, 0x0d051aa0, 0x20100804, 0x00000000, 0x80000041, 0x01058aa0, 0x0a004854, 0x37800080, 
    0x80000038, 0x0a051aa0, 0x20004834, 0x00000000, 0x00142a41, 0x0d058aa0, 0x0a100d04, 0x3c4fcdac, 
    0x80001238, 0x0c051aa0, 0x20000104, 0x00000000, 0x80002a41, 0x0a058aa0, 0x0a000a04, 0x3c4fcdac, 
    0x80002941, 0x0c058aa0, 0x0a000c04, 0x3c4fcdac, 0x80001238, 0x0b050aa0, 0x30000a04, 0x00000000, 
    0x80000061, 0x12054aa0, 0x00000000, 0xc1958000, 0x80001238, 0x0b150aa0, 0x30000c04, 0x00000000, 
    0x80000061, 0x48854aa0, 0x00000000, 0x4196d000, 0x00140038, 0x0f050aa0, 0x30100d04, 0x00000000, 
    0x8004095b, 0x130402a0, 0x020a4884, 0x12040b04, 0x80000061, 0x3b050770, 0x00000524, 0x00000000, 
    0x80801165, 0x19058660, 0x16001304, 0x7f800000, 0x80034331, 0x3c0c0dc0, 0xfb003b0c, 0x00200000, 
    0xf89c295b, 0x0f124814, 0x78840061, 0x4f80001a, 0x80001970, 0x00018220, 0x42001904, 0x64000000, 
    0x00541265, 0x28058660, 0x16101404, 0x7f800000, 0x84801162, 0x1b058aa0, 0x0a001a04, 0x3f800000, 
    0x00140040, 0x20018aa0, 0x0a100f04, 0xbf560000, 0x94001262, 0x1c058aa0, 0x0a001b04, 0x2f800000, 
    0x00140970, 0x00018220, 0x42102804, 0x64000000, 0x00140062, 0x20018aa0, 0x4a102000, 0x00000000, 
    0x04540062, 0x22018aa0, 0x0a001a04, 0x3f800000, 0x14140062, 0x22018aa0, 0x0a102200, 0x2f800000, 
    0x60200041, 0x2200142a, 0x00141138, 0x2c050aa0, 0x10102a04, 0x00000000, 0x80c00065, 0x21058660, 
    0x16001314, 0x7f800000, 0x60202941, 0x20002c2e, 0x80801970, 0x00018220, 0x42002104, 0x64000000, 
    0x84c00062, 0x22058aa0, 0x0a001a04, 0x3f800000, 0x60201241, 0x22002e30, 0x94801262, 0x23058aa0, 
    0x0a002204, 0x2f800000, 0x80000040, 0x16158aa0, 0x0a000b14, 0xbf560000, 0x20841241, 0x23111324, 
    0x20840041, 0x1c10131d, 0x00140038, 0x34051aa0, 0x20103004, 0x00000000, 0x80000040, 0x16058aa0, 
    0x0a000b04, 0xbf560000, 0x80001338, 0x25050aa0, 0x10002404, 0x00000000, 0x30c40062, 0x00011618, 
    0x80001338, 0x1e050aa0, 0x10001d04, 0x00000000, 0x30c41262, 0x00001617, 0x20840a41, 0x18102526, 
    0x20840941, 0x17101e1f, 0x20841241, 0x23102627, 0x00140041, 0x34058aa0, 0x0a103404, 0x40c8e06b, 
    0x20841341, 0x1c101f20, 0x80001338, 0x33051aa0, 0x20002704, 0x00000000, 0x00141238, 0x49050aa0, 
    0x30103404, 0x00000000, 0x80002a41, 0x33058aa0, 0x0a003304, 0x40c8e06b, 0x80001238, 0x32051aa0, 
    0x20002004, 0x00000000, 0x78840061, 0x3e800038, 0x80001238, 0x48a50aa0, 0x30003304, 0x00000000, 
    0x80002a41, 0x32058aa0, 0x0a003204, 0x40c8e06b, 0x30842941, 0x3f274837, 0x80001238, 0x48950aa0, 
    0x30003204, 0x00000000, 0x78840061, 0x3e00003a, 0xa6f0095b, 0x38483739, 0x80148370, 0x00018660, 
    0x15003c04, 0x00000000, 0x209c115b, 0x493a394b, 0x94000020, 0x00004000, 0x00000000, 0x00000258, 
    0x80000061, 0x01050770, 0x00000524, 0x00000000, 0x80000061, 0x04054bb0, 0x3f1a36e2, 0xeb1c432d, 
    0x80032431, 0x020c0f80, 0xfb00010c, 0x00240000, 0x80000061, 0x14054220, 0x00000000, 0x3d00346e, 
    0x80000061, 0x19054220, 0x00000000, 0x40400000, 0x80000061, 0x13054220, 0x00000000, 0x40000000, 
    0x80000061, 0x21054220, 0x00000000, 0x3f333333, 0x80000061, 0x4d054220, 0x00000000, 0x3d00346e, 
    0x80008461, 0x06050ab0, 0x00000204, 0x00000000, 0x80000061, 0x03050ab0, 0x00000214, 0x00000000, 
    0xe0842241, 0x04100607, 0xe0842241, 0x041a0305, 0x80002261, 0x08060ba0, 0x00000704, 0x00000000, 
    0x80002161, 0x48c60ba0, 0x00000544, 0x00000000, 0x30841241, 0x42000809, 0x80d41270, 0x00010aa0, 
    0x6a000804, 0x000048c4, 0x28841244, 0x0010090a, 0x80000041, 0x1e058aa0, 0x0a0048c4, 0x3f733333, 
    0x30841241, 0x3d000a0b, 0x84c01162, 0x48d50aa0, 0x0a0048c4, 0x00000b04, 0x80001140, 0x0c058aa0, 
    0x0a0048d4, 0xbd00346e, 0x80001141, 0x0e058aa0, 0x0a000c04, 0x3e4ccccd, 0x22f0095b, 0x190e141a, 
    0x80000040, 0x0f058aa0, 0x0a000e04, 0x3d00346e, 0x30841241, 0x42001a1b, 0x30841241, 0x42000f10, 
    0x28841245, 0x00101b1c, 0x28841245, 0x00101011, 0x30841241, 0x3d001c1d, 0x22f01b5b, 0x130e1415, 
    0x84c01262, 0x4d550aa0, 0x0a0048c4, 0x00001d04, 0x30840041, 0x3d001112, 0x20cc1262, 0x4db01e1f, 
    0x30840041, 0x42001516, 0x84c01262, 0x4d450aa0, 0x0a0048c4, 0x00001f04, 0x84c00062, 0x4dd50aa0, 
    0x0a0048c4, 0x00001204, 0x80001240, 0x20058aa0, 0x0a004d44, 0xbd00346e, 0x28840045, 0x00101617, 
    0x22f00a5b, 0x21201422, 0x30841241, 0x3d001718, 0x80001262, 0x4dc50aa0, 0x5a002204, 0x00004dd4, 
    0x84c01262, 0x4d950aa0, 0x0a0048c4, 0x00001804, 0x80001240, 0x24050aa0, 0x0a004d44, 0x02004dc4, 
    0xeef0115b, 0x21244d25, 0x80001162, 0x4d850aa0, 0x5a002504, 0x00004d94, 0x80000020, 0x00004000, 
    0x00000000, 0x000000a0, 0x80000061, 0x4dd54220, 0x00000000, 0x3dc00000, 0x80001161, 0x4d954220, 
    0x00000000, 0x3e000000, 0x80000061, 0x4d554220, 0x00000000, 0x3e600000, 0x80000061, 0x48d54220, 
    0x00000000, 0x3ed00000, 0x80001e61, 0x4d054aa0, 0x00000000, 0x3f333333, 0x80000061, 0x4dc54aa0, 
    0x00000000, 0x3f666666, 0x80000061, 0x4d854aa0, 0x00000000, 0x3f733333, 0x80000061, 0x4d454aa0, 
    0x00000000, 0x3f7d70a4, 0x80000061, 0x48c54aa0, 0x00000000, 0x3f800000, 0x00540070, 0x00018aa0, 
    0x5a104b04, 0x00000000, 0x80000061, 0x48b54220, 0x00000000, 0x00000000, 0x0454002e, 0x0000c000, 
    0x00000450, 0x00000450, 0x00d41970, 0x00018aa0, 0x5a104b04, 0x3d00346e, 0x04d4002e, 0x0000c000, 
    0x000003f0, 0x000003f0, 0x00941970, 0x00010aa0, 0x5a104b04, 0x00004dd4, 0x0494002e, 0x0000c000, 
    0x00000300, 0x00000300, 0x00541970, 0x00010aa0, 0x5a104b04, 0x00004d94, 0x0454002e, 0x0000c000, 
    0x00000210, 0x00000210, 0x00d41970, 0x00010aa0, 0x5a104b04, 0x00004d54, 0x04d4002e, 0x0000c000, 
    0x00000120, 0x00000120, 0x00941970, 0x00010aa0, 0x5a104b04, 0x000048d4, 0x1494002e, 0x0000c000, 
    0x000000d8, 0x000000d8, 0x80000040, 0x01150aa0, 0x0a0048d4, 0x02004d54, 0x80000061, 0x03054220, 
    0x00000000, 0x4f800000, 0x80c01165, 0x02058660, 0x16000114, 0x7f800000, 0x80000040, 0x01050aa0, 
    0x0a0048c4, 0x02004d44, 0x00140040, 0x20010aa0, 0x0a104b04, 0x02004d54, 0x80401970, 0x00018220, 
    0x42000204, 0x64000000, 0x84c00062, 0x04058aa0, 0x0a000304, 0x3f800000, 0x94401162, 0x05458aa0, 
    0x0a000404, 0x2f800000, 0x20841141, 0x05810106, 0x80001138, 0x07050aa0, 0x10000604, 0x00000000, 
    0x20842941, 0x01100708, 0x20841141, 0x0580080a, 0x0014115b, 0x4e0402a0, 0x020a4d44, 0x0a042000, 
    0x0014002e, 0x0000c000, 0x00000308, 0x00000010, 0x0014002f, 0x00004000, 0x00000000, 0x00000028, 
    0x28a00061, 0x0018484e, 0x0014002e, 0x0000c000, 0x000002e0, 0x00000010, 0x0014002f, 0x00004000, 
    0x00000000, 0x000000d0, 0x80001d40, 0x02050aa0, 0x0a004d54, 0x02004d94, 0x80000061, 0x04054220, 
    0x00000000, 0x4f800000, 0x80801165, 0x03058660, 0x16000204, 0x7f800000, 0x80000040, 0x01050aa0, 
    0x0a004d44, 0x02004d84, 0x00140040, 0x20010aa0, 0x0a104b04, 0x02004d94, 0x80c01970, 0x00018220, 
    0x42000304, 0x64000000, 0x84800062, 0x05458aa0, 0x0a000404, 0x3f800000, 0x94c01162, 0x06058aa0, 
    0x0a000544, 0x2f800000, 0x20841141, 0x06100207, 0x80001138, 0x08050aa0, 0x10000704, 0x00000000, 
    0x20842941, 0x01100809, 0x20841141, 0x0610090a, 0xf95c115b, 0x200a4d4e, 0x0014002e, 0x0000c000, 
    0x00000210, 0x00000010, 0x0014002f, 0x00004000, 0x00000000, 0x000000d0, 0x80000040, 0x01150aa0, 
    0x0a004d94, 0x02004dd4, 0x80000061, 0x03054220, 0x00000000, 0x4f800000, 0x80401165, 0x02058660, 
    0x16000114, 0x7f800000, 0x80000040, 0x01050aa0, 0x0a004d84, 0x02004dc4, 0x00140040, 0x20010aa0, 
    0x0a104b04, 0x02004dd4, 0x80801970, 0x00018220, 0x42000204, 0x64000000, 0x84400062, 0x04058aa0, 
    0x0a000304, 0x3f800000, 0x94801162, 0x05458aa0, 0x0a000404, 0x2f800000, 0x20841141, 0x05810106, 
    0x80001138, 0x07050aa0, 0x10000604, 0x00000000, 0x20842941, 0x01100708, 0x20841141, 0x0580080a, 
    0xed5c115b, 0x200a4d4e, 0x0014002e, 0x0000c000, 0x00000140, 0x00000010, 0x0014002f, 0x00004000, 
    0x00000000, 0x000000d0, 0x80001b40, 0x02058aa0, 0x0a004dd4, 0xbd00346e, 0x80000061, 0x04054220, 
    0x00000000, 0x4f800000, 0x80c01165, 0x03058660, 0x16000204, 0x7f800000, 0x80000040, 0x01050aa0, 
    0x0a004dc4, 0x02004d04, 0x00140040, 0x20018aa0, 0x0a104b04, 0xbd00346e, 0x80401970, 0x00018220, 
    0x42000304, 0x64000000, 0x84c00062, 0x05458aa0, 0x0a000404, 0x3f800000, 0x94401162, 0x06058aa0, 
    0x0a000544, 0x2f800000, 0x20841141, 0x06100207, 0x80001138, 0x08050aa0, 0x10000704, 0x00000000, 
    0x20842941, 0x01100809, 0x20841141, 0x0610090a, 0x215c115b, 0x200a4d4e, 0x0014002e, 0x0000c000, 
    0x00000070, 0x00000010, 0x0014002f, 0x00004000, 0x00000000, 0x00000040, 0x80000041, 0x02058aa0, 
    0x0a004d04, 0x41ff974f, 0x0014115b, 0x4e0402a0, 0x020a48b4, 0x02044b04, 0x0014002e, 0x0000c000, 
    0x00000030, 0x00000010, 0x0014002f, 0x00004000, 0x00000000, 0x00000020, 0x0014005b, 0x4e0402a0, 
    0x020a48b4, 0x48b44b04, 0x0014002f, 0x00004000, 0x00000000, 0x00000700, 0x80000061, 0x01050770, 
    0x00000524, 0x00000000, 0x00541265, 0x02058660, 0x16104b04, 0x7f800000, 0x80034531, 0x060c0400, 
    0xfb00010c, 0x002c0000, 0x8000c631, 0x080c0500, 0xfb00010c, 0x00240000, 0x8000c731, 0x0a0c0600, 
    0xfb00010c, 0x002c0000, 0x8000c831, 0x0c0c0700, 0xfb00010c, 0x00200000, 0x80000061, 0x04054220, 
    0x00000000, 0x4f800000, 0x00d41a70, 0x00018220, 0x42100204, 0x64000000, 0x04541a62, 0x20018aa0, 
    0x0a000404, 0x3f800000, 0x14d40062, 0x20018aa0, 0x0a102000, 0x2f800000, 0x60200041, 0x20004b0d, 
    0x00141138, 0x0f050aa0, 0x10100d04, 0x00000000, 0x20202941, 0x4e000f11, 0x00941970, 0x00018aa0, 
    0x1a104b04, 0x00000000, 0x70201241, 0x20001120, 0x14940062, 0x20018aa0, 0x0a102000, 0x00000000, 
    0x70a00041, 0x20074822, 0x60a00041, 0x200f4813, 0x60200041, 0x20004915, 0x00140062, 0x22018aa0, 
    0x5a102200, 0x3f800000, 0x00141362, 0x20018aa0, 0x5a101304, 0x3f800000, 0x34208541, 0x06402219, 
    0x34208641, 0x0840221b, 0x6c208741, 0x0a502222, 0x219c135b, 0x2006191d, 0x219c135b, 0x20081b1f, 
    0x00140062, 0x17058aa0, 0x5a101504, 0x3f800000, 0x26a0005b, 0x200a2220, 0x0014125b, 0x500402ac, 
    0x020a1d04, 0x06241704, 0x0014005b, 0x520402ac, 0x020a1f04, 0x0a041704, 0x0014885b, 0x540402ac, 
    0x020a2000, 0x0c041704, 0x84000020, 0x00004000, 0x00000000, 0x00000178, 0x00141338, 0x01051aa0, 
    0x20105004, 0x00000000, 0x00141238, 0x06051aa0, 0x20105204, 0x00000000, 0x00142a41, 0x01058aa0, 
    0x0a100104, 0x3ed555c5, 0x00141238, 0x0b051aa0, 0x20105404, 0x00000000, 0x00142a41, 0x06058aa0, 
    0x0a100604, 0x3ed555c5, 0x00142941, 0x0b058aa0, 0x0a100b04, 0x3ed555c5, 0x00141338, 0x03050aa0, 
    0x30100104, 0x00000000, 0x80000061, 0x16054aa0, 0x00000000, 0x3f870a3d, 0x00141338, 0x09050aa0, 
    0x30100604, 0x00000000, 0x80000061, 0x17054aa0, 0x00000000, 0xbd6147ae, 0x00141338, 0x0d050aa0, 
    0x30100b04, 0x00000000, 0x00141970, 0x00018aa0, 0x5a105004, 0x3b4d20b0, 0x00d40070, 0x00018aa0, 
    0x5a105204, 0x3b4d20b0, 0x00940070, 0x00018aa0, 0x5a105404, 0x3b4d20b0, 0x00140041, 0x0f058aa0, 
    0x0a105004, 0x414eb852, 0x00140041, 0x11058aa0, 0x0a105204, 0x414eb852, 0x00140041, 0x13058aa0, 
    0x0a105404, 0x414eb852, 0x20a00b5b, 0x03161722, 0x209c295b, 0x0d161718, 0x20a0005b, 0x09161720, 
    0x04941262, 0x5a050aa0, 0x0a101304, 0x00101804, 0x04140062, 0x56050aa0, 0x0a100f04, 0x00102200, 
    0x04d40062, 0x58050aa0, 0x0a101104, 0x00102000, 0x80000020, 0x00004000, 0x00000000, 0x000002c8, 
    0x00140038, 0x01051aa0, 0x20105004, 0x00000000, 0x00142941, 0x01058aa0, 0x0a100104, 0x3e232000, 
    0x00141138, 0x06050aa0, 0x30100104, 0x00000000, 0x80000061, 0x11054aa0, 0x00000000, 0x41958000, 
    0x78840061, 0x3f800012, 0x00140038, 0x08051aa0, 0x20105204, 0x00000000, 0x209c095b, 0x06111213, 
    0x00141165, 0x1e058660, 0x16101304, 0x7f800000, 0x80000061, 0x19054aa0, 0x00000000, 0x3f560000, 
    0x78840061, 0x4f800020, 0x00541970, 0x00018220, 0x42101e04, 0x64000000, 0x28a0125b, 0x06481920, 
    0x00142941, 0x08058aa0, 0x0a100804, 0x3e232000, 0x04141362, 0x22018aa0, 0x0a002004, 0x3f800000, 
    0x14540062, 0x22018aa0, 0x0a102200, 0x2f800000, 0x00141338, 0x0a050aa0, 0x30100804, 0x00000000, 
    0x60200041, 0x22001321, 0x00141138, 0x23050aa0, 0x10102104, 0x00000000, 0x209c2a5b, 0x0a111215, 
    0x00140038, 0x0c051aa0, 0x20105404, 0x00000000, 0x00141165, 0x29058660, 0x16101504, 0x7f800000, 
    0x60202a41, 0x20002325, 0x00d41970, 0x00018220, 0x42102904, 0x64000000, 0x60201141, 0x22002527, 
    0x00142941, 0x0c058aa0, 0x0a100c04, 0x3e232000, 0x04140062, 0x20018aa0, 0x0a002004, 0x3f800000, 
    0x14d40062, 0x20018aa0, 0x0a102000, 0x2f800000, 0x00141338, 0x0e050aa0, 0x30100c04, 0x00000000, 
    0x60200041, 0x2000152b, 0x00141138, 0x2d050aa0, 0x10102b04, 0x00000000, 0x209c2a5b, 0x0e111217, 
    0x289c005b, 0x0a48191a, 0x00941265, 0x33058660, 0x16101704, 0x7f800000, 0x20200941, 0x1a002d2f, 
    0x00541970, 0x00018220, 0x42103304, 0x64000000, 0x60201141, 0x20002f31, 0x04940062, 0x20018aa0, 
    0x0a002004, 0x3f800000, 0x14540062, 0x20018aa0, 0x0a102000, 0x2f800000, 0x60200041, 0x20001735, 
    0x00141138, 0x37050aa0, 0x10103504, 0x00000000, 0x289c005b, 0x0e48191c, 0x20200941, 0x1c003739, 
    0x60201141, 0x2000393b, 0x00140038, 0x3d051aa0, 0x20102704, 0x00000000, 0x00140038, 0x3f051aa0, 
    0x20103104, 0x00000000, 0x00142a41, 0x3d058aa0, 0x0a103d04, 0x429db000, 0x00141238, 0x41051aa0, 
    0x20103b04, 0x00000000, 0x00142a41, 0x3f058aa0, 0x0a103f04, 0x429db000, 0x00142941, 0x41058aa0, 
    0x0a104104, 0x429db000, 0x00141338, 0x56050aa0, 0x30103d04, 0x00000000, 0x00141238, 0x58050aa0, 
    0x30103f04, 0x00000000, 0x00141138, 0x5a050aa0, 0x30104104, 0x00000000, 0x80000061, 0x02054aa0, 
    0x00000000, 0x477fff00, 0x78840061, 0x3f000003, 0xb4000061, 0x00104622, 0x209c095b, 0x58020308, 
    0x00141161, 0x0e050a60, 0x00100804, 0x00000000, 0x209c005b, 0x56020306, 0x00141962, 0x16058660, 
    0x45100e04, 0x00000000, 0x209c295b, 0x5a02030a, 0x00141261, 0x0c050a60, 0x00100604, 0x00000000, 
    0x00141a62, 0x18058220, 0x51101604, 0xffffffff, 0xb4080061, 0x00104726, 0x00141161, 0x10050a60, 
    0x00100a04, 0x00000000, 0x00141c62, 0x12058660, 0x45100c04, 0x00000000, 0x68201c69, 0x01001820, 
    0x00100069, 0x24058670, 0x05202204, 0x00030003, 0x02101d69, 0x28058670, 0x05202604, 0x00030003, 
    0x00141d62, 0x1a058660, 0x45101004, 0x00000000, 0x00141d62, 0x14058220, 0x51101204, 0xffffffff, 
    0x38001c40, 0x0510242a, 0x38081c40, 0x0510282c, 0x00141c62, 0x1e058220, 0x51101a04, 0xffffffff, 
    0xac201c66, 0x1400201c, 0x00172931, 0x00000000, 0xfb082a24, 0x00041c24, 0x00000001, 0x00014200, 
    0x20000000, 0x00000200, 0x0014002f, 0x00004000, 0x00000000, 0x00000010, 0x28100061, 0x0010437f, 
    0x80022031, 0x00000004, 0x30207f0c, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};
#endif // !defined(MEDIA_BIN_SUPPORT) || defined(MEDIA_BIN_DLL)