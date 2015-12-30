# System

 * Version: 10.0.10240
 * Computer Name: `Ksi`
 * User Name: `Ksi\Roman` (Administrator)
 * Local Time: `30-Dec-15 12:50:06`
 * Architecture: AMD/Intel x64 (x64 Application)
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x0000000000010000`..`0x00007FFFFFFEFFFF`
 * CPU: `GenuineIntel`, 0x1 EDX `0xBFCBFBFF` (MMX, SSE, SSE2), 0x1 ECX `0xFED87383` (SSE3, SSSE3, SSE41, SSE42, AVX), 0x7 EBX `0x000023AB` (AVX2), Brand `Intel(R) Core(TM) i7-4790 CPU @ 3.60GHz`
 * Physical Memory: `16,256` MB
 * Committed Memory Limit: `18,688` MB
 * Application Version: `1.0.0.498`

# Video

 * Logitech Webcam C930e
 * Blackmagic WDM Capture
 * Volicon - Intensity Pro
 * Decklink Video Capture
 * Test Source

## Device: Logitech Webcam C930e

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_046d&pid_0843&mi_00#6&2314864d&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\global`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMCameraControl`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`
  * `ICodecAPI`

Property Pages:

  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page
  * `{71F96465-78F3-11D0-A18C-00A0C9118956}` - `CLSID_CameraControlPropertyPage`, CameraControl Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `128`, flags `0x02`, `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `128`, flags `0x02`, `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `128`, flags `0x02`, `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Sharpness`: `128`, flags `0x02`, `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_WhiteBalance`: `4000`, flags `0x01`, `2000`..`7500`, step `1`, default `4000`, cap flags `0x03`
 * `VideoProcAmp_BacklightCompensation`: `0`, flags `0x02`, `0`..`1`, step `1`, default `0`, cap flags `0x02`
 * `VideoProcAmp_Gain`: `0`, flags `0x02`, `0`..`255`, step `1`, default `0`, cap flags `0x02`

### IAMCameraControl

 * `CameraControl_Pan`: `0`, flags `0x02`, `-10`..`10`, step `1`, default `0`, cap flags `0x02`
 * `CameraControl_Tilt`: `0`, flags `0x02`, `-10`..`10`, step `1`, default `0`, cap flags `0x02`
 * `CameraControl_Zoom`: `100`, flags `0x02`, `100`..`400`, step `1`, default `100`, cap flags `0x02`
 * `CameraControl_Exposure`: `-5`, flags `0x01`, `-11`..`-2`, step `1`, default `-5`, cap flags `0x03`
 * `CameraControl_Focus`: `0`, flags `0x01`, `0`..`255`, step `5`, default `0`, cap flags `0x03`

### ICodecAPI

 * `CODECAPI_AVEncCommonRateControlMode`: VT_UI4 0, modifiable
 * `CODECAPI_AVEncCommonMeanBitRate`: VT_UI4 3000000, modifiable
 * `CODECAPI_AVEncCommonBufferSize`: VT_UI4 3000000, modifiable
 * `CODECAPI_AVEncVideoOutputFrameRate`: VT_UI8 42949672960333333, modifiable
 * `CODECAPI_AVEncVideoEncodeDimension`: VT_UI4 31457920, modifiable
 * `CODECAPI_AVEncVideoEncodeQP`: modifiable
 * `CODECAPI_AVEncVideoForceKeyFrame`: VT_UI4 1280001, modifiable
 * `CODECAPI_AVEncVideoSelectLayer`: VT_UI4 0, modifiable
 * `CODECAPI_AVEncVideoTemporalLayerCount`: VT_UI4 0, modifiable
 * `CODECAPI_AVEncVideoUsage`: VT_UI4 0, modifiable
 * `CODECAPI_AVEncVideoSupportedControls`: VT_UI8 7683696543487

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `68`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 40 11 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 77 01 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `640` x `480`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `480`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `24,576,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 77 01 00 00 CA 08`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 96 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 8C 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 10 00 59 55 59 32 00 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `9216000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `38,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 70 17 00 00 A0 8C 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `160` x `120`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `160` x `120`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `160` x `120`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `1,536,000`
  * `.MaxBitsPerSecond`: `9,216,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 96 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F0 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 8C 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 10 00 59 55 59 32 00 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 70 17 00 00 A0 8C 00`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C6 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 B9 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 10 00 59 55 59 32 00 C6 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `50,688`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `12165120`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `50,688`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 1E 00 00 A0 B9 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `176` x `144`
  * `.MinCroppingSize`: `176` x `144`
  * `.MaxCroppingSize`: `176` x `144`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `176` x `144`
  * `.MaxOutputSize`: `176` x `144`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `2,027,520`
  * `.MaxBitsPerSecond`: `12,165,120`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C6 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 EA B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 B9 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 0B 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 10 00 59 55 59 32 00 C6 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `50,688`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 1E 00 00 A0 B9 00`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 A5 01 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 10 00 59 55 59 32 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `27648000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `180`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `115,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 50 46 00 00 E0 A5 01`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `180`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `320` x `180`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `320` x `180`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `4,608,000`
  * `.MaxBitsPerSecond`: `27,648,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 A5 01 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 10 00 59 55 59 32 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 50 46 00 00 E0 A5 01`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 20 0D B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 32 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 5D 00 00 80 32 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `6,144,000`
  * `.MaxBitsPerSecond`: `36,864,000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 32 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 5D 00 00 80 32 02`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E6 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 10 00 59 55 59 32 00 18 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `202,752`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `48660480`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `202,752`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 7B 00 00 80 E6 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `352` x `288`
  * `.MinCroppingSize`: `352` x `288`
  * `.MaxCroppingSize`: `352` x `288`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `352` x `288`
  * `.MaxOutputSize`: `352` x `288`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `8,110,080`
  * `.MaxBitsPerSecond`: `48,660,480`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 EC B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E6 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 0B 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 10 00 59 55 59 32 00 18 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `202,752`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 7B 00 00 80 E6 02`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 1B 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 E9 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 1B 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `203,520`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `48844800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `424`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `203,520`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 38 7C 00 00 50 E9 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `424` x `240`
  * `.MinCroppingSize`: `424` x `240`
  * `.MaxCroppingSize`: `424` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `424` x `240`
  * `.MaxOutputSize`: `424` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `8,140,800`
  * `.MaxBitsPerSecond`: `48,844,800`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 1B 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 E9 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 35 00 00 00 1E 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 1B 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `203,520`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 38 7C 00 00 50 E9 02`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 F4 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 38 B5 03 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 10 00 59 55 59 32 80 F4 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `259,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `62208000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `270`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `259,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 34 9E 00 00 38 B5 03`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `270`
  * `.MinCroppingSize`: `480` x `270`
  * `.MaxCroppingSize`: `480` x `270`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `270`
  * `.MaxOutputSize`: `480` x `270`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `10,368,000`
  * `.MaxBitsPerSecond`: `62,208,000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 F4 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E9 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 38 B5 03 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 10 00 59 55 59 32 80 F4 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `259,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 34 9E 00 00 38 B5 03`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 20 10 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `110592000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `460,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 19 01 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `360`
  * `.MinCroppingSize`: `640` x `360`
  * `.MaxCroppingSize`: `640` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `360`
  * `.MaxOutputSize`: `640` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `18,432,000`
  * `.MaxBitsPerSecond`: `110,592,000`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 19 01 00 80 97 06`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 41 0A 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 10 00 59 55 59 32 00 F0 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `716,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `172032000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `448`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `716,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 80 B5 01 00 00 41 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `448`
  * `.MinCroppingSize`: `800` x `448`
  * `.MaxCroppingSize`: `800` x `448`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `448`
  * `.MaxOutputSize`: `800` x `448`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `28,672,000`
  * `.MaxBitsPerSecond`: `172,032,000`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E5 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 41 0A 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 0E 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 10 00 59 55 59 32 00 F0 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `716,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 80 B5 01 00 00 41 0A`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 FC 0A 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960,000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `960,000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 49 02 00 80 FC 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `600`
  * `.MinCroppingSize`: `800` x `600`
  * `.MaxCroppingSize`: `800` x `600`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `600`
  * `.MaxOutputSize`: `800` x `600`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `38,400,000`
  * `.MaxBitsPerSecond`: `184,320,000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 E8 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 FC 0A 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960,000`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 49 02 00 80 FC 0A`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 6C 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A5 0B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 03 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 6C 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `814,080`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `195379200`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `848`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `814,080`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 E0 F0 01 00 40 A5 0B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `848` x `480`
  * `.MinCroppingSize`: `848` x `480`
  * `.MaxCroppingSize`: `848` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `848` x `480`
  * `.MaxOutputSize`: `848` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `32,563,200`
  * `.MaxBitsPerSecond`: `195,379,200`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 6C 0C 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A5 0B 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 35 00 00 00 1E 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 50 03 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 6C 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `814,080`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 E0 F0 01 00 40 A5 0B`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 6A 07 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 10 00 59 55 59 32 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `124416000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `540`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 78 02 00 70 6A 07`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `540`
  * `.MinCroppingSize`: `960` x `540`
  * `.MaxCroppingSize`: `960` x `540`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `540`
  * `.MaxOutputSize`: `960` x `540`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `41,472,000`
  * `.MaxBitsPerSecond`: `124,416,000`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E8 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 6A 07 00 00 00 00 2A 2C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 10 00 59 55 59 32 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 78 02 00 70 6A 07`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 08 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 00 04 00 00 40 02 00 00 01 00 10 00 59 55 59 32 00 00 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,179,648`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `141557760`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1024`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1,179,648`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D0 02 00 00 70 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `576`
  * `.MinCroppingSize`: `1024` x `576`
  * `.MaxCroppingSize`: `1024` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1024` x `576`
  * `.MaxOutputSize`: `1024` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `47,185,920`
  * `.MaxBitsPerSecond`: `141,557,760`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 12 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 08 00 00 00 00 2A 2C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 00 04 00 00 40 02 00 00 01 00 10 00 59 55 59 32 00 00 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,179,648`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D0 02 00 00 70 08`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 40 42 0F 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `100 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 65 04 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `100 0000`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `73,728,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 40 42 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 65 04 00 00 CA 08`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 2B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 92 09 00 00 00 00 55 58 14 00 00 00 00 00 28 00 00 00 40 06 00 00 80 03 00 00 01 00 10 00 59 55 59 32 00 C0 2B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,867,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `160563200`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `133 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `896`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2,867,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 55 58 14 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D6 06 00 00 41 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1600` x `896`
  * `.MinCroppingSize`: `1600` x `896`
  * `.MaxCroppingSize`: `1600` x `896`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1600` x `896`
  * `.MaxOutputSize`: `1600` x `896`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `133 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `114,688,000`
  * `.MaxBitsPerSecond`: `172,032,000`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 2B 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 92 09 00 00 00 00 55 58 14 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 0E 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 40 06 00 00 80 03 00 00 01 00 10 00 59 55 59 32 00 C0 2B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,867,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 55 58 14 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D6 06 00 00 41 0A`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 84 1E 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `200 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 84 1E 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `200 0000`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `165,888,000`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 84 1E 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 40 E3 09`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 77 01 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `640` x `480`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `480`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `24,576,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 10 0E 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 ED B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 77 01 00 00 CA 08`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E1 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 4D 4A 50 47 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `13824000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `57,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 70 17 00 00 A0 8C 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `160` x `120`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `160` x `120`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `160` x `120`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `1,536,000`
  * `.MaxBitsPerSecond`: `9,216,000`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E1 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F2 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 4D 4A 50 47 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 70 17 00 00 A0 8C 00`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 29 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 16 01 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 4D 4A 50 47 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,032`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `18247680`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `76,032`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 1E 00 00 A0 B9 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `176` x `144`
  * `.MinCroppingSize`: `176` x `144`
  * `.MaxCroppingSize`: `176` x `144`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `176` x `144`
  * `.MaxOutputSize`: `176` x `144`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `2,027,520`
  * `.MaxBitsPerSecond`: `12,165,120`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 29 01 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 16 01 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 0B 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 4D 4A 50 47 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,032`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 1E 00 00 A0 B9 00`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A3 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 78 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 18 00 4D 4A 50 47 00 A3 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `172,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `41472000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `180`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `172,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 50 46 00 00 E0 A5 01`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `180`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `320` x `180`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `320` x `180`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `4,608,000`
  * `.MaxBitsPerSecond`: `27,648,000`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A3 02 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 78 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 18 00 4D 4A 50 47 00 A3 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `172,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 B4 00 00 00 40 01 00 00 B4 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 50 46 00 00 E0 A5 01`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 5D 00 00 80 32 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `6,144,000`
  * `.MaxBitsPerSecond`: `36,864,000`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 84 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 F2 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 5D 00 00 80 32 02`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A4 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 59 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 4D 4A 50 47 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304,128`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `72990720`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `304,128`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 7B 00 00 80 E6 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `352` x `288`
  * `.MinCroppingSize`: `352` x `288`
  * `.MaxCroppingSize`: `352` x `288`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `352` x `288`
  * `.MaxOutputSize`: `352` x `288`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `8,110,080`
  * `.MaxBitsPerSecond`: `48,660,480`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A4 04 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F0 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 59 04 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 0B 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 4D 4A 50 47 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304,128`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 C0 7B 00 00 80 E6 02`

#### Capability: 46

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 A8 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F8 5D 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 80 A8 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `305,280`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `73267200`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `424`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `305,280`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 38 7C 00 00 50 E9 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `424` x `240`
  * `.MinCroppingSize`: `424` x `240`
  * `.MaxCroppingSize`: `424` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `424` x `240`
  * `.MaxOutputSize`: `424` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `8,140,800`
  * `.MaxBitsPerSecond`: `48,844,800`

#### Capability: 47

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 A8 04 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 EB B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F8 5D 04 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 35 00 00 00 1E 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 80 A8 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `305,280`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 38 7C 00 00 50 E9 02`

#### Capability: 48

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 EE 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D4 8F 05 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 18 00 4D 4A 50 47 C0 EE 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `388,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `93312000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `270`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `388,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 34 9E 00 00 38 B5 03`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `270`
  * `.MinCroppingSize`: `480` x `270`
  * `.MaxCroppingSize`: `480` x `270`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `270`
  * `.MaxOutputSize`: `480` x `270`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `10,368,000`
  * `.MaxBitsPerSecond`: `62,208,000`

#### Capability: 49

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 EE 05 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 F1 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D4 8F 05 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 18 00 4D 4A 50 47 C0 EE 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `388,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 0E 01 00 00 E0 01 00 00 0E 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 34 9E 00 00 38 B5 03`

#### Capability: 50

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 18 00 4D 4A 50 47 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 19 01 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `360`
  * `.MinCroppingSize`: `640` x `360`
  * `.MaxCroppingSize`: `640` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `360`
  * `.MaxOutputSize`: `640` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `18,432,000`
  * `.MaxBitsPerSecond`: `110,592,000`

#### Capability: 51

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 ED B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 18 00 4D 4A 50 47 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 19 01 00 80 97 06`

#### Capability: 52

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 40 11 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 61 0F 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 18 00 4D 4A 50 47 00 68 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,075,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `258048000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `448`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,075,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 80 B5 01 00 00 41 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `448`
  * `.MinCroppingSize`: `800` x `448`
  * `.MaxCroppingSize`: `800` x `448`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `448`
  * `.MaxOutputSize`: `800` x `448`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `28,672,000`
  * `.MaxBitsPerSecond`: `172,032,000`

#### Capability: 53

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 10 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 ED B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 61 0F 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 0E 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 18 00 4D 4A 50 47 00 68 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,075,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 80 B5 01 00 00 41 0A`

#### Capability: 54

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 4D 4A 50 47 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,440,000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `345600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,440,000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 49 02 00 A0 BB 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `600`
  * `.MinCroppingSize`: `800` x `600`
  * `.MaxCroppingSize`: `800` x `600`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `600`
  * `.MaxOutputSize`: `800` x `600`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `38,400,000`
  * `.MaxBitsPerSecond`: `230,400,000`

#### Capability: 55

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F9 15 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E6 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 4D 4A 50 47 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,440,000`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 F0 49 02 00 A0 BB 0D`

#### Capability: 56

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A2 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 40 11 B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 77 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 03 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 A2 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,221,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `293068800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `848`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,221,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 E0 F0 01 00 40 A5 0B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `848` x `480`
  * `.MinCroppingSize`: `848` x `480`
  * `.MaxCroppingSize`: `848` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `848` x `480`
  * `.MaxOutputSize`: `848` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `32,563,200`
  * `.MaxBitsPerSecond`: `195,379,200`

#### Capability: 57

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A2 12 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 EA B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 77 11 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 35 00 00 00 1E 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 50 03 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 A2 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,221,120`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 03 00 00 E0 01 00 00 50 03 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 E0 F0 01 00 40 A5 0B`

#### Capability: 58

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 BB 17 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 3F 16 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 18 00 4D 4A 50 47 00 BB 17 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,555,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `373248000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `540`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,555,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 78 02 00 E0 D4 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `540`
  * `.MinCroppingSize`: `960` x `540`
  * `.MaxCroppingSize`: `960` x `540`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `540`
  * `.MaxOutputSize`: `960` x `540`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `41,472,000`
  * `.MaxBitsPerSecond`: `248,832,000`

#### Capability: 59

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 BB 17 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 E4 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 3F 16 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 18 00 4D 4A 50 47 00 BB 17 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,555,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 1C 02 00 00 C0 03 00 00 1C 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 78 02 00 E0 D4 0E`

#### Capability: 60

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 1B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 19 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 04 00 00 40 02 00 00 01 00 18 00 4D 4A 50 47 00 00 1B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,769,472`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `424673280`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1024`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,769,472`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D0 02 00 00 E0 10`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `576`
  * `.MinCroppingSize`: `1024` x `576`
  * `.MaxCroppingSize`: `1024` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1024` x `576`
  * `.MaxOutputSize`: `1024` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `47,185,920`
  * `.MaxBitsPerSecond`: `283,115,520`

#### Capability: 61

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 1B 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E9 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 19 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 00 04 00 00 40 02 00 00 01 00 18 00 4D 4A 50 47 00 00 1B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,769,472`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 04 00 00 40 02 00 00 00 04 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D0 02 00 00 E0 10`

#### Capability: 62

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 30 2A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 4D 4A 50 47 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,764,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `663552000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `2,764,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 65 04 00 00 5E 1A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `73,728,000`
  * `.MaxBitsPerSecond`: `442,368,000`

#### Capability: 63

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 30 2A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 E8 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 4D 4A 50 47 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,764,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 65 04 00 00 5E 1A`

#### Capability: 64

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A0 41 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 86 3D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 06 00 00 80 03 00 00 01 00 18 00 4D 4A 50 47 00 A0 41 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,300,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1032192000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `896`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `4,300,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D6 06 00 00 04 29`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1600` x `896`
  * `.MinCroppingSize`: `1600` x `896`
  * `.MaxCroppingSize`: `1600` x `896`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1600` x `896`
  * `.MaxOutputSize`: `1600` x `896`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `114,688,000`
  * `.MaxBitsPerSecond`: `688,128,000`

#### Capability: 65

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A0 41 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 30 EA B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 86 3D 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 0E 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 40 06 00 00 80 03 00 00 01 00 18 00 4D 4A 50 47 00 A0 41 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,300,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 80 03 00 00 40 06 00 00 80 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 D6 06 00 00 04 29`

#### Capability: 66

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 EC 5E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 FD 58 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 18 00 4D 4A 50 47 00 EC 5E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `6,220,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1492992000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `6,220,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 67

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 EC 5E 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 00 00 00 00 00 00 00 70 00 00 00 00 00 00 00 B0 F2 B0 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 FD 58 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 81 11 8D 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 18 00 4D 4A 50 47 00 EC 5E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `6,220,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `68`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 02 E0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `80 02 E0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `A0 00 78 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `160`
   * `.wHeight`: `120`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `A0 00 78 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `160`
   * `.wHeight`: `120`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `B0 00 90 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `176`
   * `.wHeight`: `144`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `B0 00 90 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `176`
   * `.wHeight`: `144`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 80 10 B2 91 59 00 00 00`
  * Format Data: `40 01 B4 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `180`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 B4 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `180`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 F0 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 F0 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 40 11 B2 91 59 00 00 00`
  * Format Data: `60 01 20 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `352`
   * `.wHeight`: `288`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `60 01 20 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `352`
   * `.wHeight`: `288`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 60 0F B2 91 59 00 00 00`
  * Format Data: `A8 01 F0 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `424`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `A8 01 F0 00 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `424`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `E0 01 0E 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `480`
   * `.wHeight`: `270`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `E0 01 0E 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `480`
   * `.wHeight`: `270`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 02 68 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `360`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 02 68 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `360`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `20 03 C0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `448`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `20 03 C0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `448`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `20 03 58 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `600`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `20 03 58 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `600`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `50 03 E0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `848`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 60 0F B2 91 59 00 00 00`
  * Format Data: `50 03 E0 01 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `848`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `C0 03 1C 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `960`
   * `.wHeight`: `540`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `C0 03 1C 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `960`
   * `.wHeight`: `540`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 04 40 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1024`
   * `.wHeight`: `576`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 04 40 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1024`
   * `.wHeight`: `576`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 05 D0 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1280`
   * `.wHeight`: `720`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 05 D0 02 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1280`
   * `.wHeight`: `720`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `40 06 80 03 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1600`
   * `.wHeight`: `896`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `40 06 80 03 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1600`
   * `.wHeight`: `896`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 07 38 04 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1920`
   * `.wHeight`: `1080`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `80 07 38 04 01 00 01 00 40 42 28 00 00 00 00 00 03 00 00 00 29 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1920`
   * `.wHeight`: `1080`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x4240` // Constrained Baseline Profile
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0029`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `80 02 E0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 02 E0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `A0 00 78 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `160`
   * `.wHeight`: `120`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `A0 00 78 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `160`
   * `.wHeight`: `120`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 80 10 B2 91 59 00 00 00`
  * Format Data: `B0 00 90 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `176`
   * `.wHeight`: `144`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `B0 00 90 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `176`
   * `.wHeight`: `144`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 B4 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `180`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 B4 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `180`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 40 11 B2 91 59 00 00 00`
  * Format Data: `40 01 F0 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `40 01 F0 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `320`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 60 0F B2 91 59 00 00 00`
  * Format Data: `60 01 20 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `352`
   * `.wHeight`: `288`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `60 01 20 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `352`
   * `.wHeight`: `288`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 46

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `A8 01 F0 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `424`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 47

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `A8 01 F0 00 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `424`
   * `.wHeight`: `240`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 48

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `E0 01 0E 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `480`
   * `.wHeight`: `270`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 49

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `E0 01 0E 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `480`
   * `.wHeight`: `270`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 50

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `80 02 68 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `360`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 51

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `80 02 68 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `640`
   * `.wHeight`: `360`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 52

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `20 03 C0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `448`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 53

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `20 03 C0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `448`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 54

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `20 03 58 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `600`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 55

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 60 0F B2 91 59 00 00 00`
  * Format Data: `20 03 58 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `800`
   * `.wHeight`: `600`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 56

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `50 03 E0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `848`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 57

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 12 B2 91 59 00 00 00`
  * Format Data: `50 03 E0 01 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `848`
   * `.wHeight`: `480`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 58

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `C0 03 1C 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `960`
   * `.wHeight`: `540`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 59

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `C0 03 1C 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `960`
   * `.wHeight`: `540`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 60

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0C B2 91 59 00 00 00`
  * Format Data: `00 04 40 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1024`
   * `.wHeight`: `576`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 61

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 04 40 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1024`
   * `.wHeight`: `576`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 62

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `00 05 D0 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1280`
   * `.wHeight`: `720`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 63

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `00 05 D0 02 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1280`
   * `.wHeight`: `720`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 64

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `40 06 80 03 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1600`
   * `.wHeight`: `896`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 65

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `40 06 80 03 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1600`
   * `.wHeight`: `896`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 66

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 F0 F4 40 3F 22 56 F8 4F B6 D8 A1 7A 58 4B EE 5E 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 00 0F B2 91 59 00 00 00`
  * Format Data: `80 07 38 04 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1920`
   * `.wHeight`: `1080`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 67

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 05 BE 17 20 29 66 48 42 AA ED 7E 1A 47 BC 9B 9C 00 00 00 00 00 00 00 00 00 00 00 00 54 00 00 00 00 00 00 00 C0 0C B2 91 59 00 00 00`
  * Format Data: `80 07 38 04 01 00 01 00 0C 64 28 00 00 00 00 00 03 00 00 00 28 00 00 00 01 00 00 00 00 00 00 00 15 16 05 00 01 0E 0A 03 00 0F F5 00 00 00 00 00 00 00 F5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `84`
  * `KS_H264VIDEOINFO`:
   * `.wWidth`: `1920`
   * `.wHeight`: `1080`
   * `.wSARwidth`: `1`
   * `.wSARheight`: `1`
   * `.wProfile`: `0x640C` // High Profile + 0x0C
   * `.bLevelIDC`: `40` // 4.0
   * `.wConstrainedToolset`: `0`
   * `.bmSupportedUsages`: `0x00000003`
   * `.bmCapabilities`: `0x0028`
   * `.bmSVCCapabilities`: `0x00000001`
   * `.bmMVCCapabilities`: `0x00000000`
   * `.dwFrameInterval`: `33 3333`
   * `.bMaxCodecConfigDelay`: `0x01`
   * `.bmSupportedSliceModes`: `0x0E` // Target Slice Size | Number of Slices per Frame | Number of Macroblocks per Slice
   * `.bmSupportedSyncFrameTypes`: `0x0A`
   * `.bResolutionScaling`: `0x03`
   * `.bSimulcastSupport`: `0`
   * `.bmSupportedRateControlModes`: `0x0F`
   * `.wMaxMBperSecOneResolutionNoScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsNoScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsNoScalability`: `0`
   * `.wMaxMBperSecFourResolutionsNoScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalScalability`: `245`
   * `.wMaxMBperSecTwoResolutionsTemporalScalablility`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalQualityScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalQualityScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalQualityScalability`: `0`
   * `.wMaxMBperSecOneResolutionTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsTemporalSpatialScalablity`: `0`
   * `.wMaxMBperSecFourResolutionsTemporalSpatialScalability`: `0`
   * `.wMaxMBperSecOneResolutionFullScalability`: `0`
   * `.wMaxMBperSecTwoResolutionsFullScalability`: `0`
   * `.wMaxMBperSecThreeResolutionsFullScalability`: `0`
   * `.wMaxMBperSecFourResolutionsFullScalability`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 E3 09 00 80 53 3B`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `995,328,000`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

### Pin: Video Camera Terminal

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{3EBC7959-3310-493B-AA81-C7E132D56F71}`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IStreamBuilder`

## Device: Blackmagic WDM Capture

 * Moniker Display Name: `@device:pnp:\\?\decklink#avstream#5&2db0fd5&1&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\decklinkcapture1`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`

### Pin: Video Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `18`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 90 A3 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A5 43 00 08 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `134235045`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 1E FA E6 07 A5 43 00 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `132,577,822`
  * `.MaxBitsPerSecond`: `134,235,045`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 A5 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 DC 04 AB 0A 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `178980060`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 7D 4D 89 0A DC 04 AB 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `176,770,429`
  * `.MaxBitsPerSecond`: `178,980,060`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 30 A9 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8E 54 00 0A 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `167793806`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 A5 B8 E0 09 8E 54 00 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `165,722,277`
  * `.MaxBitsPerSecond`: `167,793,806`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 10 A8 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 13 C6 55 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `223725075`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 DC A0 2B 0D 13 C6 55 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `220,963,036`
  * `.MaxBitsPerSecond`: `223,725,075`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 50 AA B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1C A9 00 14 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `335587612`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 4B 71 C1 13 1C A9 00 14`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `331,444,555`
  * `.MaxBitsPerSecond`: `335,587,612`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 30 A0 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 26 8C AB 1A 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `447450150`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B9 41 57 1A 26 8C AB 1A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `441,926,073`
  * `.MaxBitsPerSecond`: `447,450,150`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 90 A6 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `165,888,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 A9 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `221,184,000`
  * `.MaxBitsPerSecond`: `221,184,000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 9F B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 C6 13 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `331776000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 C6 13 00 80 C6 13`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `331,776,000`
  * `.MaxBitsPerSecond`: `331,776,000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 A9 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5E 1A 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `442368000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 5E 1A 00 00 5E 1A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `442,368,000`
  * `.MaxBitsPerSecond`: `442,368,000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 90 A6 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F2 2B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `737280000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 F2 2B 00 00 F2 2B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `737,280,000`
  * `.MaxBitsPerSecond`: `737,280,000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 D0 AB B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 74 83 AE 34 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `883852148`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 73 83 AE 34 74 83 AE 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `883,852,147`
  * `.MaxBitsPerSecond`: `883,852,148`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 A7 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 0B 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0B 8B 02 00 00 00 00 00 00 00 BC 34 00 00 BC 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6667`
  * `.MinBitsPerSecond`: `884,736,000`
  * `.MaxBitsPerSecond`: `884,736,000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 A9 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 70 31 00 40 70 31`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `829,440,000`
  * `.MaxBitsPerSecond`: `829,440,000`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 9D B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E2 53 44 3B 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994333666`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 E2 53 44 3B E2 53 44 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `994,333,666`
  * `.MaxBitsPerSecond`: `994,333,666`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 50 A7 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 A0 B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 DC 69 2F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `795466933`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 B5 DC 69 2F B5 DC 69 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `795,466,933`
  * `.MaxBitsPerSecond`: `795,466,933`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 10 9F B4 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 76 2F 00 00 00 00 9B 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `796262400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9B 5B 06 00 00 00 00 00 00 00 76 2F 00 00 76 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6667`
  * `.MinBitsPerSecond`: `796,262,400`
  * `.MaxBitsPerSecond`: `796,262,400`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

### Pin: Audio Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `2`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 C0 22 B3 91 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 60 23 B3 91 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 DC 05 00 08 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

## Device: Volicon - Intensity Pro

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\name_Intensity+Pro`

Interfaces:

  * `ISpecifyPropertyPages`

Property Pages:

  * `{8673E161-2581-473A-B1C1-E349A2D1018F}` - Volicon CDeckLinkVideoSourcePropertyPage

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `21`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 E4 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8E 54 00 0A 00 00 00 00 62 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `167793806`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 62 17 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 30 E3 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 12 C6 55 0D 00 00 00 00 62 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `223725074`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 62 17 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 DE D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 43 00 08 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `134235044`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 D0 E5 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 DB 04 AB 0A 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `178980059`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 DD D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 E9 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 E2 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1C A9 00 14 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `335587612`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 DD D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 25 8C AB 1A 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `447450149`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 EB D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 C6 13 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `331776000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 EA D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5E 1A 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `442368000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 50 EA D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 DC 69 2F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `795466933`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 DF D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 76 2F 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `796262400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 90 E3 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 EB D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E2 53 44 3B 00 00 00 00 62 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994333666`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 62 17 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 E7 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 B0 E7 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 E2 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E2 53 44 3B 00 00 00 00 62 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994333666`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 62 17 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 E8 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 E8 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F2 2B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `737280000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 30 E6 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 73 83 AE 34 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `883852147`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 D0 DC D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

### Pin: ~VANC

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4284-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_VBI`
 * Capabilities:
  * Count: `0`
  * Structure Size: `52` (expected `128`)

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

### Pin: ~Audio

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{991C89C5-15B7-4A9F-938B-6310423AD7B9}`
 * Capabilities:
  * Count: `6`
  * Structure Size: `52` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 02 00 00 00 02 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `2`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 DC 05 00 08 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 02 00 00 00 02 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `2`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 10 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 B8 0B 00 10 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `768000`
   * `.nBlockAlign`: `16`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 08 00 00 00 08 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `8`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 70 17 00 20 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 08 00 00 00 08 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `8`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 70 17 00 20 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 10 00 00 00 10 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `16`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 40 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 82 D1 93 59 00 00 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 E0 2E 00 40 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `64`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `3072000`
   * `.nBlockAlign`: `64`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 10 00 00 00 10 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `16`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

## Device: Decklink Video Capture

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{44A8B5C7-13B6-4211-BD40-35B629D9E6DF}`
 * DeckLink IO Features: `0x03388CC0`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IReferenceClock`
  * `IAMDroppedFrames`
  * `IAMExtDevice`
  * `IAMExtTransport`
  * `IAMFilterMiscFlags`
  * `IAMTimecodeReader`

Property Pages:

  * `{50D29FCF-70ED-4155-9B2A-91F2CE9A86BA}` - Decklink Video Capture Properties

### IAMExtDevice

 * Capabilities:
  * `ED_DEVCAP_AUDIO_INPUTS`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_MONITOR_SOURCES`: `0` (`0x0`)
  * `ED_DEVCAP_CAN_RECORD`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_RECORD_STROBE`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_SAVE`: `0` (`0x0`)
  * `ED_DEVCAP_CTLTRK_READ`: `0` (`0x0`)
  * `ED_DEVCAP_HAS_AUDIO`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_HAS_VIDEO`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_INDEX_READ`: `0` (`0x0`)
  * `ED_DEVCAP_NEEDS_CALIBRATING`: `0` (`0x0`)
  * `ED_DEVCAP_TIMECODE_READ`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_TIMECODE_WRITE`: `0` (`0x0`)
  * `ED_DEVCAP_USES_FILES`: `0` (`0x0`)
  * `ED_DEVCAP_VIDEO_INPUTS`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_DEVICE_TYPE`: `4104` (`0x1008`)
  * `ED_DEVCAP_SYNC_ACCURACY`: `4129` (`0x1021`)
  * `ED_DEVCAP_NORMAL_RATE`: `0` (`0x0`)
  * `ED_DEVCAP_SEEK_TYPE`: `4145` (`0x1031`)
  * `ED_DEVCAP_EXTERNAL_DEVICE_ID`: `0.00`
  * `ED_DEVCAP_PREROLL`: `0.00`
  * `ED_DEVCAP_POSTROLL`: `0.00`

### IAmExtTransport

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `13`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 60 26 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ED 53 00 0A 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `167793645`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 ED 53 00 0A ED 53 00 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `486`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `167,793,645`
  * `.MaxBitsPerSecond`: `167,793,645`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 60 26 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 13 43 00 08 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `134234899`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 13 43 00 08 13 43 00 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `486`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `134,234,899`
  * `.MaxBitsPerSecond`: `134,234,899`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 B0 20 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `165,888,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 80 1E B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 DA A7 00 14 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `335587290`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 DA A7 00 14 DA A7 00 14`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `486`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `335,587,290`
  * `.MaxBitsPerSecond`: `335,587,290`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 80 1E B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 C6 13 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `331776000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 C6 13 00 80 C6 13`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `331,776,000`
  * `.MaxBitsPerSecond`: `331,776,000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 B0 20 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 54 D9 69 2F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `795466068`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 54 D9 69 2F 54 D9 69 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `795,466,068`
  * `.MaxBitsPerSecond`: `795,466,068`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 90 28 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 76 2F 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `796262400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 76 2F 00 00 76 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `796,262,400`
  * `.MaxBitsPerSecond`: `796,262,400`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 90 28 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 70 31 00 40 70 31`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `829,440,000`
  * `.MaxBitsPerSecond`: `829,440,000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 00 22 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 50 44 3B 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994332712`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 28 50 44 3B 28 50 44 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `994,332,712`
  * `.MaxBitsPerSecond`: `994,332,712`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 B0 20 B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 80 1E B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F2 2B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `737280000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 F2 2B 00 00 F2 2B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `737,280,000`
  * `.MaxBitsPerSecond`: `737,280,000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 80 1E B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 24 80 AE 34 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `883851300`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 24 80 AE 34 24 80 AE 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `883,851,300`
  * `.MaxBitsPerSecond`: `883,851,300`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 68 00 00 00 00 00 00 00 80 1E B5 91 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 BC 34 00 00 BC 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `884,736,000`
  * `.MaxBitsPerSecond`: `884,736,000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: ~VANC

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4284-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_VBI`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: ~Timecode

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C428B-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_TIMECODE`
 * Capabilities:
  * Count: `2`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `E3 DE 82 04 17 78 CF 11 8A 03 00 AA 00 6E CB 65 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 18 00 00 00 D6 17 64 0F 18 C3 D0 11 A4 3F 00 A0 C9 22 31 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.majortype`: `{0482DEE3-7817-11CF-8A03-00AA006ECB65}`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `24`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `74 78 74 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 0C 00 00 00 D6 17 64 0F 18 C3 D0 11 A4 3F 00 A0 C9 22 31 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.majortype`: `MEDIATYPE_Text`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `12`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: Test Source

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{94D757E4-1CBD-412E-979B-2DF85A4BC375}-001`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{AD0E84E9-DE25-4C1A-85A5-47406604E144}` - Alax.Info DirectShow Spy Runtime Event Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 20 93 D2 93 59 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 E4 57 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 30 FD FF FF 01 00 20 00 00 00 00 00 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3,686,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `1474560000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `-720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `3,686,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 E4 57 00 00 E4 57`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `1,474,560,000`
  * `.MaxBitsPerSecond`: `1,474,560,000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

# Audio

 * Microphone (Logitech Webcam C930e)
 * Volicon - Intensity Pro (Audio)
 * Decklink Audio Capture
 * Line In (Blackmagic Audio)
 * Microphone (Realtek High Definition Audio)

## Device: Microphone (Logitech Webcam C930e)

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\wave:{A7A42850-478D-4734-BAB8-87F1D8AD5273}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 70 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 70 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9A D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: Volicon - Intensity Pro (Audio)

 * Moniker Display Name: `@device:sw:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\name_Intensity+Pro`

Interfaces:

  * `ISpecifyPropertyPages`

Property Pages:

  * `{19283C77-E267-41CE-AEED-C5BE7F783A5C}` - Volicon CDeckLinkAudioSourcePropertyPage

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `6`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 70 9B D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 02 00 00 00 02 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `2`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 99 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 DC 05 00 08 00 20 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 02 00 00 00 02 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `2`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 10 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 9E D1 93 59 00 00 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 B8 0B 00 10 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `768000`
   * `.nBlockAlign`: `16`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 08 00 00 00 08 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `8`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 50 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 70 17 00 20 00 20 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 08 00 00 00 08 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `8`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 70 99 D1 93 59 00 00 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 70 17 00 20 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 10 00 00 00 10 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `16`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 40 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9F D1 93 59 00 00 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 E0 2E 00 40 00 20 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `64`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `3072000`
   * `.nBlockAlign`: `64`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 10 00 00 00 10 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `16`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

## Device: Decklink Audio Capture

 * Moniker Display Name: `@device:sw:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\{AAA22F7E-5AA0-49D9-8C8D-B52B1AA92EB7}`
 * DeckLink IO Features: `0x03388CC0`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IReferenceClock`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{8869832C-FDE3-468E-B0D2-53BF2D59C17A}` - Decklink Audio Capture Properties2
  * `{ED4418E7-582D-4759-AE07-8CA7F771427F}` - Decklink Audio Capture Properties

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `8`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 9B D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 01 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 50 9B D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 02 00 00 00 02 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 9B D1 93 59 00 00 00`
  * Format Data: `01 00 04 00 80 BB 00 00 00 DC 05 00 08 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `4`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 04 00 00 00 04 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 0C 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 99 D1 93 59 00 00 00`
  * Format Data: `01 00 06 00 80 BB 00 00 00 CA 08 00 0C 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `12`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `6`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `576000`
   * `.nBlockAlign`: `12`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 06 00 00 00 06 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 10 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 9D D1 93 59 00 00 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 B8 0B 00 10 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `768000`
   * `.nBlockAlign`: `16`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 08 00 00 00 08 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 14 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 0A 00 80 BB 00 00 00 A6 0E 00 14 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `20`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `10`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `960000`
   * `.nBlockAlign`: `20`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 0A 00 00 00 0A 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 18 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 99 D1 93 59 00 00 00`
  * Format Data: `01 00 0C 00 80 BB 00 00 00 94 11 00 18 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `24`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `12`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1152000`
   * `.nBlockAlign`: `24`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 0C 00 00 00 0C 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 70 17 00 20 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 10 00 00 00 10 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: Line In (Blackmagic Audio)

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\wave:{B1D6A60E-CC2D-4874-9CD3-A88F6FD33C78}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9B D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 B0 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 70 9B D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 50 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 50 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 A0 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 9B D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9A D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9F D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 D0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: Microphone (Realtek High Definition Audio)

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\wave:{BED75490-A7A2-499D-AA39-4A47507601CF}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 99 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9C D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 50 9B D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9C D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 B0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 10 9B D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 B0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 90 9A D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 B0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 B0 9D D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 F0 99 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 12 00 00 00 00 00 00 00 30 A1 D1 93 59 00 00 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

