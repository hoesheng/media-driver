/*
* Copyright (c) 2024, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     decode_vp9_pipeline_adapter_xe2_hpm.h
//! \brief    Defines the interface to adapt to vp9 decode pipeline
//!

#ifndef __DECODE_VP9_PIPELINE_ADAPTER_XE2_HPM_H__
#define __DECODE_VP9_PIPELINE_ADAPTER_XE2_HPM_H__

#include "codechal_common.h"
#include "decode_vp9_pipeline_xe2_hpm.h"
#include "decode_pipeline_adapter.h"

class DecodeVp9PipelineAdapterXe2_Hpm : public DecodePipelineAdapter
{
public:
    DecodeVp9PipelineAdapterXe2_Hpm(
        CodechalHwInterfaceNext *   hwInterface,
        CodechalDebugInterface *debugInterface);

    virtual ~DecodeVp9PipelineAdapterXe2_Hpm() {}

    virtual MOS_STATUS BeginFrame() override;

    virtual MOS_STATUS EndFrame() override;

    virtual MOS_STATUS Allocate(CodechalSetting *codecHalSettings) override;

    virtual MOS_STATUS Execute(void *params) override;

    virtual MOS_STATUS GetStatusReport(void *status, uint16_t numStatus) override;

    virtual uint32_t GetCompletedReport() override;

    virtual bool IsIncompletePicture() override;

    virtual bool IsIncompleteJpegScan() override
    {
        return false;  // Just return false since this is for JPEG decode only.
    }

    virtual MOS_SURFACE *GetDummyReference() override;

    virtual CODECHAL_DUMMY_REFERENCE_STATUS GetDummyReferenceStatus() override;

    virtual void SetDummyReferenceStatus(CODECHAL_DUMMY_REFERENCE_STATUS status) override;

    virtual void Destroy() override;

    virtual MOS_GPU_CONTEXT GetDecodeContext() override;
    virtual GPU_CONTEXT_HANDLE GetDecodeContextHandle() override;

#ifdef _DECODE_PROCESSING_SUPPORTED
    virtual bool IsDownSamplingSupported() override;
#endif

protected:
    std::shared_ptr<decode::Vp9PipelineXe2_Hpm> m_decoder;

MEDIA_CLASS_DEFINE_END(DecodeVp9PipelineAdapterXe2_Hpm)
};
#endif // !__DECODE_VP9_PIPELINE_ADAPTER_XE2_HPM_H__
