# System

 * Version: Windows 8
 * Computer Name: `YURIYSID-PC`
 * User Name: `Yuri` 
 * Local Time: `08.08.2015 17:00:47`
 * Architecture: AMD/Intel x64 (x64 Application)
 * Processors: `4`, Active Mask `0xF`
 * Page Size: `0x1000`
 * Application Address Space: `0x0000000000010000`..`0x00007FFFFFFEFFFF`
 * CPU: `GenuineIntel`, 0x1 EDX `0xBFEBFBFF` (MMX, SSE, SSE2), 0x1 ECX `0x7FBAE3FF` (SSE3, SSSE3, SSE41, SSE42, AVX), 0x7 EBX `0x00000281` (), Brand `       Intel(R) Core(TM) i7-3520M CPU @ 2.90GHz`
 * Physical Memory: `6 007` MB
 * Committed Memory Limit: `6 967` MB
 * Application Version: `1.0.0.446`

# Video

## Device: Lenovo EasyCamera

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_1bcf&pid_2c02&mi_00#7&39daa51e&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\global`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMCameraControl`
  * `IAMDeviceRemoval`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`

Property Pages:

  * `{1705F4AB-AF4A-41DC-9FF5-D774C4987E0E}` - Custom Video setting Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_Contrast`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_Hue`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_Saturation`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_Sharpness`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_Gamma`: `50`, flags `0x00`, `0`..`100`, step `1`, default `50`, cap flags `0x00`
 * `VideoProcAmp_ColorEnable`: `1`, flags `0x00`, `0`..`1`, step `1`, default `1`, cap flags `0x00`
 * `VideoProcAmp_WhiteBalance`: `0`, flags `0x01`, `2800`..`6500`, step `1`, default `4600`, cap flags `0x03`
 * `VideoProcAmp_BacklightCompensation`: `0`, flags `0x00`, `0`..`1`, step `1`, default `0`, cap flags `0x00`

### IAMCameraControl


### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `10`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 38 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 07 00 00 00 00 D0 12 13 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `117964800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `125 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 12 13 00 00 00 00 00 D0 12 13 00 00 00 00 00 00 00 08 07 00 00 08 07`
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
  * `.MinFrameInterval`: `125 0000`
  * `.MaxFrameInterval`: `125 0000`
  * `.MinBitsPerSecond`: `117 964 800`
  * `.MaxBitsPerSecond`: `117 964 800`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 3D 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
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
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 96 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 50 3F 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 8C 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 10 00 59 55 59 32 00 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38 400`
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
   * `.biSizeImage`: `38 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 A0 8C 00 00 A0 8C 00`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `9 216 000`
  * `.MaxBitsPerSecond`: `9 216 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 38 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 32 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153 600`
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
   * `.biSizeImage`: `153 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 32 02 00 80 32 02`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `36 864 000`
  * `.MaxBitsPerSecond`: `36 864 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 70 3D 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 93 04 00 00 00 00 40 42 0F 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `76800000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `100 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `960 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 40 42 0F 00 00 00 00 00 00 E0 93 04 00 E0 93 04`
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
  * `.MinFrameInterval`: `100 0000`
  * `.MaxFrameInterval`: `100 0000`
  * `.MinBitsPerSecond`: `76 800 000`
  * `.MaxBitsPerSecond`: `76 800 000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 30 2A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 3E 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 4D 4A 50 47 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 764 800`
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
   * `.biSizeImage`: `2 764 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 8D 27 00 00 8D 27`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `663 552 000`
  * `.MaxBitsPerSecond`: `663 552 000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 D0 37 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
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
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E1 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 F0 3E 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 4D 4A 50 47 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57 600`
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
   * `.biSizeImage`: `57 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 F0 D2 00 00 F0 D2 00`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `13 824 000`
  * `.MaxBitsPerSecond`: `13 824 000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 D0 34 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
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
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 C0 4B 03 00 C0 4B 03`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `55 296 000`
  * `.MaxBitsPerSecond`: `55 296 000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 00 00 00 00 00 00 00 58 00 00 00 00 00 00 00 90 41 1C E4 EC 00 00 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 4D 4A 50 47 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 440 000`
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
   * `.biSizeImage`: `1 440 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 70 99 14 00 70 99 14`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `345 600 000`
  * `.MaxBitsPerSecond`: `345 600 000`

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

# Audio

