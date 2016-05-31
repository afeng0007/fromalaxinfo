

# System

 * Version: 6.1.7601, Windows 7, Service Pack 1.0, VER_SUITE_SINGLEUSERTS, VER_NT_WORKSTATION
 * Product: PRODUCT_PROFESSIONAL
 * Computer Name: `laptop`
 * User Name: `LAPTOP\server` (Administrator)
 * Local Time: `5/31/2016 2:38:17 PM`
 * Architecture: AMD/Intel x64 (x64 Application)
 * Processors: `4`, Active Mask `0xF`
 * Page Size: `0x1000`
 * Application Address Space: `0x0000000000010000`..`0x000007FFFFFEFFFF`
 * Physical Memory: `7,625` MB
 * Committed Memory Limit: `15,623` MB
 * Application Version: `1.0.0.43`

# Display Devices

 * AMD Radeon(TM) R7 Graphics
  * Instance: PCI\VEN_1002&DEV_1313&SUBSYS_D0001458&REV_00\3&267A616A&0&08
  * DEVPKEY_Device_Manufacturer: Advanced Micro Devices, Inc.
  * DEVPKEY_Device_DriverVersion: 16.150.2401.1002

# Category `MFT_CATEGORY_VIDEO_ENCODER`

NOTE: Detail is limited to H.264 video encoders.

## H264 Encoder MFT

6 Attributes:

 * MFT_TRANSFORM_CLSID_Attribute: {6CA50344-051A-4DED-9779-A43305165E35} (Type VT_CLSID)
 * MF_TRANSFORM_FLAGS_Attribute: MFT_ENUM_FLAG_SYNCMFT
 * MFT_INPUT_TYPES_Attributes: MFVideoFormat_IYUV, MFVideoFormat_YV12, MFVideoFormat_NV12, MFVideoFormat_YUY2
 * MFT_OUTPUT_TYPES_Attributes: MFVideoFormat_H264

### ICodecAPI

 * `CODECAPI_AVEncCommonRateControlMode`: VT_UI4 0
 * `CODECAPI_AVEncCommonQuality`: VT_UI4 0

## WMVideo8 Encoder MFT

[Skipped]

## AMDh264Encoder

15 Attributes:

 * MFT_TRANSFORM_CLSID_Attribute: {ADC9BC80-0F41-46C6-AB75-D693D793597D} (Type VT_CLSID)
 * MF_TRANSFORM_FLAGS_Attribute: MFT_ENUM_FLAG_HARDWARE
 * MFT_ENUM_HARDWARE_VENDOR_ID_Attribute: VEN_1002 (Type VT_LPWSTR)
 * MFT_ENUM_HARDWARE_URL_Attribute: AMDh264Encoder (Type VT_LPWSTR)
 * MFT_INPUT_TYPES_Attributes: MFVideoFormat_NV12, MFVideoFormat_ARGB32
 * MFT_OUTPUT_TYPES_Attributes: MFVideoFormat_H264, {5D0CE9DD-9817-49DA-BDFD-F5F5B98F18A6}
 * MFT_CODEC_MERIT_Attribute: 8 (Type VT_UI4)
 * MFT_SUPPORT_DYNAMIC_FORMAT_CHANGE: 1 (Type VT_UI4)
 * MF_TRANSFORM_ASYNC: 1 (Type VT_UI4)
 * MF_SA_D3D11_AWARE: 1 (Type VT_UI4)
 * MF_SA_D3D_AWARE: 1 (Type VT_UI4)
 * MF_TRANSFORM_ASYNC_UNLOCK: 0 (Type VT_UI4)
 * MFT_GFX_DRIVER_VERSION_ID_Attribute: 16.15.2401.1002

### ICodecAPI

 * `CODECAPI_AVEncCommonRateControlMode`: VT_UI4 0, minimal VT_UI4 3, maximal VT_UI4 3, step VT_UI4 1
 * `CODECAPI_AVEncCommonLowLatency`: VT_BOOL 0, minimal VT_BOOL 0, maximal VT_BOOL 0, step VT_BOOL -1
 * `CODECAPI_AVEncCommonQuality`: VT_UI4 70, minimal VT_UI4 0, maximal VT_UI4 0, step VT_UI4 1
 * `CODECAPI_AVEncCommonQualityVsSpeed`: minimal VT_UI4 50, maximal VT_UI4 50, step VT_UI4 1
 * `CODECAPI_AVEncCommonMeanBitRate`: VT_UI4 10000000, minimal VT_UI4 10000, maximal VT_UI4 100000000, step VT_UI4 1
 * `CODECAPI_AVEncCommonMaxBitRate`: VT_UI4 10000000, minimal VT_UI4 10000, maximal VT_UI4 100000000, step VT_UI4 1
 * `CODECAPI_AVEncCommonBufferSize`: minimal VT_UI4 0, maximal VT_UI4 100000000, step VT_UI4 1
 * `CODECAPI_AVEncH264CABACEnable`: VT_BOOL -1, minimal VT_BOOL 0, maximal VT_BOOL 0, step VT_BOOL -1
 * `CODECAPI_AVEncVideoEncodeQP`: VT_UI8 25, minimal VT_UI8 0, maximal VT_UI8 51, step VT_INT 1
 * `CODECAPI_AVEncVideoMinQP`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 51, step VT_UI4 1
 * `CODECAPI_AVEncVideoForceKeyFrame`: VT_UI4 0, values { VT_UI4 0, VT_UI4 1 }
 * `CODECAPI_AVEncVideoSelectLayer`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 0, step VT_UI4 1
 * `CODECAPI_AVEncVideoTemporalLayerCount`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 3, step VT_UI4 1
 * `CODECAPI_AVEncVideoUsage`: VT_UI4 3, minimal VT_UI4 0, maximal VT_UI4 0, step VT_UI4 1
 * `CODECAPI_AVEncVideoEncodeFrameTypeQP`: minimal VT_UI8 0, maximal VT_UI8 51, step VT_INT 1
 * `CODECAPI_AVEncSliceControlMode`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 2, step VT_UI4 2
 * `CODECAPI_AVEncSliceControlSize`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 2147483647, step VT_UI4 1
 * `CODECAPI_AVEncVideoMaxNumRefFrame`: VT_UI4 4, minimal VT_UI4 1, maximal VT_UI4 16, step VT_UI4 1
 * `CODECAPI_AVEncVideoMaxQP`: VT_UI4 51, minimal VT_UI4 0, maximal VT_UI4 51, step VT_UI4 1
 * `CODECAPI_AVEncVideoLTRBufferControl`: VT_UI4 2, values { VT_UINT 65536, VT_UINT 65537, VT_UINT 65538, VT_UINT 65539 }
 * `CODECAPI_AVEncVideoMarkLTRFrame`: 
 * `CODECAPI_AVEncVideoUseLTRFrame`: 
 * `CODECAPI_AVEncVideoROIEnabled`: VT_UI4 0, values { VT_UI4 0, VT_UI4 1 }
 * `CODECAPI_AVEncMPVGOPSize`: VT_UI4 60, minimal VT_UI4 0, maximal VT_UI4 2147483647, step VT_UI4 1
 * `CODECAPI_AVEncMPVDefaultBPictureCount`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 3, step VT_UI4 1
 * `CODECAPI_AVEncMPVProfile`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 0, step VT_UI4 0
 * `CODECAPI_AVEncMPVLevel`: VT_UI4 0, minimal VT_UI4 0, maximal VT_UI4 0, step VT_UI4 0
 * `CODECAPI_AVLowLatencyMode`: VT_BOOL 0, minimal VT_BOOL 0, maximal VT_BOOL 0, step VT_BOOL -1

## WMVideo9 Encoder MFT

[Skipped]

