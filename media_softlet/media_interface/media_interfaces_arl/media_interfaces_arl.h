/*===================== begin_copyright_notice ==================================

# Copyright (c) 2023, Intel Corporation

# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
# OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
# ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
# OTHER DEALINGS IN THE SOFTWARE.

======================= end_copyright_notice ==================================*/
//!
//! \file     media_interfaces_arl.h
//! \brief    All interfaces used for ARL that require factory creation
//!

#ifndef __MEDIA_INTERFACES_ARL_H__
#define __MEDIA_INTERFACES_ARL_H__

#include "media_interfaces_mtl.h"
#include "media_interfaces_mhw_next.h"
#include "media_interfaces_codechal_next.h"
#include "media_interfaces_mcpy_next.h"
#include "media_interfaces_mmd_next.h"

#include "media_interfaces_vphal.h"
#include "media_interfaces_renderhal.h"
#include "media_interfaces_hwinfo_device.h"

#include "mhw_cp_interface.h"

#include "mhw_vdbox_mfx_impl_xe_lpm_plus.h"

#include "mhw_vdbox_avp_impl_xe_lpm_plus.h"

#include "mhw_vdbox_huc_impl_xe_lpm_plus.h"

#include "mhw_vdbox_hcp_impl_xe_lpm_plus.h"

#include "mhw_vdbox_vdenc_impl_xe_lpm_plus.h"

#include "media_mem_decompress_xe_lpm_plus_base.h"
#include "media_copy_xe_lpm_plus_base.h"
#include "mhw_state_heap_xe_hpg.h"
#include "codec_hw_xe_lpm_plus_base.h"

#ifdef _AVC_DECODE_SUPPORTED
#include "decode_avc_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _HEVC_DECODE_SUPPORTED
#include "decode_hevc_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _JPEG_DECODE_SUPPORTED
#include "decode_jpeg_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _MPEG2_DECODE_SUPPORTED
#include "decode_mpeg2_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _VP9_DECODE_SUPPORTED
#include "decode_vp9_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _VP8_DECODE_SUPPORTED
#include "decode_vp8_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _AV1_DECODE_SUPPORTED
#include "decode_av1_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _JPEG_ENCODE_SUPPORTED
#include "encode_jpeg_pipeline_adapter_xe_lpm_plus_base.h"
#endif

#ifdef _HEVC_ENCODE_VDENC_SUPPORTED
#include "encode_hevc_vdenc_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _AV1_ENCODE_VDENC_SUPPORTED
#include "encode_av1_vdenc_pipeline_adapter_xe_lpm_plus.h"
#endif

#ifdef _AVC_ENCODE_VDENC_SUPPORTED
#include "encode_avc_vdenc_pipeline_adapter_xe_lpm_plus_base.h"
#endif

#ifdef _VP9_ENCODE_VDENC_SUPPORTED
#include "encode_vp9_vdenc_pipeline_adapter_xe_lpm_plus.h"
#endif

#include "renderhal_xe_hpg_next.h"


#include "decode_scalability_singlepipe_next.h"
#include "decode_scalability_multipipe_next.h"

class MediaInterfacesHwInfoDeviceXe_Lpm_Plus_Ext : public MediaInterfacesHwInfoDevice
{
public:
    virtual MOS_STATUS Initialize(PLATFORM platform) override;

    MEDIA_CLASS_DEFINE_END(MediaInterfacesHwInfoDeviceXe_Lpm_Plus_Ext)
};

#endif  // __MEDIA_INTERFACES_ARL_H__
