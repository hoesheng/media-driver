/*
* Copyright (c) 2023, Intel Corporation
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
//! \file     decode_avc_feature_manager_xe3_lpm_base.h
//! \brief    Defines the common interface for avc decode feature manager for Xe3_LPM+
//! \details  The avc decode feature manager is further sub-divided by codec type
//!           this file is for the base interface which is shared by all components.
//!

#ifndef __DECODE_AVC_FEATURE_MANAGER_XE3_LPM_BASE_H__
#define __DECODE_AVC_FEATURE_MANAGER_XE3_LPM_BASE_H__

#include <vector>
#include "decode_avc_feature_manager.h"

namespace decode
{
class DecodeAvcFeatureManagerXe3_Lpm_Base : public DecodeAvcFeatureManager
{
public:
    //!
    //! \brief  DecodeAvcFeatureManagerXe3_Lpm_Base constructor
    //! \param  [in] allocator
    //!         Pointer to EncodeAllocator
    //! \param  [in] hwInterface
    //!         Pointer to CodechalHwInterface
    //! \param  [in] trackedBuf
    //!         Pointer to TrackedBuffer
    //! \param  [in] recycleBuf
    //!         Pointer to RecycleResource
    //!
    DecodeAvcFeatureManagerXe3_Lpm_Base(DecodeAllocator *allocator, void *hwInterface, PMOS_INTERFACE osInterface)
        : DecodeAvcFeatureManager(allocator, hwInterface, osInterface)
    {
    }

    //!
    //! \brief  DecodeAvcFeatureManagerXe3_Lpm_Base deconstructor
    //!
    virtual ~DecodeAvcFeatureManagerXe3_Lpm_Base() {}

protected:
    //!
    //! \brief  Create features
    //! \param  [in] codecSettings
    //!         codec settings
    //! \return MOS_STATUS
    //!         MOS_STATUS_SUCCESS if success, else fail reason
    //!
    virtual MOS_STATUS CreateFeatures(void *codecSettings) override;

MEDIA_CLASS_DEFINE_END(decode__DecodeAvcFeatureManagerXe3_Lpm_Base)
};

}
#endif // !__DECODE_AVC_FEATURE_MANAGER_XE3_LPM_BASE_H__
