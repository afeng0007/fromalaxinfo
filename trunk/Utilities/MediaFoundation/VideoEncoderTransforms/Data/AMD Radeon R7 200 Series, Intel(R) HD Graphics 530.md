Test system with Skylake CPU

# System

 * Version: 10.0.10586, VER_SUITE_SINGLEUSERTS, VER_NT_WORKSTATION
 * Product: PRODUCT_PROFESSIONAL
 * Computer Name: `User-PC`
 * User Name: `User-PC\User` 
 * Local Time: `2/3/2016 3:04:56 PM`
 * Architecture: x86
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0xFFFEFFFF`
 * Physical Memory: `8,069` MB
 * Committed Memory Limit: `16,261` MB
 * Application Version: `1.0.0.39`

# Display Devices

 * AMD Radeon R7 200 Series
  * Instance: PCI\VEN_1002&DEV_6610&SUBSYS_22BF1458&REV_00\4&2DB3ECDA&0&0008
  * DEVPKEY_Device_Manufacturer: Advanced Micro Devices, Inc.
  * DEVPKEY_Device_DriverVersion: 15.201.1151.1008
 * Intel(R) HD Graphics 530
  * Instance: PCI\VEN_8086&DEV_1912&SUBSYS_D0001458&REV_06\3&11583659&0&10
  * DEVPKEY_Device_Manufacturer: Intel Corporation
  * DEVPKEY_Device_DriverVersion: 20.19.15.4331

# Category `MFT_CATEGORY_VIDEO_ENCODER`

NOTE: Detail is limited to H.264 video encoders.

## Intel® Quick Sync Video H.264 Encoder MFT

11 Attributes:

 * MFT_TRANSFORM_CLSID_Attribute: {4BE8D3C0-0515-4A37-AD55-E4BAE19AF471} (Type VT_CLSID)
 * MF_TRANSFORM_FLAGS_Attribute: MFT_ENUM_FLAG_HARDWARE
 * MFT_ENUM_HARDWARE_VENDOR_ID_Attribute: VEN_8086 (Type VT_LPWSTR)
 * MFT_ENUM_HARDWARE_URL_Attribute: AA243E5D-2F73-48c7-97F7-F6FA17651651 (Type VT_LPWSTR)
 * MFT_INPUT_TYPES_Attributes: {3231564E-3961-42AE-BA67-FF47CCC13EED}, MFVideoFormat_NV12, MFVideoFormat_ARGB32
 * MFT_OUTPUT_TYPES_Attributes: MFVideoFormat_H264, {5D0CE9DD-9817-49DA-BDFD-F5F5B98F18A6}
 * MFT_CODEC_MERIT_Attribute: 7 (Type VT_UI4)
 * MFT_SUPPORT_DYNAMIC_FORMAT_CHANGE: 1 (Type VT_UI4)
 * MF_TRANSFORM_ASYNC: 1 (Type VT_UI4)

### ICodecAPI

 * `CODECAPI_AVEncCommonRateControlMode`: VT_UI4 0, default VT_UI4 0, modifiable
 * `CODECAPI_AVEncCommonLowLatency`: VT_BOOL 0, default VT_BOOL 0, modifiable
 * `CODECAPI_AVEncCommonQuality`: minimal VT_UI4 0, maximal VT_UI4 100, step VT_UI4 1
 * `CODECAPI_AVEncCommonQualityVsSpeed`: VT_UI4 50, default VT_UI4 50, modifiable
 * `CODECAPI_AVEncCommonMeanBitRate`: VT_UI4 0, default VT_UI4 2222000, modifiable
 * `CODECAPI_AVEncCommonMaxBitRate`: default VT_UI4 0
 * `CODECAPI_AVEncCommonBufferSize`: VT_UI4 0, default VT_UI4 0, modifiable
 * `CODECAPI_AVEncH264CABACEnable`: modifiable
 * `CODECAPI_AVEncVideoEncodeQP`: 
 * `CODECAPI_AVEncVideoForceKeyFrame`: VT_UI4 0, default VT_UI4 0, modifiable
 * `CODECAPI_AVEncVideoSelectLayer`: VT_UI4 0, default VT_UI4 0, modifiable
 * `CODECAPI_AVEncVideoTemporalLayerCount`: default VT_UI4 1, minimal VT_UI4 1, maximal VT_UI4 3, step VT_UI4 1, modifiable
 * `CODECAPI_AVEncVideoEncodeFrameTypeQP`: default VT_UI8 111670853658, minimal VT_UI8 0, maximal VT_UI8 219046674483, step VT_UI8 1
 * `CODECAPI_AVEncVideoMaxNumRefFrame`: minimal VT_UI4 0, maximal VT_UI4 16, step VT_UI4 1, modifiable
 * `CODECAPI_AVEncVideoLTRBufferControl`: VT_UI4 65536, values { VT_UI4 65536, VT_UI4 65537, VT_UI4 65538, VT_UI4 65539, VT_UI4 65540, VT_UI4 65541, VT_UI4 65542, VT_UI4 65543, VT_UI4 65544, VT_UI4 65545, VT_UI4 65546, VT_UI4 65547, VT_UI4 65548, VT_UI4 65549, VT_UI4 65550, VT_UI4 65551, VT_UI4 65552 }, modifiable
 * `CODECAPI_AVEncVideoMarkLTRFrame`: 
 * `CODECAPI_AVEncVideoUseLTRFrame`: 
 * `CODECAPI_AVEncMPVGOPSize`: VT_UI4 128, default VT_UI4 128, modifiable
 * `CODECAPI_AVEncMPVDefaultBPictureCount`: VT_UI4 0, default VT_UI4 0, modifiable
 * `CODECAPI_AVEncMPVProfile`: modifiable
 * `CODECAPI_AVEncMPVLevel`: modifiable
 * `CODECAPI_AVLowLatencyMode`: VT_BOOL 0, default VT_BOOL 0, modifiable

## H264 Encoder MFT

6 Attributes:

 * MFT_TRANSFORM_CLSID_Attribute: {6CA50344-051A-4DED-9779-A43305165E35} (Type VT_CLSID)
 * MF_TRANSFORM_FLAGS_Attribute: MFT_ENUM_FLAG_SYNCMFT
 * MFT_INPUT_TYPES_Attributes: MFVideoFormat_IYUV, MFVideoFormat_YV12, MFVideoFormat_NV12, MFVideoFormat_YUY2
 * MFT_OUTPUT_TYPES_Attributes: MFVideoFormat_H264

### ICodecAPI

 * `CODECAPI_AVEncCommonRateControlMode`: VT_UI4 0
 * `CODECAPI_AVEncCommonQuality`: VT_UI4 65
 * `CODECAPI_AVEncCommonQualityVsSpeed`: VT_UI4 33
 * `CODECAPI_AVEncCommonMeanBitRate`: VT_UI4 500000
 * `CODECAPI_AVEncCommonMaxBitRate`: VT_UI4 0
 * `CODECAPI_AVEncCommonBufferSize`: VT_UI4 0
 * `CODECAPI_AVEncH264CABACEnable`: VT_BOOL 0
 * `CODECAPI_AVEncVideoContentType`: VT_UI4 0
 * `CODECAPI_AVEncNumWorkerThreads`: VT_UI4 0
 * `CODECAPI_AVEncVideoEncodeQP`: VT_UI8 26
 * `CODECAPI_AVEncVideoMinQP`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 51, step VT_UI4 1
 * `CODECAPI_AVEncVideoForceKeyFrame`: VT_UI4 0
 * `CODECAPI_AVEncH264SPSID`: VT_UI4 0
 * `CODECAPI_AVEncH264PPSID`: VT_UI4 0
 * `CODECAPI_AVEncAdaptiveMode`: VT_UI4 0
 * `CODECAPI_AVEncVideoSelectLayer`: VT_UI4 0
 * `CODECAPI_AVEncVideoTemporalLayerCount`: VT_UI4 1, minimal VT_UI4 1, maximal VT_UI4 3, step VT_UI4 1
 * `CODECAPI_AVEncVideoEncodeFrameTypeQP`: VT_UI8 18446744073709551615
 * `CODECAPI_AVEncSliceControlMode`: minimal VT_UI4 0, maximal VT_UI4 2, step VT_UI4 1
 * `CODECAPI_AVEncSliceControlSize`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 4294967295, step VT_UI4 1
 * `CODECAPI_AVEncVideoMaxNumRefFrame`: VT_UI4 2, minimal VT_UI4 1, maximal VT_UI4 7, step VT_UI4 1
 * `CODECAPI_AVEncVideoMeanAbsoluteDifference`: VT_UI4 0
 * `CODECAPI_AVEncVideoMaxQP`: VT_UI4 51, minimal VT_UI4 0, maximal VT_UI4 51, step VT_UI4 1
 * `CODECAPI_AVEncVideoLTRBufferControl`: VT_UI4 0, values { VT_UI4 65536, VT_UI4 65537, VT_UI4 65538, VT_UI4 65539, VT_UI4 65540, VT_UI4 65541 }
 * `CODECAPI_AVEncVideoMarkLTRFrame`: VT_UI4 0
 * `CODECAPI_AVEncVideoUseLTRFrame`: VT_UI4 0
 * `CODECAPI_AVEncVideoROIEnabled`: VT_UI4 0
 * `CODECAPI_AVEncMPVGOPSize`: VT_UI4 0
 * `CODECAPI_AVEncMPVDefaultBPictureCount`: VT_UI4 1
 * `CODECAPI_AVLowLatencyMode`: VT_BOOL 0

## WMVideo8 Encoder MFT

[Skipped]

## Intel® Hardware H265 Encoder MFT

[Skipped]

## H263 Encoder MFT

[Skipped]

## WMVideo9 Encoder MFT

[Skipped]

## Microsoft MPEG-2 Video Encoder MFT

[Skipped]

## H265 Encoder MFT

[Skipped]

