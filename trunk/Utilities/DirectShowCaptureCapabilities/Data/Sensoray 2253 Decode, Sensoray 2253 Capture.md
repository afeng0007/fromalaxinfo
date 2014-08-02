# System

 * Version: `6.1` Build `7601`; Windows 7; Service Pack 1; Service Pack `1.0`
 * Computer Name: `HELIOS`
 * User Name: `wayne.cornish` (Administrator)
 * Local Time: `10/03/2014 14:20:26`
 * Architecture: x86
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0xFFFEFFFF`
 * Physical Memory: `8,174` MB
 * Committed Memory Limit: `16,347` MB

# Video

## Device: Sensoray 2253 Capture A

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_1943&pid_2253#6&7947e71&0&3#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\s2253av1`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`

Property Pages:

  * `{F8CC4397-2CDA-43E4-9EB1-FAC1D19AE25B}` - VideoControlPropertyPage Class
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page
  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, VideoDecoder Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Hue`: `0`, flags `0x02`; `-128`..`127`, step `1`, default `0`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`

### Pin: Xbar Video In

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4283-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_ANALOGVIDEOIN`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Xbar Audio In

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: Failed to Get Pin Category 0x80070490
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `70`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 55 59 56 59 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 55 59 56 59 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
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
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 D4 01 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `30720000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 59 55 59 32 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 32 36 34 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 32 36 34 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 48 32 36 34 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 56 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 56 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 50 34 56 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 4A 50 47 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 46 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 46 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 50 34 46 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `307,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 A9 03 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `61440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `307,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 2C 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 40 19 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 08 00 59 38 30 30 00 2C 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `18432000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `76,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 2C 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 60 EA 00 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 08 00 59 38 30 30 00 2C 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `15360000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `76,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 46 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 A0 F1 04 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 46 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `345,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `82944000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `345,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 54 06 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 A0 F1 04 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 08 00 59 38 30 30 00 54 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `414,720`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `82944000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `414,720`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 46

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 47

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 48 34 54 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 48

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 49

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 50

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 51

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 52

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 53

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 34 54 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 54

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 55

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 56

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 03 00 00 00 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 57

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 03 00 00 00 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 58

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 59

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 03 00 00 00 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 60

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 61

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 62

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 63

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 64

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 65

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 66

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 32 50 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 67

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 32 50 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 68

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 69

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 32 50 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

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
  * Count: `3`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 06 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
  * Format Data: `06 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000006`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `6`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 40 1F 00 00 40 1F 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `8`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `8000`
  * `.MaximumSampleFrequency`: `8000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 07 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
  * Format Data: `07 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000007`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `7`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 40 1F 00 00 40 1F 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `8`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `8000`
  * `.MaximumSampleFrequency`: `8000`
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

## Device: Sensoray 2253 Capture B

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_1943&pid_2253#6&7947e71&0&3#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\s2253av2`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`

Property Pages:

  * `{F8CC4397-2CDA-43E4-9EB1-FAC1D19AE25B}` - VideoControlPropertyPage Class
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page
  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, VideoDecoder Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Hue`: `0`, flags `0x02`; `-128`..`127`, step `1`, default `0`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`

### Pin: Xbar Video In

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4283-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_ANALOGVIDEOIN`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Xbar Audio In

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: Failed to Get Pin Category 0x80070490
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `70`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 55 59 56 59 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 55 59 56 59 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
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
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 D4 01 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `30720000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 59 55 59 32 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 32 36 34 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 32 36 34 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 48 32 36 34 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 32 36 34 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 48 32 36 34 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H264`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `875967048` `H264`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 56 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 56 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 56 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 50 34 56 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4V`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1446269005` `MP4V`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 4A 50 47 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 46 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 50 34 46 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 50 34 46 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 50 34 46 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 50 34 46 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MP4F`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1177833549` `MP4F`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `307,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 A9 03 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `61440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `307,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 2C 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 40 19 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 08 00 59 38 30 30 00 2C 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `18432000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `76,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 2C 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 60 EA 00 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 08 00 59 38 30 30 00 2C 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `15360000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `76,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 46 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 A0 F1 04 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 08 00 59 38 30 30 00 46 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `345,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `82944000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `345,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 2D 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,949,120`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 38 30 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 54 06 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 A0 F1 04 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 08 00 59 38 30 30 00 54 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC Y800`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `414,720`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `82944000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `808466521` `Y800`
   * `.biSizeImage`: `414,720`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 25 00 00 00 46 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `2,457,600`
  * `.MaxBitsPerSecond`: `88,473,600`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 48 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 46

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 48 34 54 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 47

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 48 34 54 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC H4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027336` `H4TS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 48

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 49

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 50

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 51

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 34 54 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 52

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 34 54 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 53

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 34 54 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 34 54 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M4TS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1398027341` `M4TS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 54

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 55

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 53 07 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `122880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 56

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 03 00 00 00 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 57

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 80 32 02 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 03 00 00 00 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 58

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 40 E3 09 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 03 00 00 00 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 5A 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `5,898,240`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 59

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7B EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 03 00 00 00 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 4B 00 00 00 8C 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `4,915,200`
  * `.MaxBitsPerSecond`: `176,947,200`

#### Capability: 60

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 61

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 62

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 63

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 64

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 65

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 80 FC 0A 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `184320000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 66

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 C0 4B 03 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 32 50 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 67

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 20 BF 02 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 32 50 53 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `46080000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 68

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 E0 D4 0E 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 18 00 4D 32 50 53 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,036,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `1,036,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 00 03 00 00 E0 01 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 00 87 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1`
  * `.InputSize`: `768` x `480`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `8,847,360`
  * `.MaxBitsPerSecond`: `265,420,800`

#### Capability: 69

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 32 50 53 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 01 00 00 00 00 FC 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 09 4B 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 00 E0 D4 0E 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 18 00 4D 32 50 53 00 FC 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC M2PS`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `1`
  * `.lSampleSize`: `1,244,160`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `576`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1397764685` `M2PS`
   * `.biSizeImage`: `1,244,160`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F0 07 00 00 00 03 00 00 40 02 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 00 00 00 60 00 00 00 00 03 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 80 70 00 00 00 D2 0F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2032`
  * `.InputSize`: `768` x `576`
  * `.MinCroppingSize`: `128` x `96`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `128` x `96`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `7,372,800`
  * `.MaxBitsPerSecond`: `265,420,800`

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
  * Count: `3`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 06 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
  * Format Data: `06 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000006`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `6`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 40 1F 00 00 40 1F 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `8`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `8000`
  * `.MaximumSampleFrequency`: `8000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 07 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 98 4D 4B 00`
  * Format Data: `07 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000007`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `7`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 40 1F 00 00 40 1F 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `8`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `8000`
  * `.MaximumSampleFrequency`: `8000`
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

## Device: Sensoray 2253 Decode

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_1943&pid_2253#6&7947e71&0&3#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\s2253render0`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMFilterMiscFlags`
  * `IAMVideoProcAmp`

Property Pages:

  * `{F8CC4397-2CDA-43E4-9EB1-FAC1D19AE25B}` - VideoControlPropertyPage Class
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page
  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, VideoDecoder Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Hue`: `0`, flags `0x02`; `-128`..`127`, step `1`, default `0`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `128`, flags `0x02`; `0`..`255`, step `1`, default `128`, cap flags `0x02`

### Pin: Capture

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

# Audio

